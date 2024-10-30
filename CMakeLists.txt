cmake_minimum_required (VERSION 3.30)
project(BuilderPattern)

set(CMAKE_CXX_STANDARD 23)

file(GLOB SOURCES "src/*.cpp")
include_directories(${PROJECT_NAME} "./include")


add_executable(${PROJECT_NAME} "./main/main.cpp" ${SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/.."
)