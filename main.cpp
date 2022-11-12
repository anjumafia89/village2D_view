#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#define PI 3.1416

float windowHeight = 800;
float windowWidth = 1200;

bool flagScale=false;
double running_boat_move=0;
double smallcloud1_move=0;
double smallcloud2_move=0;
double smallcloud3_move=0;
double smallcloud4_move=0;
double cloudbig1_move=0;
double cloudbig2_move=0;


void sky(){

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1,0,0.3);
    glVertex2f(-20.0,33.0);
    glColor3f(0.2,0.7,0.8);
    glVertex2f(-20.0,15.0);
    glVertex2f(25.0,15.0);
       glColor3f(1,0,0.3);
     glVertex2f(25.0,33.0);
glEnd();

}

void pahar(){
    glPushMatrix();
glBegin(GL_TRIANGLES);
      glColor3f(0.1,0,0);
    glVertex2f(-12.5,22.0);
      glColor3f(0.3,0.5,0.1);
    glVertex2f(-20.0,15.0);
    glColor3f(0.1,0,0);
    glVertex2f(-6.5,15.0);
glEnd();
glPopMatrix();

}

void river()
{
glPushMatrix();
glBegin(GL_QUADS);
      glColor3f(1,0.2,0.1);
    glVertex2f(-20.0,15.0);
      glColor3f(0.6,0.8,1);
    glVertex2f(-20.0,10.0);
      glColor3f(0.6,0.8,1);
    glVertex2f(25.0,4.4);
      glColor3f(1,0.2,0.1);
     glVertex2f(25.0,15.0);
glEnd();
glPopMatrix();

}

void running_boat()
{


glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(0.0,13.0);
    glVertex2f(2.0,11.5);
    glVertex2f(9.0,11.5);
    glVertex2f(11.0,13.0);

glEnd();
glPopMatrix();

glBegin(GL_QUADS);
    glColor3f(0.1,0,0);
    glVertex2f(2.0,14.5);
   glColor3f(0.7,0.6,0.6);
    glVertex2f(1.5,13.0);
    glColor3f(0.7,0.1,0.8);
    glVertex2f(10.0,13.0);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(9.0,14.5);

glEnd();
glPopMatrix();
}
void nowka1()
{


glPushMatrix();
glBegin(GL_POLYGON);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(10.6,6.8);
    glVertex2f(8.9,7.7);
    glVertex2f(9.5,6.4);
    glVertex2f(11.5,6.4);
    glVertex2f(12.3,7.7);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex2f(9.5,8.0);
    glVertex2f(9.5,5.1);
    glVertex2f(9.6,5.1);
    glVertex2f(9.6,8.0);

glEnd();
glPopMatrix();
/*2nd nowka*/
glPushMatrix();
glBegin(GL_POLYGON);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(13.0,6.4);
    glVertex2f(11.0,7.3);
    glVertex2f(12.0,6.1);
    glVertex2f(14.0,6.1);
    glVertex2f(14.7,7.3);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex2f(11.9,8.0);
    glVertex2f(11.9,5.1);
    glVertex2f(12.01,5.1);
    glVertex2f(12.01,8.0);

glEnd();
glPopMatrix();;

/*3rd nowka*/
glPushMatrix();
glBegin(GL_POLYGON);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(15.8,6.0);
    glVertex2f(13.8,7.0);
    glVertex2f(14.9,5.6);
    glVertex2f(17.0,5.6);
    glVertex2f(17.7,7.0);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex2f(14.2,7.5);
    glVertex2f(14.2,5.1);
    glVertex2f(14.4,5.1);
    glVertex2f(14.4,7.5);

glEnd();
glPopMatrix();
}
void nowka2()
{
/*nowkaaa*/
glPushMatrix();
glBegin(GL_POLYGON);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(-6.4,9.0);
    glVertex2f(-9.0,9.6);
    glVertex2f(-8.5,8.4);
    glVertex2f(-4.0,8.4);
    glVertex2f(-3.5,9.5);

glEnd();
glPopMatrix();
}

void back1st()
{
    glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.1,0,0);
    glVertex2f(-20.0,1.7);
    glVertex2f(-20.0,-4.0);
    glColor3f(0.6,0.8,0);
    glVertex2f(3.8,-4.0);
    glVertex2f(3.8,1.7);
