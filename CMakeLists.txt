cmake_minimum_required(VERSION 3.22.1)

project(
  PDFMerge
  VERSION 0.0
  LANGUAGES C
  DESCRIPTION "A simple PDF merge command line utility"
)

# main executable
add_executable(pdfm
  src/main.c
)

# libraries
add_subdirectory(src/args)

target_include_directories(pdfm PUBLIC src/args/include)

target_link_libraries(pdfm PUBLIC args)

# compiler flags
set(CMAKE_C_FLAGS "-Wall -Wextra -Werror -Wpedantic")

# c standard
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED True)
