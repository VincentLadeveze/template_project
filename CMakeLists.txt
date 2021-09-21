cmake_minimum_required(VERSION 3.14)

# specify the C++ and C standards
set(CXX_STANDARD_VERSION 17)            # C++17
set(C_STANDARD_VERSION 17)              # C17

set(CMAKE_CXX_STANDARD ${CXX_STANDARD_VERSION})
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_C_STANDARD ${C_STANDARD_VERSION})
set(CMAKE_C_STANDARD_REQUIRED True)

set(TEMPLATE_VERSION 1.0.3.12)

message("Language Version: C++" ${CXX_STANDARD_VERSION})

# set the project name
project(MyTemplate 
            VERSION         ${TEMPLATE_VERSION}
            DESCRIPTION     "Describe briefly your project"
            LANGUAGES       CXX   # C_EXTENSIONS
            )

# Set variables
set(sourceDir src)
set(includeDir include)
message("Project name is                : " ${PROJECT_NAME})
message("Include dir name is            : " ${sourceDir})
message("Source dir name is             : " ${includeDir})

# Build Executable or Library
option(BUILD_EXEC "Build executable option" ON)
option(BUILD_LIB "Build library option" OFF)
if(BUILD_EXEC)
    # add binary as executable
    add_executable(${PROJECT_NAME})
    target_sources(${PROJECT_NAME} PRIVATE
                ${CMAKE_CURRENT_LIST_DIR}/main.cpp
                )
elseif(BUILD_LIB)
    # add binary as library ()
    option(BUILD_SHARED_LIBS "Build using shared libraries" ON)     # Add -DBUILD_SHARED_LIBS=OFF in cmake command line (vs code tasks) to build a static library.
    add_library(${PROJECT_NAME})
    set_target_properties(MyStuff PROPERTIES VERSION ${TEMPLATE_VERSION})
endif()

# Add tests
option(ENABLE_TESTS "Build tests option" OFF)
if(ENABLE_TESTS)
    enable_testing()
    add_subdirectory(tests)
    # Conan packages
    find_package(googletest REQUIRED)
    find_package(glog REQUIRED)
endif()

# Add subdirectories absolutly after add executable (target_sources() won't build)
add_subdirectory(src)
add_subdirectory(feature1)
add_subdirectory(feature2)
add_subdirectory(feature3)


# Put after 'add_executable' cause target name must be known.
# If no reference, put before headers.
target_include_directories(${PROJECT_NAME} PUBLIC 
                            "${PROJECT_BINARY_DIR}"
                            "${CMAKE_CURRENT_LIST_DIR}/${includeDir}"
                            )

# Headers for version
configure_file(${includeDir}/TemplateConfig.h.in TemplateConfig.h)