glEnd();
glPopMatrix();

}

void bigtree()
{
    /*bigtree*/

glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.3,0.5,0.1);
    glVertex2f(-15.5,11.0);
    glColor3f(0.1,0,0);
    glVertex2f(-20.0,7.0);
       glColor3f(0.3,0.5,0.1);
    glVertex2f(-11.1,7.0);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.3,0.5,0.1);
    glVertex2f(-15.5,9.3);
      glColor3f(0.1,0,0);
    glVertex2f(-20.0,5.6);
     glColor3f(0.3,0.5,0.1);
    glVertex2f(-11.1,5.6);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.3,0.5,0.1);
    glVertex2f(-15.5,8.0);
    glColor3f(0.1,0,0);
    glVertex2f(-20.0,4.5);
        glColor3f(0.3,0.5,0.1);
    glVertex2f(-11.1,4.5);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.3,0.5,0.1);
    glVertex2f(-15.5,6.7);
    glColor3f(0.1,0,0);
    glVertex2f(-20.0,2.9);
  glColor3f(0.3,0.5,0.1);
    glVertex2f(-11.1,2.9);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.1,0,0);
    glVertex2f(-16.2,2.9);
    glVertex2f(-16.2,-2.3);
      glColor3f(0.7,0.5,0.2);
    glVertex2f(-14.8,-2.3);

    glVertex2f(-14.8,2.9);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
     glColor3f(0.1,0,0);
    glVertex2f(-16.2,-2.3);
    glVertex2f(-17.5,-3.1);
     glColor3f(0.7,0.0,0.1);
    glVertex2f(-13.5,-3.1);
    glVertex2f(-14.8,-2.3);
glEnd();
glPopMatrix();
}
void nearnodiback()
{
    /*nearnodi ghor back*/
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.5,0.3,0);
    glVertex2f(14.7,5.1);
    glVertex2f(13.5,-4.0);
    glColor3f(0.7,0.8,0.1);
    glVertex2f(25.0,-4.0);
    glVertex2f(25.0,4.0);
glEnd();
glPopMatrix();
}
void secondhouse()
{
/*3rd ghor near nodi*/
glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.8,0.2,0.3);
    glVertex2f(23.3,3.2);
    glVertex2f(21.5,0.5);
    glVertex2f(25.0,0.5);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.9,0.2,0.3);
    glVertex2f(22.0,0.0);
    glVertex2f(22.0,-1.5);
    glVertex2f(23.0,-1.5);
    glVertex2f(23.0,0.0);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1,0.8,0.1);
    glVertex2f(22.0,0.5);
    glVertex2f(22.0,-1.9);
    glVertex2f(24.5,-1.9);

    glVertex2f(24.5,0.5);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_POLYGON);
 glColor3f(0.9,0.2,0.3);
    glVertex2f(22.0,-1.9);
    glVertex2f(21.7,-2.7);
    glVertex2f(24.2,-2.7);
    glVertex2f(24.8,-2.7);
    glVertex2f(24.5,-1.9);
    glVertex2f(25.0,-2.7);
glEnd();
glPopMatrix();

//4th
glPushMatrix();
glBegin(GL_TRIANGLES);
glColor3f(0.8,0.2,0.3);
    glVertex2f(18.6,3.3);
    glVertex2f(16.7,0.5);
    glVertex2f(20.8,0.5);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.8,0.2,0.3);
   glVertex2f(17.7,0.0);
   glVertex2f(17.7,-1.1);
   glVertex2f(19.1,-1.1);
   glVertex2f(19.1,0.0);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
 glColor3f(0.7,0.2,0.3);
   glVertex2f(17.2,-1.7);
   glVertex2f(16.7,-2.5);
   glVertex2f(20.7,-2.5);
   glVertex2f(20.2,-1.7);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
   glColor3f(1,0.8,0.1);
   glVertex2f(17.2,0.6);
   glVertex2f(17.2,-1.9);
   glVertex2f(20.2,-1.9);
   glVertex2f(20.2,0.6);
glEnd();
glPopMatrix();


