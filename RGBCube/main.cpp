#include <iostream>
#include <vector>
#include <opencv2/imgcodecs.hpp>
#ifdef __unix__
#include <GL/glut.h>
#elif defined(_WIN32) || defined(WIN32)
#include <glut.h>
#endif

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

bool work = true;

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
//        glColor3f(p.r,p.g,p.b); glVertex3f(  p.x,  p.y, p.z);
        glColor3f(1,1,1); glVertex3f(  p.x,  p.y, p.z);
    }
    glEnd();

    glFlush();
    glutSwapBuffers();
}

/// поворот куба
/// \param key - ключ поворота
/// \param x - координата мыши x относительно окна
/// \param y - координата мыши y относительно окна
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

    std::cout << "введите адрес изображения\n";
    std::string img_path;
    std::cin >> img_path;
    cv::Mat frame = cv::imread(img_path);

    for(int i=0; i< frame.rows ;i++)
    {
        for(int j=0; j< frame.cols ; j++)
        {
            points.emplace_back(int(frame.at<cv::Vec3b>(i, j)[0]),
                                int(frame.at<cv::Vec3b>(i, j)[1]),
                                int(frame.at<cv::Vec3b>(i, j)[2]));
        }
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
