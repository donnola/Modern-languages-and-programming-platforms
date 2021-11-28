#include <iostream>
#include <GL/glut.h>
#include <cstdlib>
#include <ctime>
#include <vector>

/// структура хранящая координаты точки (x, y, z) и соответсвующий ей цвет (r, g, b)
struct Point {
    float x;
    float y;
    float z;
    float r;
    float g;
    float b;

    Point(int i, int j, int k) : x(i/255.0 - 0.5), y(j/255.0 - 0.5), z(k/255.0 - 0.5),
    r(i/255.0), g(j/255.0), b(k/255.0) {}
};

/// массив всех точек
std::vector<Point> points;

/// углы поворота
double rotate_y=0;
double rotate_x=0;

/// отображение куба с точками в окне
void display(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glLoadIdentity();

    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 1.0, 0.0 );

    glLineWidth(2);

    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0); glVertex3f( -0.5, -0.5, -0.5);
    glColor3f(1, 0, 0); glVertex3f( 0.5,  -0.5, -0.5);
    glColor3f(1, 0, 1); glVertex3f(  0.5,  -0.5, 0.5);
    glColor3f(0, 0, 1); glVertex3f(  -0.5, -0.5, 0.5);
    glColor3f(0, 0, 0); glVertex3f( -0.5, -0.5, -0.5);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 1); glVertex3f(  -0.5, -0.5, 0.5);
    glColor3f(0, 1, 1); glVertex3f(  -0.5, 0.5, 0.5);
    glColor3f(0, 1, 0); glVertex3f(  -0.5, 0.5, -0.5);
    glColor3f(0, 0, 0); glVertex3f( -0.5, -0.5, -0.5);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1, 0, 1); glVertex3f(  0.5,  -0.5, 0.5);
    glColor3f(1, 1, 1); glVertex3f(  0.5,  0.5, 0.5);
    glColor3f(0, 1, 1); glVertex3f(  -0.5,  0.5, 0.5);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1, 0, 0); glVertex3f(  0.5,  -0.5, -0.5);
    glColor3f(1, 1, 0); glVertex3f(  0.5,  0.5, -0.5);
    glColor3f(0, 1, 0); glVertex3f(  -0.5,  0.5, -0.5);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1, 1, 1); glVertex3f(  0.5,  0.5, 0.5);
    glColor3f(1, 1, 0); glVertex3f(  0.5,  0.5, -0.5);
    glEnd();

    glBegin(GL_POINTS);
    for (Point p : points) {
        glColor3f(1,1,1); glVertex3f(  p.x,  p.y, p.z);
    }
    glEnd();

    glFlush();
    glutSwapBuffers();
}

/// поворот куба
void specialKeys( int key, int x, int y ) {
    if (key == GLUT_KEY_RIGHT)
        rotate_y += 5;

    else if (key == GLUT_KEY_LEFT)
        rotate_y -= 5;

    else if (key == GLUT_KEY_UP)
        rotate_x += 5;

    else if (key == GLUT_KEY_DOWN)
        rotate_x -= 5;

    glutPostRedisplay();
}


int main(int argc, char* argv[]){
    srand(static_cast<unsigned int>(time(0)));
    int N = 1000;
    for (int i = 0; i < N; ++i) {
        int x = rand() % 255;
        int y = rand() % 255;
        int z = rand() % 255;
        points.emplace_back(x,y,z);
    }
    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(600,600);
    glutCreateWindow("RGBCube");

    glEnable(GL_DEPTH_TEST);

    glutDisplayFunc(display);
    glutSpecialFunc(specialKeys);

    glutMainLoop();

    return 0;
}

// g++ main.cpp -o RGBCube -lglut -lGLU -lGL
// ./RGBCube

// doxygen
// code style guide