/*2nd*/
glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.9,0.2,0.3);
    glVertex2f(19.6,7.4);
    glVertex2f(17.8,4.2);
    glVertex2f(21.8,4.2);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_QUADS);
     glColor3f(0.9,0.2,0.3);
    glVertex2f(18.4,3.6);
    glVertex2f(18.4,2.5);
    glVertex2f(19.7,2.5);
    glVertex2f(19.7,3.6);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
   glColor3f(0.7,0.3,0.3);
    glVertex2f(18.4,1.8);
    glVertex2f(17.7,1.0);
    glVertex2f(21.7,1.0);
    glVertex2f(21.2,1.8);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1,0.8,0.1);
    glVertex2f(18.4,4.2);
    glVertex2f(18.4,1.8);
    glVertex2f(21.2,1.8);
    glVertex2f(21.2,4.2);
glEnd();
glPopMatrix();

/*nodi ghor*/
glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.7,0.3,0.3);
    glVertex2f(22.8,7.8);
    glVertex2f(21.0,4.8);
    glVertex2f(24.5,4.8);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
   glColor3f(0.9,0.2,0.3);
    glVertex2f(21.5,2.8);
    glVertex2f(20.5,2.0);
    glVertex2f(24.8,2.0);
    glVertex2f(24.0,2.8);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.9,0.2,0.3);
    glVertex2f(22.0,4.2);
    glVertex2f(22.0,3.3);
    glVertex2f(23.0,3.3);
    glVertex2f(23.0,4.2);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
   glColor3f(1,0.8,0.1);
    glVertex2f(21.5,4.8);
    glVertex2f(21.5,2.2);
    glVertex2f(24.0,2.2);
    glVertex2f(24.0,4.8);
glEnd();
glPopMatrix();

}
 void smalltree()
{
/*4tree*/
glPushMatrix();
glBegin(GL_TRIANGLES);
glColor3f(0.1,0,0);
  glVertex2f(14.6,1.0);
  glVertex2f(12.5,-1.2);
  glColor3f(0.3,0.5,0.1);
  glVertex2f(16.8,-1.2);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
   glColor3f(0.1,0,0);
    glVertex2f(14.2,-1.2);
    glVertex2f(14.2,-3.0);
     glColor3f(0.7,0.5,0.2);
    glVertex2f(15.2,-3.0);
    glVertex2f(15.2,-1.2);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
   glColor3f(0.1,0,0);
    glVertex2f(14.2,-3.0);
    glVertex2f(13.5,-3.4);
     glColor3f(0.7,0.0,0.1);
    glVertex2f(15.9,-3.4);
    glVertex2f(15.2,-3.0);
glEnd();
glPopMatrix();

/*3rd*/
glPushMatrix();
glBegin(GL_TRIANGLES);
glColor3f(0.1,0,0);
  glVertex2f(15.0,3.6);
   glVertex2f(13.0,1.5);
    glColor3f(0.3,0.5,0.1);
  glVertex2f(17.0,1.5);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
  glColor3f(0.1,0,0);
    glVertex2f(14.5,1.5);
    glVertex2f(14.5,-0.3);
      glColor3f(0.7,0.5,0.2);
    glVertex2f(15.5,-0.3);
    glVertex2f(15.5,1.5);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
   glColor3f(0.1,0,0);
    glVertex2f(14.5,-0.3);
    glVertex2f(14.0,-0.9);
     glColor3f(0.7,0.0,0.1);
    glVertex2f(16.0,-0.9);
    glVertex2f(15.5,-0.3);
glEnd();
glPopMatrix();

/*2nd*/
glPushMatrix();
glBegin(GL_TRIANGLES);
glColor3f(0.1,0,0);
  glVertex2f(16.0,6.5);
  glVertex2f(14.0,4.0);
  glColor3f(0.3,0.5,0.1);
  glVertex2f(18.0,4.0);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
 glColor3f(0.1,0,0);
    glVertex2f(15.5,4.0);
    glVertex2f(15.5,2.0);
       glColor3f(0.7,0.5,0.2);
    glVertex2f(16.5,2.0);
    glVertex2f(16.5,4.0);
glEnd();
glPopMatrix();

    /*lst tree near nodi*/
glPushMatrix();
glBegin(GL_QUADS);
   glColor3f(0.1,0,0);
    glVertex2f(16.5,7.0);
    glVertex2f(16.5,4.5);
     glColor3f(0.7,0.5,0.2);
    glVertex2f(17.5,4.5);
    glVertex2f(17.5,7.0);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_TRIANGLES);
