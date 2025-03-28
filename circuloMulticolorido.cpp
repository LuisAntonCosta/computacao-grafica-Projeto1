#include <GL/glut.h>
#include <math.h>

float x_position = 0.0f;
float pi = 3.14159;
void circulo(float raio) {
float angle;
int i = 0;
glBegin(GL_POLYGON);
for (i = 0; i < 360; i++) {
angle = i * pi / 180;

glColor3f(
(rand() % 100) / 100.0f,  
(rand() % 100) / 100.0f,  
(rand() % 100) / 100.0f  
);

glVertex2f(raio * cos(angle), raio * sin(angle));
}
glEnd();
}

void display()
{
int j;
glClear(GL_COLOR_BUFFER_BIT);


glColor3f(1, 0, 0);


glRotatef(-0.1f, 0, 0, 1);

circulo(50.0f);

glFlush();
}

void animar(int timer) {
glutPostRedisplay();
x_position += 0.00001f;
glutTimerFunc(timer, animar, 0);
}



int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
glutInitWindowSize(640, 640);
glutCreateWindow("Circulo");
glutDisplayFunc(display);
glutTimerFunc(1000, animar, 0);
gluOrtho2D(-100, 100, -100, 100);
glClearColor(1, 1, 1, 0);
glutMainLoop();
return 0;
}
