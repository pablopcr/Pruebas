#include <GL/freeglut.h>
#include <iostream>


void dibujar() {
	glClear(GL_COLOR_BUFFER_BIT);//Limpiamos la pantalla con el color que esta en el buffet(que pusimos en "iniciar")

	glBegin(GL_LINES);//Empieza el dibujado de puntos

	/*Para dibujar una linea simplemente dibujamos dos puntos y el ordenador los dibuja directamente*/


	glVertex2d(20, 20);//Dibujamos un punto en la posicion 20,20
	glVertex2d(700, 400);//Dibujamos un punto 
	

	glEnd();//Finaliza el dibujado de lineas

	/*Si queremos que en vez de hacerse lineas uniendo 2 punto, las haga con 3 puntos y cada punto nuevo se una con el anterior(linea 1(1,2),linea 2(2,3)...
	se hace de la siguiente forma*/

	glBegin(GL_LINE_STRIP);//Si ponemos GL_LINE_LOOP el ultimo punto se une con el primero
	glColor3f(0, 1.f, 0);
	glVertex2d(200, 20);//Dibujamos un punto en la posicion 20,20
	glVertex2d(700, 400);//Dibujamos un punto 
	glVertex2d(90, 320);//Dibujamos un punto en la posicion 20,20
	glVertex2d(400, 600);//Dibujamos un punto 

	glEnd();

	/*Para dibujar figuras Solo tenemos que indicar sus vertices*/

	glBegin(GL_POLYGON);
	glColor3f(0, 1.f, 0);
	glVertex2d(200, 20);
	glVertex2d(100, 120);
	glVertex2d(200, 220);

	glEnd();

	glFlush();//limpia la pantalla
}

void iniciar() {
	glClearColor(0, 0, 1, 1); //Limpiamos la pantalla con el color que le pongamos

	glLineWidth(3.f);//ancho de linea

	glColor3f(1.f, 0, 0);//Color con el que vamos a dibujar. La f es de float por lo que podemos usar numeros decimales

	glOrtho(800, 0, 600, 0, -1, 1);//Camara, veremos su funcionamiento mas adelante
}




int main(int argc, char * args[])
{
	glutInit(&argc, args);//Iniciamos glut

	glutInitDisplayMode(GLUT_RGB| GLUT_SINGLE); //Inicializamos el modo de videos

	glutInitWindowSize(800, 600);//Indicamos el tamaño de la ventana

	glutInitWindowPosition(50, 50);//Indicamos la posicion de la ventana

	glutCreateWindow("Tutorial Opengl 4"); //Creamos la ventana y le ponemos un titulo

	glutDisplayFunc(dibujar);//decimos que funcion vamos a usar para dibujar

	iniciar();


	glutMainLoop();//Crea el Loop que es lo que escucha automaticamente a las funciones

	return 0;
}