glColor3f(0.1,0,0);
  glVertex2f(17.0,9.5);
   glVertex2f(15.0,7.0);
   glColor3f(0.3,0.5,0.1);
  glVertex2f(19.0,7.0);
glEnd();
glPopMatrix();

}

void cloud(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int circle = 50;
	GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= circle;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / circle)),
			    y + (radius * sin(i * twicePi / circle))
			);
		}
	glEnd();
}

void cloudbig1()
{

/*1st cloud*/
glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(-22.3,24,2.9);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(-13,18,3.0);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(-20,19,3.99);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(-15,19.3,2.0);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(-16,17,2.0);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(-12,22,2.5);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(-9.3,20.0,2.3);
glPopMatrix();

glPushMatrix();
glColor3f(1,1,0.9);
cloud(-5.7,19.4,2.8);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(-7.5,18.0,2.9);
glPopMatrix();

}
void cloudbig2()
{
/*5th cloud*/
 glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(25,25,3.5);
glPopMatrix();

 glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(23,20,4.0);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(24,22,2.5);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(19.5,23,2.5);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(19.5,19,3.5);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(14,18,3.0);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(16,16.4,1.4);
glPopMatrix();


}
 void smallcloud1()
 {

/*3rd cloud*/
glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(-15,32,2.0);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(-17,32,1.5);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(-13,32,1.5);
glPopMatrix();

 /*3rd1 cloud*/

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(-10,28.5,1.5);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(-8,28.5,2.0);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(-6,28.5,1.5);
glPopMatrix();
 }
void smallcloud2(){
/*4th*/
glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(10,32.5,1.5);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(12,32.5,2.0);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(14,32.5,1.5);
glPopMatrix();

}
void smallcloud3()
{
      /*2nd cloud*/
glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(3,27,1.5);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(5,27,2.0);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.5);
cloud(7,27,1.5);
glPopMatrix();

/*5th*/
glPushMatrix();
glColor3f(2.9,28.0,1.0);
cloud(-2,22,1.5);
glPopMatrix();

glPushMatrix();
glColor3f(2.9,28.0,1.0);
cloud(0,22,2.0);
glPopMatrix();

glPushMatrix();
glColor3f(2.9,28.0,1.5);
cloud(2,22,1.5);
glPopMatrix();


}
void smallcloud4()
{
    glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(15.5,26.5,1.5);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(17.5,26.5,2.0);
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
cloud(19.5,26.5,1.5);
glPopMatrix();
}



void sun(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int circle = 50;
	GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= circle;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / circle)),
			    y + (radius * sin(i * twicePi / circle))
			);
		}
	glEnd();
}


void display(void)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glMatrixMode( GL_PROJECTION );
glLoadIdentity();
gluOrtho2D(-20, 25  , -4, 33);
glMatrixMode( GL_MODELVIEW );
glLoadIdentity();

  /*glViewport(0, 0 ,windowWidth ,windowHeight);*/

glPushMatrix();
glTranslatef(smallcloud1_move,0,0);
smallcloud1();
glPopMatrix();

glPushMatrix();
glTranslatef(smallcloud2_move,0,0);
smallcloud2();
glPopMatrix();

glPushMatrix();
glTranslatef(smallcloud3_move,0,0);
smallcloud3();
glPopMatrix();

glPushMatrix();
glTranslatef(smallcloud4_move,0,0);
smallcloud4();
glPopMatrix();


pahar();
 glPushMatrix();
 glTranslatef(12.0,0.0,0.0);
 glScalef(1,1.0,1);
pahar();
glPopMatrix();

pahar();
 glPushMatrix();
 glTranslatef(24.0,0.0,0.0);
 glScalef(1,1.0,1);
pahar();
glPopMatrix();

pahar();
 glPushMatrix();
 glTranslatef(35.5,0.0,0.0);
 glScalef(1,1.0,1);
pahar();
glPopMatrix();


glPushMatrix();
glTranslatef(cloudbig1_move,0,0);
cloudbig1();
glPopMatrix();

glPushMatrix();
glTranslatef(cloudbig2_move,0,0);
cloudbig2();
glPopMatrix();

/*sun*/
glPushMatrix();
glColor3f(1,0.2,0.2);
 sun(5,22,2.9);
