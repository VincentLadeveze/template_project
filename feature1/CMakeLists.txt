# Add feature1 source subdirectory
add_subdirectory(src)

message("feature1 dir: CMAKE_SOURCE_DIR		=	${CMAKE_SOURCE_DIR}")
message("feature1 dir: CMAKE_BINARY_DIR		=	${CMAKE_BINARY_DIR}")
message("feature1 dir: CMAKE_CURRENT_SOURCE_DIR	=	${CMAKE_CURRENT_SOURCE_DIR}")
message("feature1 dir: CMAKE_CURRENT_BINARY_DIR	=	${CMAKE_CURRENT_BINARY_DIR}")
message("feature1 dir: CMAKE_CURRENT_LIST_DIR	=	${CMAKE_CURRENT_LIST_DIR}")

target_sources(${PROJECT_NAME} PRIVATE
                ${CMAKE_CURRENT_LIST_DIR}/${includeDir}/feature1.hpp
                )
message("feature1 dir: Headers DIR	        =	${CMAKE_CURRENT_LIST_DIR}/${includeDir}")

target_include_directories(${PROJECT_NAME} PRIVATE 
                            "${CMAKE_CURRENT_LIST_DIR}/${includeDir}"
                            )
