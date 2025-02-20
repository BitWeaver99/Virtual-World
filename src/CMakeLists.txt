add_executable(virtual_world ${CMAKE_CURRENT_LIST_DIR}/main.c)

add_subdirectory(config)

target_include_directories(virtual_world PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
