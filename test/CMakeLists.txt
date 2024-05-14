# Add Unity as subdir
add_subdirectory(${CMAKE_SOURCE_DIR}/Unity Unity)

# Add the test executable
add_executable(UnitTests Test_args.c)

# Include dirs
target_include_directories(UnitTests PRIVATE ${CMAKE_SOURCE_DIR}/src/args/include ${CMAKE_SOURCE_DIR}/Unity/src)

# Link libraries
target_link_libraries(UnitTests PRIVATE args unity)