cmake_minimum_required(VERSION 3.10)

# specify the C++ standard
set(CXX_STANDARD_VERSION 17)            # C++17

set(CMAKE_CXX_STANDARD ${CXX_STANDARD_VERSION})
set(CMAKE_CXX_STANDARD_REQUIRED True)
message("Language Version: C++" ${CXX_STANDARD_VERSION})

# set the project name
project(MyTemplate VERSION 1.0.3.12)

# Set variables
set(sourceDir src)
set(includeDir include)
message("Project name 2 ways retreive   :" ${prjName} ", " ${PROJECT_NAME})
message("Include dir name is            :" ${sourceDir})
message("Source dir name is             :" ${includeDir})

# add the executable
add_executable(${PROJECT_NAME})

# Add subdirectories absolutly after add executable (target_sources() won't build)
add_subdirectory(src)
add_subdirectory(feature1)
add_subdirectory(feature2)
#add_subdirectory(feature3)


#target_sources(${PROJECT_NAME} PRIVATE
#                ${CMAKE_CURRENT_LIST_DIR}/feature2/feature2.cpp
#                )


# Put after 'add_executable' cause target name must be known.
# If no reference, put before headers.
target_include_directories(${PROJECT_NAME} PUBLIC 
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_BINARY_DIR}/${includeDir}"
                            #"${PROJECT_BINARY_DIR}/feature1/${includeDir}"
                            #"${PROJECT_BINARY_DIR}/feature2/${includeDir}"
                            #"${PROJECT_BINARY_DIR}/feature3/${includeDir}"
                            )

# Headers for version
configure_file(${includeDir}/TemplateConfig.h.in TemplateConfig.h)
