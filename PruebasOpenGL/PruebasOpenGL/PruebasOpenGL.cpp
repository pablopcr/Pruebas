#include <GL/freeglut.h>
#include <iostream>


void dibujar() {
	glFlush();//limpia la pantalla
}
int main(int argc, char * args[])
{
	glutInit(&argc, args);//Iniciamos glut

	glutInitDisplayMode(GLUT_RGB/*Modo de video*/ | GLUT_SINGLE /*Cantidad buffet que usaremos*/); //Inicializamos el modo de videos

	glutInitWindowSize(800, 600);//Indicamos el tamaño de la ventana

	glutInitWindowPosition(50, 50);//Indicamos la posicion de la ventana

	glutCreateWindow("Tutorial Opengl 1"); //Creamos la ventana y le ponemos un titulo

	glutDisplayFunc(dibujar);//decimos que funcion vamos a usar para dibujar

	glutMainLoop();//Crea el Loop que es lo que escucha automaticamente a las funciones

	return 0;
}
