#include <GL/glut.h>

float x_position = 0.0f;
float direction = 1.0f;

void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.5, 0.0, 0.5);
//glTranslatef(x_position, 0, 0);
//glRotatef(0.1f, 0, 0, 1);
//glScalef(1, 1, 1.1f);

glBegin(GL_QUADS);
glVertex2f(10 + x_position, 10);
glVertex2f(10 + x_position, -10);
glVertex2f(-10 + x_position, -10);
glVertex2f(-10 + x_position, 10);
glEnd();
glFlush();
}
void animar(int timer) {
glutPostRedisplay();
x_position += 0.00001f;
glutTimerFunc(timer, animar, 10);
// Atualiza a posição
x_position += direction;  // A posição muda em cada atualização

// Verifica se atingiu os limites da tela e inverte a direção
if (x_position > 10.0f || x_position < -10.0f) {
direction = -direction;  // Inverte a direção quando atinge o limite
}
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
glutInitWindowSize(640, 640);
glutCreateWindow("Transformacoes");
glutDisplayFunc(display);
glutTimerFunc(100, animar, 100);
gluOrtho2D(-100, 100, -100, 100);
glClearColor(1, 1, 1, 0);
glutMainLoop();
return 0;
}
