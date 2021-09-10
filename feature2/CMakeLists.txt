target_sources(${PROJECT_NAME} PRIVATE
                ${CMAKE_CURRENT_LIST_DIR}/feature2.cpp
                ${CMAKE_CURRENT_LIST_DIR}/${includeDir}/feature2.hpp
                )

target_include_directories(${PROJECT_NAME} PUBLIC 
                            "${CMAKE_CURRENT_LIST_DIR}/${includeDir}"
                            )