glPopMatrix();

 sky();

 smalltree();
 secondhouse();
 nearnodiback();
 bigtree();
 /*singlehouse*/
 glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(-11.5,9.0);
    glVertex2f(-11.5,7.5);
    glVertex2f(-11.2,7.5);
    glVertex2f(-11.2,9.0);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(-10.6,9.0);
    glVertex2f(-10.6,7.5);
    glVertex2f(-10.3,7.5);
    glVertex2f(-10.3,9.0);
glEnd();
glPopMatrix();
 /*janala*/
 glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.9,0,0.0);
    glVertex2f(-12.0,9.0);
    glVertex2f(-12.0,7.5);
    glVertex2f(-9.5,7.5);
    glVertex2f(-9.5,9.0);
glEnd();
glPopMatrix();

/*ghor*/
glPushMatrix();
glBegin(GL_QUADS);
 glColor3f(0.1,0.1,0.1);
    glVertex2f(-12.0,13.0);
    glVertex2f(-14.0,9.8);
   glColor3f(0.7,0.0,0.1);
    glVertex2f(-6.4,9.8);
    glVertex2f(-8.4,13.0);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
 glColor3f(0.1,0.1,0.1);
    glVertex2f(-13.4,9.8);
    glVertex2f(-13.4,6.5);
   glColor3f(1,0.5,0.2);
    glVertex2f(-7.2,6.5);
    glVertex2f(-7.2,9.8);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.7,0.0,0.1);
    glVertex2f(-13.4,6.5);
    glVertex2f(-14.0,5.8);
    glVertex2f(-6.9,5.8);
    glVertex2f(-7.2,6.5);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(running_boat_move,0,0);
running_boat();
glPopMatrix();

nowka1();
nowka2();
river();

/*2nd ghor*/
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.5,0.1,0.1);
    glVertex2f(-4.0,4.7);
    glVertex2f(-4.5,4.0);
    glVertex2f(-3.2,2.2);
      glColor3f(0.1,0,0);
    glVertex2f(-2.0,1.8);
glEnd();
glPopMatrix();

/*2nd ghor part2*/
glPushMatrix();
glBegin(GL_POLYGON);
    glColor3f(0.5,0.1,0.1);
    glVertex2f(-5.9,-0.2);
    glVertex2f(-5.9,-1.0);
     glVertex2f(-4.0,-0.5);
     glVertex2f(-3.8,-0.4);
     glVertex2f(-3.2,0.1);
    glVertex2f(-3.0,0.7);
    glVertex2f(-2.5,0.0);
glEnd();
glPopMatrix();
/* 2nd janala*/
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.7,0.5,0.7);
    glVertex2f(-4.4,2.0);
    glVertex2f(-4.4,0.3);
    glVertex2f(-3.8,0.4);
    glVertex2f(-3.8,2.2);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.1,0.0,0.0);
    glVertex2f(-4.8,2.2);
    glVertex2f(-4.8,0.1);
    glVertex2f(-3.8,0.5);
    glVertex2f(-3.8,2.2);
glEnd();
glPopMatrix();

/* 1st ghor*/
glPushMatrix();
glBegin(GL_QUADS);
     glColor3f(0.1,0,0);
    glVertex2f(-12.8,3.6);
     glColor3f(0.9,0.1,0.5);
    glVertex2f(-13.9,0.6);
    glVertex2f(-8.5,0.6);
      glColor3f(0.1,0,0);
    glVertex2f(-7.2,3.6);
glEnd();
glPopMatrix();
 /* 1st ghor janala*/
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.8,0.1,0.5);
    glVertex2f(-13.5,0.2);
    glVertex2f(-13.5,-0.8);
    glVertex2f(-12.2,-0.8);
    glVertex2f(-12.2,0.2);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.8,0.1,0.5);
    glVertex2f(-10.4,0.1);
    glVertex2f(-10.4,-1.0);
    glVertex2f(-9.2,-1.0);
    glVertex2f(-9.2,0.1);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
     glColor3f(0.1,0,0);
     glVertex2f(-13.7,0.6);
    glVertex2f(-13.7,-1.5);
    glColor3f(1,0.8,0.6);
    glVertex2f(-8.5,-2.5);
    glVertex2f(-8.5,0.6);
glEnd();
glPopMatrix();

/*1stghorside*/
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.9,0.2,0.3);
    glVertex2f(-7.19,3.66);
    glVertex2f(-7.666,2.8);
    glVertex2f(-6.0,0.9);
      glColor3f(0.1,0,0);
    glVertex2f(-5.0,0.8);
