cmake_minimum_required(VERSION 3.14)

# specify the C++ and C standards
set(CXX_STANDARD_VERSION 17)            # C++17
set(C_STANDARD_VERSION 17)              # C17

set(CMAKE_CXX_STANDARD ${CXX_STANDARD_VERSION})
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_C_STANDARD ${C_STANDARD_VERSION})
set(CMAKE_C_STANDARD_REQUIRED True)

message("Language Version: C++" ${CXX_STANDARD_VERSION})

# set the project name
project(MyTemplate 
            VERSION         1.0.3.12
            DESCRIPTION     "Describe briefly your project"
            LANGUAGES       CXX   # C_EXTENSIONS
            )

# Set variables
set(sourceDir src)
set(includeDir include)
message("Project name is                : " ${PROJECT_NAME})
message("Include dir name is            : " ${sourceDir})
message("Source dir name is             : " ${includeDir})

# add binary as executable
add_executable(${PROJECT_NAME})

# add binary as library ()

# Add subdirectories absolutly after add executable (target_sources() won't build)
add_subdirectory(src)
add_subdirectory(feature1)
add_subdirectory(feature2)
add_subdirectory(feature3)


# Put after 'add_executable' cause target name must be known.
# If no reference, put before headers.
target_include_directories(${PROJECT_NAME} PUBLIC 
                            "${PROJECT_BINARY_DIR}"
                            )

# Headers for version
configure_file(${includeDir}/TemplateConfig.h.in TemplateConfig.h)
