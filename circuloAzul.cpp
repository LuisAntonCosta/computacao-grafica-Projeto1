#include <GL/glut.h>
#include <math.h>
#include <iostream>

using namespace std;

float pi = 3.14159;

void circulo1(float raio) {
float angle;
int i;
glBegin(GL_POLYGON);
for (i = 0; i < 360; i++) {
angle = i * pi / 180;
glVertex2f(raio * cos(angle), raio * sin(angle));
cout << " X: " << raio * cos(angle) << " Y: " << raio * sin(angle) << "\n";
}
glEnd();
}

void circulo2(float raio) {
float angle;
int i;
glBegin(GL_POLYGON);
for (i = 0; i < 360; i++) {
angle = i * pi / 180;
glVertex2f(raio * cos(angle), raio * sin(angle));
cout << " X: " << raio * cos(angle) << " Y: " << raio * sin(angle) << "\n";
}
glEnd();
}

void circulo3(float raio) {
float angle;
int i;
glBegin(GL_POLYGON);
for (i = 0; i < 360; i++) {
angle = i * pi / 180;
glVertex2f(raio * cos(angle), raio * sin(angle));
cout << " X: " << raio * cos(angle) << " Y: " << raio * sin(angle) << "\n";
}
glEnd();
}

void circulo4(float raio) {
float angle;
int i;
glBegin(GL_POLYGON);
for (i = 0; i < 360; i++) {
angle = i * pi / 180;
glVertex2f(raio * cos(angle), raio * sin(angle));
cout << " X: " << raio * cos(angle) << " Y: " << raio * sin(angle) << "\n";
}
glEnd();
}


void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0, 0.0, 0.2);
circulo1(40.0f);

glColor3f(0.0, 0.0, 0.6);
circulo2(30.0f);

glColor3f(0.0, 0.0, 0.2);
circulo3(20.0f);

glColor3f(1,1,1);
circulo4(10.0f);
glFlush();
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
glutInitWindowSize(640, 640);
glutCreateWindow("Circulo");
glutDisplayFunc(display);
gluOrtho2D(-100, 100, -100, 100);
glClearColor(1, 1, 1, 0);
glutMainLoop();
return 0;
}
