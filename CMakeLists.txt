cmake_minimum_required(VERSION 3.10)

# specify the C++ standard
set(CXX_STANDARD_VERSION 17)            # C++17

set(CMAKE_CXX_STANDARD ${CXX_STANDARD_VERSION})
set(CMAKE_CXX_STANDARD_REQUIRED True)
message("Language Version: C++" ${CXX_STANDARD_VERSION})

# set the project name
set(projectName MyTemplate) 
project(${projectName} VERSION 1.0.3.12)

# Set variables
set(sourceDir src)
set(includeDir include)
message("Project name is           :" ${projectName})
message("Include dir name is       :" ${sourceDir})
message("Source dir name is        :" ${includeDir})

# Add Feature1 subdirectory
add_subdirectory(feature1)
add_subdirectory(feature2)
add_subdirectory(feature3)

# add the executable
add_executable(${projectName}
                main.cpp
                feature1/${sourceDir}
                feature2/${sourceDir}
                feature3/${sourceDir}
                )

# Put after 'add_executable' cause target name must be known.
# If no reference, put before headers.
target_include_directories(${projectName} PUBLIC 
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_BINARY_DIR}/${includeDir}"
                            "${PROJECT_BINARY_DIR}/feature1/${includeDir}"
                            "${PROJECT_BINARY_DIR}/feature2/${includeDir}"
                            "${PROJECT_BINARY_DIR}/feature3/${includeDir}"
                            )

# Headers for version
configure_file(${includeDir}/TemplateConfig.h.in TemplateConfig.h)