glEnd();
glPopMatrix();
/*siri & side 1st ghor*/

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.9,0.2,0.3);
    glVertex2f(-13.8,-1.4);
    glVertex2f(-14.2,-2.1);
    glVertex2f(-8.5,-3.4);
    glVertex2f(-8.5,-2.2);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_POLYGON);
    glColor3f(0.9,0.2,0.3);
    glVertex2f(-8.5,-2.5);
    glVertex2f(-8.5,-3.4);
    glVertex2f(-4.9,-1.5);
    glVertex2f(-5.6,-1.1);
    glVertex2f(-6.7,-1.5);
glEnd();
glPopMatrix();


/*2ndpolygon*/
glPushMatrix();
glBegin(GL_POLYGON);
    glColor3f(1,0.7,0.6);
    glVertex2f(-4.44,4.2);
    glVertex2f(-5.9,2.0);
    glVertex2f(-5.9,-0.2);
    glVertex2f(-3.0,0.2);
    glVertex2f(-3.0,2.2);
glEnd();
glPopMatrix();
/* 1st dorja main house*/
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.8,0.1,0.5);
    glVertex2f(-7.5,0.2);
    glVertex2f(-7.5,-2.1);
    glVertex2f(-6.8,-1.8);
    glVertex2f(-6.8,0.0);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.1,0.0,0.0);
    glVertex2f(-7.5,0.2);
    glVertex2f(-7.5,-2.1);
    glVertex2f(-6.5,-1.6);
    glVertex2f(-6.5,0.2);
glEnd();
glPopMatrix();
/*behindghor*/
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1,0.1,0.2);
    glVertex2f(-7.2,4.7);
    glColor3f(0.7,0.2,0.2);
    glVertex2f(-8.4,3.6);
    glVertex2f(-5.9,2.0);
     glColor3f(0.1,0,0);
    glVertex2f(-4.0,4.7);
glEnd();
glPopMatrix();

/*ghor*/
glPushMatrix();
glBegin(GL_POLYGON);
    glColor3f(0.9,0.7,0.7);
    glVertex2f(-7.6,2.9);
    glVertex2f(-8.49,0.6);
    glVertex2f(-8.49,-2.5);
    glVertex2f(-5.8,-1.2);
    glVertex2f(-5.8,0.9);
glEnd();
glPopMatrix();

/*thrirdghor in main ghor*/

glPushMatrix();
glBegin(GL_TRIANGLES);
 glColor3f(1,0.7,0.1);
    glVertex2f(1.2,4.4);
    glVertex2f(-0.3,2.3);
    glVertex2f(2.9,2.3);
glEnd();
glPopMatrix();

glPushMatrix();
  glBegin(GL_TRIANGLES);
    glColor3f(0.1,0,0);
    glVertex2f(1.2,4.4);
    glVertex2f(-0.3,2.2);
    glVertex2f(2.9,2.2);
glEnd();
glPopMatrix();

/*janala*/
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.9,0.5,0.5);
    glVertex2f(0.8,1.3);
    glVertex2f(0.8,-0.1);
    glVertex2f(1.8,-0.1);
    glVertex2f(1.8,1.3);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.4,0,0);
    glVertex2f(0.0,-0.1);
    glVertex2f(-0.5,-0.8);
    glVertex2f(3.2,-0.8);
    glVertex2f(2.5,-0.1);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(25.50,16.0,0.0);
    glVertex2f(0.0,2.2);
    glVertex2f(0.0,-0.1);
    glVertex2f(2.5,-0.1);
    glVertex2f(2.5,2.2);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1,1,0.3);
    glVertex2f(0.0,2.1);
    glVertex2f(0.0,-0.1);
    glVertex2f(2.3,-0.1);
    glVertex2f(2.3,2.1);
