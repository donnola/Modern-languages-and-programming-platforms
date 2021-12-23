if(WIN32)
    cmake_minimum_required(VERSION 3.20)
    project(RGBCube)
    find_package(OpenGL REQUIRED)
    find_package(OpenCV REQUIRED)
    include_directories(freeglut)
    add_custom_target(glutdlllib
            COMMAND ${CMAKE_COMMAND} -E copy
#            ${PROJECT_SOURCE_DIR}/freeglut/bin/freeglut.dll
            ${PROJECT_SOURCE_DIR}/freeglut/bin/x64/freeglut.dll
#            ${PROJECT_SOURCE_DIR}/freeglut/lib/freeglut.lib
            ${PROJECT_SOURCE_DIR}/freeglut/lib/x64/freeglut.lib
            ${PROJECT_SOURCE_DIR}/freeglut/include/GL/freeglut.h
            ${PROJECT_SOURCE_DIR}/freeglut/include/GL/glut.h
            ${PROJECT_SOURCE_DIR}/freeglut/include/GL/freeglut_std.h
            ${PROJECT_SOURCE_DIR}/freeglut/include/GL/freeglut_ext.h
            ${CMAKE_BINARY_DIR}
            )
    include_directories( ${OPENGL_INCLUDE_DIRS} ${OpenCV_INCLUDE_DIRS})
    set(CMAKE_CXX_STANDARD 20)

    add_executable(RGBCube main.cpp)

    target_link_libraries(RGBCube ${OPENGL_LIBRARIES} ${OpenCV_LIBS})
    add_dependencies(RGBCube glutdlllib)
    install(TARGETS RGBCube DESTINATION .)
endif()
if(UNIX)
    cmake_minimum_required(VERSION 3.16)
    project(RGBCube)
    find_package(OpenGL REQUIRED)
    find_package(GLUT REQUIRED)
    find_package(OpenCV REQUIRED)
    include_directories( ${OPENGL_INCLUDE_DIRS} ${OpenCV_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} ${GLUT_ROOT_PATH})
    set(CMAKE_CXX_STANDARD 20)

    add_executable(RGBCube main.cpp)

    target_link_libraries(RGBCube ${OPENGL_LIBRARIES} ${OpenCV_LIBS} ${GLUT_LIBRARY})
    install(TARGETS RGBCube DESTINATION .)
endif()