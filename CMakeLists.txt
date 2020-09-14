cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Setup the project.
# Its name is defined to be the controller directory name.
set(PROJECT exercise1)
project(${PROJECT})

# Get C or C++ sources in the current directory (only).
file(GLOB C_SOURCES *.c)
file(GLOB CPP_SOURCES *.cpp)
set(SOURCES ${C_SOURCES} ${CPP_SOURCES})

# Setup the target executable.
add_executable(${PROJECT} ${SOURCES})

if (MSVC)
    set_property (DIRECTORY PROPERTY VS_STARTUP_PROJECT ${PROJECT})
endif()
