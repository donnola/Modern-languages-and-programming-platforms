cmake_minimum_required(VERSION 3.20)
project(RGBCube)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
find_package(OpenCV REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} ${GLUT_ROOT_PATH} ${OpenCV_INCLUDE_DIRS})
set(CMAKE_CXX_STANDARD 20)

add_executable(RGBCube main.cpp)

target_link_libraries(RGBCube ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} ${OpenCV_LIBS})
