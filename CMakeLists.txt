cmake_minimum_required(VERSION 3.22)
project(OpenCV)

set(CMAKE_CXX_STANDARD 14)

#set(OpenCV_DIR C:/Fedora/build)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake-modules)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set( NAME_SRC
        src/main.cpp
        )

set( NAME_HEADERS
        include/header.h)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(OpenCV src/main.cpp include/Chapter1.h src/Chapter1.cpp)

# add libs you need
set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)

# linking
target_link_libraries(OpenCV ${OpenCV_LIBS})
link_directories( ${CMAKE_BINARY_DIR}/bin)


set (source "${CMAKE_SOURCE_DIR}/Resources")
set (destination "${CMAKE_CURRENT_BINARY_DIR}/Resources")
add_custom_command(
        TARGET ${PROJECT_NAME} OpenCV
        COMMAND ${CMAKE_COMMAND} -E create_symlink ${source} ${destination}
        DEPENDS ${destination}
        COMMENT "symbolic link resources folder from ${source} => ${destination}"
)