glEnd();
glPopMatrix();
/*boundary*/
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-19.0,3.5);
    glVertex2f(-19.0,1.8);
    glVertex2f(-18.5,1.8);
    glVertex2f(-18.5,3.5);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-15.0,3.5);
    glVertex2f(-15.0,1.8);
    glVertex2f(-14.5,1.8);
    glVertex2f(-14.5,3.5);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-2.5,3.5);
    glVertex2f(-2.5,1.8);
    glVertex2f(-2.0,1.8);
    glVertex2f(-2.0,3.5);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(3.0,3.5);
    glVertex2f(3.0,1.8);
    glVertex2f(3.5,1.8);
    glVertex2f(3.5,3.5);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(1.0,1.0,1.0);
   glVertex2f(3.9,0.5);
   glVertex2f(3.9,-0.1);
   glVertex2f(5.4,-0.1);
   glVertex2f(5.4,0.5);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(1.0,1.0,1.0);
   glVertex2f(3.9,-2.7);
   glVertex2f(3.9,-3.3);
   glVertex2f(5.4,-3.3);
   glVertex2f(5.4,-2.7);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
 glColor3f(0.1,0.1,0.1);
    glVertex2f(-20.0,3.5);
    glColor3f(0.9,0.7,0.1);
    glVertex2f(-20.0,1.8);
    glVertex2f(3.9,1.8);
    glVertex2f(5.4,3.5);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.9,0.7,0.1);
    glVertex2f(5.4,3.5);
    glVertex2f(3.9,1.8);
    glVertex2f(3.9,-4.0);
    glVertex2f(5.4,-4.0);
glEnd();
glPopMatrix();


back1st();
/*math*/
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(-20.0,10.0);
     glColor3f(0.4,0.7,0.2);
    glVertex2f(-20.0,-4.0);
     glColor3f(0.4,0.7,0.1);
    glVertex2f(25.0,-4.0);
     glColor3f(0.8,0.5,0.1);
    glVertex2f(25.0,3.9);
glEnd();
glPopMatrix();

    glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.8,0.5,0.1);
    glVertex2f(-20.0,10.0);
    glVertex2f(-20.0,-4.0);
    glVertex2f(25.0,-4.0);
    glVertex2f(25.0,4.5);
glEnd();
glPopMatrix();


glFlush();
glutSwapBuffers();
}
void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {

    case 'S':
        flagScale=true;
        break;
    case 's':
        flagScale=false;
        break;



    case 16:	// Escape key
        exit(1);
    }
    glutPostRedisplay();
}

void animate()
{
	if (flagScale == true)
	{
		running_boat_move-= 0.04;
		if(running_boat_move < -25)
			running_boat_move = 25;
	}
	if (flagScale == false)
	{
		running_boat_move = 0;

	}

	if (flagScale == true)
	{
		smallcloud1_move-= 0.02;
		if(smallcloud1_move< -15)
			smallcloud1_move = 44;
	}
	if (flagScale == false)
	{
	smallcloud1_move = 0;

	}

	if (flagScale == true)
	{
		smallcloud2_move-= 0.02;
		if(smallcloud2_move< -29)
			smallcloud2_move =17 ;
	}
	if (flagScale == false)
	{
	smallcloud2_move = 0;

	}

	if (flagScale == true)
	{
		smallcloud3_move-= 0.02;
		if(smallcloud3_move< -29)
			smallcloud3_move =27;
	}
	if (flagScale == false)
	{
	smallcloud3_move = 0;

	}

	if (flagScale == true)
	{
		smallcloud4_move-= 0.02;
		if(smallcloud4_move< -36)
			smallcloud4_move =27;
	}
	if (flagScale == false)
	{
	smallcloud4_move = 0;

	}

	if (flagScale == true)
	{
		cloudbig1_move-= 0.01;
		if(cloudbig1_move< -2.5)
			cloudbig1_move = 0.3 ;
	}
	if (flagScale == false)
	{
	cloudbig1_move = 0;

	}

	if (flagScale == true)
	{
		cloudbig2_move-= 0.01;
		if(cloudbig2_move< -2.5)
			cloudbig2_move = 0.2 ;
	}
	if (flagScale == false)
	{
	cloudbig2_move = 0;

	}


	glutPostRedisplay();
}


void init()
{
    glClearColor (0.0,0.0,1.0,0.0 );

}

int main (int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowPosition(50,-50);
glutInitWindowSize(windowWidth, windowHeight);
glutCreateWindow("River side village ");

glShadeModel( GL_SMOOTH );
    glEnable( GL_DEPTH_TEST );
   glutKeyboardFunc(myKeyboardFunc);
    glutIdleFunc(animate);

glutDisplayFunc(display);
glutMainLoop();
return 0;
}




