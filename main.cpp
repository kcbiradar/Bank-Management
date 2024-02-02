#include<GL/glut.h>

void display();

int main(int argc , char** argv) {

    glutInit(&argc , argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

    glutInitWindowPosition(200 , 100);
    glutInitWindowSize(500 , 500);

    glutCreateWindow("Hello world!");

    glutDisplayFunc(display);

    glutMainLoop();
    
}

void display() {

}