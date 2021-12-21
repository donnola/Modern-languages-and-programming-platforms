if(WIN32)
    cmake_minimum_required(VERSION 3.20)
    project(RGBCube)
    find_package(OpenGL REQUIRED)
    find_package(OpenCV REQUIRED)
    include_directories(GL)
    add_custom_target(glutdlllib
            COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/GL/glut32.lib ${PROJECT_SOURCE_DIR}/GL/glut32.dll ${CMAKE_BINARY_DIR}
            )
    set(OpenGlLibs glut32 opengl32)
    include_directories( ${OPENGL_INCLUDE_DIRS} ${OpenCV_INCLUDE_DIRS})
    set(CMAKE_CXX_STANDARD 20)

    add_executable(RGBCube main.cpp)

    target_link_libraries(RGBCube ${OPENGL_LIBRARIES} ${OpenCV_LIBS} ${OpenGlLibs})
    add_dependencies(RGBCube glutdlllib)
endif()
if(UNIX)
    cmake_minimum_required(VERSION 3.20)
    project(RGBCube)
    find_package(OpenGL REQUIRED)
    find_package(GLUT REQUIRED)
    find_package(OpenCV REQUIRED)
    include_directories( ${OPENGL_INCLUDE_DIRS} ${OpenCV_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} ${GLUT_ROOT_PATH})
    set(CMAKE_CXX_STANDARD 20)

    add_executable(RGBCube main.cpp)

    target_link_libraries(RGBCube ${OPENGL_LIBRARIES} ${OpenCV_LIBS} ${GLUT_LIBRARY})
endif()