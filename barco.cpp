#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(20.0f);

    // Desenha a vela
    glColor3f(0.765, 0.765, 0.765); // Cinza
    glBegin(GL_TRIANGLES);
    glVertex2f(-1.8, 8.4); //N
    glVertex2f(-4.5, 1.5); //L
    glVertex2f(4.5, 1.5); //M
    glEnd();

    // Desenha a estrutura principal do barco
    glColor3f(1.0f, 0.0f, 0.0f); //vermelho
    glBegin(GL_QUADS);
    glVertex2f(-7,0);
    glVertex2f(7,0);
    glVertex2f(3, -3);
    glVertex2f(-3, -3);

    glEnd();

    // Desenha o mastro
    glColor3f(0.502, 0.251, 0.0); // Marrom
    glBegin(GL_QUADS);
    glVertex2f(-2, 0); //H
    glVertex2f(-1.5, 0); //K
    glVertex2f(-1.5, 8.0); //F
    glVertex2f(-2, 8.5); //E
    glEnd();

    // Desenha a Bandeira
    glColor3f(0, 0, 1); //Azul
    glBegin(GL_QUADS);
    glVertex2f(-2, 8.0); //E
    glVertex2f(0.5, 8.0); //J
    glVertex2f(0.5, 8.8); //I
    glVertex2f(-2, 8.8); //G
    glEnd();

    glFlush();
}

void init()
{
    glClearColor(1.0, 0.957, 0.816,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10, 10, -10, 10);  // Melhor ajuste para a visualização
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(640, 640);
    glutCreateWindow("Casa OpenGL");

    init();
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
