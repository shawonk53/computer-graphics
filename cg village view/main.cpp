#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>
#include<mmsystem.h>

using namespace std;

float _run = 0.0;
float _run1 = 0.0;
float _run2 = 0.0;
float _run3 = 0.0;
float _rain = 0.0;
float _nt = 0.0;
float _ang_tri = 0.0;

float current_angle = 0.0f;
float step_angle = 2.8f;
float center_x = 168.0f;
float center_y = 180.0f;


bool onOff;
bool frd = false;
bool bck = false;

bool rainday = false;
bool night = false;


void init(){

	glClearColor(0.0,0.5,0.8,1.0);
	glColor3f(0.0,0.0,0.5);
	glPointSize(4.0);
	gluOrtho2D(0.0,1000.0,0.0,1000.0);

}



void display(){
	glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
	glColor3ub(0.0, 128, 0.0);//green grass
	glVertex2i(0,550);
	glVertex2i(1000,550);
	glVertex2i(1000,0);
	glVertex2i(0,0);
	glEnd();

    glPopMatrix();


///circle tree 1

    glPushMatrix();
    glTranslatef(200, 450, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(210, 438, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(190, 438, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();




    glColor3f(0.4, 0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(198, 380);
    glVertex2i(198, 425);
	glVertex2i(203, 425);
	glVertex2i(203, 380);
	glEnd();




///circle tree 2

    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(250, 50, 0);


    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(200, 450, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(210, 438, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(190, 438, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();




    glColor3f(0.4, 0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(198, 380);
    glVertex2i(198, 425);
	glVertex2i(203, 425);
	glVertex2i(203, 380);
	glEnd();


    glPopMatrix();


///circle tree 3

    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(350, 50, 0);


    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(200, 450, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(210, 438, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(190, 438, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();




    glColor3f(0.4, 0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(198, 380);
    glVertex2i(198, 425);
	glVertex2i(203, 425);
	glVertex2i(203, 380);
	glEnd();


    glPopMatrix();


///near tree circle tree 4

    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(250, 35, 0);


    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(200, 450, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(210, 438, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



        glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(190, 438, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();






    glPopMatrix();


///circle tree 4

glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(350, 47, 0);


glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(200, 450, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(210, 438, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(190, 438, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();




glColor3f(0.4, 0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(198, 380);
    glVertex2i(198, 425);
	glVertex2i(203, 425);
	glVertex2i(203, 380);
	glEnd();


 glPopMatrix();






///circle tree 5

glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(756, 80, 0);


glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(200, 450, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(210, 438, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(190, 438, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();




glColor3f(0.4, 0, 0.5);
   glBegin(GL_QUADS);
    glVertex2i(198, 395);
    glVertex2i(198, 425);
	glVertex2i(203, 425);
	glVertex2i(203, 395);
	glEnd();


 glPopMatrix();



///circle tree 7

glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(650, 40, 0);


glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(200, 450, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(210, 438, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(190, 438, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();




glColor3f(0.4, 0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(198, 380);
    glVertex2i(198, 425);
	glVertex2i(203, 425);
	glVertex2i(203, 380);
	glEnd();


 glPopMatrix();


///circle tree 6 near tree

glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(50, 34, 0);


glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(200, 450, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(210, 438, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();



glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(190, 438, 0);



glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();
    glPopMatrix();




glColor3f(0.4, 0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(198, 380);
    glVertex2i(198, 425);
	glVertex2i(203, 425);
	glVertex2i(203, 380);
	glEnd();


 glPopMatrix();



///hill

	glColor3ub(34, 177, 76);
    glBegin(GL_QUADS);
    glVertex2i(0,550);
    glVertex2i(0,560);
    glVertex2i(100,650);
    glVertex2i(200,550);
    glEnd();

    glColor3ub(34, 177, 76);
    glBegin(GL_TRIANGLES);
    glVertex2i(400,550);
    glVertex2i(500,650);
    glVertex2i(600,550);
    glEnd();


///hill
    glColor3ub(34, 177, 76);
    glBegin(GL_TRIANGLES);
    glVertex2i(100,550);
    glVertex2i(300,650);
    glVertex2i(500,550);
    glEnd();


    glColor3ub(34, 177, 76);
    glBegin(GL_TRIANGLES);
    glVertex2i(600,550);
    glVertex2i(700,650);
    glVertex2i(800,550);
    glEnd();


//hill
    glColor3ub(34, 177, 76);
    glBegin(GL_TRIANGLES);
    glVertex2i(800,550);
    glVertex2i(1000,650);
    glVertex2i(1000,550);
    glEnd();

    glColor3ub(34, 177, 76);
    glBegin(GL_TRIANGLES);
    glVertex2i(700,550);
    glVertex2i(900,650);
    glVertex2i(1000,550);
    glEnd();


///road

    glColor3ub(66, 66, 49);
	glBegin(GL_QUADS);
	glVertex2i(0,330);
	glVertex2i(1000,330);
	glVertex2i(1000,280);
	glVertex2i(0,280);
	glEnd();

	/*glColor3ub(66, 66, 49);
	glBegin(GL_QUADS);
	glVertex2i(690,390);
	glVertex2i(710,390);
	glVertex2i(710,320);
	glVertex2i(690,320);
	glEnd();*/


    ///TREE 1

    glPushMatrix();
    glScalef(0.5, 0.5, 0.5);
    glTranslatef(200, 440, 0);

    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 340);
    glVertex2i(492, 440);
	glVertex2i(540, 340);
	glEnd();

    glColor3f(0, 0.8, 0.5);
	glBegin(GL_TRIANGLES);
    glVertex2i(445, 360);
    glVertex2i(492, 460);
	glVertex2i(540, 360);
	glEnd();


	glColor3f(0.4, 0, 0.5);
	glBegin(GL_QUADS);
    glVertex2i(497, 340);
    glVertex2i(486, 340);
    glVertex2i(486, 250);
    glVertex2i(497, 250);
    glEnd();

    glPopMatrix();


    ///TREE 2

    glPushMatrix();
    glScalef(0.50, 0.50, 0.25);
    glTranslatef(1400, 500, 0);

    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 340);
    glVertex2i(492, 440);
	glVertex2i(540, 340);
	glEnd();

    glColor3f(0, 0.8, 0.5);
	glBegin(GL_TRIANGLES);
    glVertex2i(445, 360);
    glVertex2i(492, 460);
	glVertex2i(540, 360);
	glEnd();


	glColor3f(0.4, 0, 0.5);
	glBegin(GL_QUADS);
    glVertex2i(497, 340);
    glVertex2i(486, 340);
    glVertex2i(486, 250);
    glVertex2i(497, 250);
    glEnd();

    glPopMatrix();


    ///tree 3

    glPushMatrix();
    glScalef(0.50, 0.50, 0.25);
    glTranslatef(-400, 500, 0);

    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 340);
    glVertex2i(492, 440);
	glVertex2i(540, 340);
	glEnd();

    glColor3f(0, 0.8, 0.5);
	glBegin(GL_TRIANGLES);
    glVertex2i(445, 360);
    glVertex2i(492, 460);
	glVertex2i(540, 360);
	glEnd();


	glColor3f(0.4, 0, 0.5);
	glBegin(GL_QUADS);
    glVertex2i(497, 340);
    glVertex2i(486, 340);
    glVertex2i(486, 250);
    glVertex2i(497, 250);
    glEnd();

    glPopMatrix();


    ///tree 4

    glPushMatrix();
    glScalef(0.50, 0.50, 0.25);
    glTranslatef(250, 600, 0);

    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 340);
    glVertex2i(492, 440);
	glVertex2i(540, 340);
	glEnd();

    glColor3f(0, 0.8, 0.5);
	glBegin(GL_TRIANGLES);
    glVertex2i(445, 360);
    glVertex2i(492, 460);
	glVertex2i(540, 360);
	glEnd();

	glColor3f(0.4, 0, 0.5);
	glBegin(GL_QUADS);
    glVertex2i(497, 340);
    glVertex2i(486, 340);
    glVertex2i(486, 250);
    glVertex2i(497, 250);
    glEnd();

    glPopMatrix();

    ///tree 5

    glPushMatrix();

    glTranslatef(0, 400, 0);
    glScalef(0.25, 0.25, 0.25);
    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 340);
    glVertex2i(492, 440);
	glVertex2i(540, 340);
	glEnd();

    glColor3f(0, 0.8, 0.5);
	glBegin(GL_TRIANGLES);
    glVertex2i(445, 360);
    glVertex2i(492, 460);
	glVertex2i(540, 360);
	glEnd();

	glColor3f(0.4, 0, 0.5);
	glBegin(GL_QUADS);
    glVertex2i(497, 340);
    glVertex2i(486, 340);
    glVertex2i(486, 250);
    glVertex2i(497, 250);
    glEnd();

    glPopMatrix();


    ///tree 6

    glPushMatrix();

    glTranslatef(150, 420, 0);
    glScalef(0.25, 0.25, 0.25);
    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 340);
    glVertex2i(492, 440);
	glVertex2i(540, 340);
	glEnd();

    glColor3f(0, 0.8, 0.5);
	glBegin(GL_TRIANGLES);
    glVertex2i(445, 360);
    glVertex2i(492, 460);
	glVertex2i(540, 360);
	glEnd();

	glColor3f(0.4, 0, 0.5);
	glBegin(GL_QUADS);
    glVertex2i(497, 340);
    glVertex2i(486, 340);
    glVertex2i(486, 250);
    glVertex2i(497, 250);
    glEnd();

    glPopMatrix();


    ///tree 7

    glPushMatrix();

    glTranslatef(-50, 400, 0);
    glScalef(0.25, 0.25, 0.25);
    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 340);
    glVertex2i(492, 440);
	glVertex2i(540, 340);
	glEnd();

    glColor3f(0, 0.8, 0.5);
	glBegin(GL_TRIANGLES);
    glVertex2i(445, 360);
    glVertex2i(492, 460);
	glVertex2i(540, 360);
	glEnd();

	glColor3f(0.4, 0, 0.5);
	glBegin(GL_QUADS);
    glVertex2i(497, 340);
    glVertex2i(486, 340);
    glVertex2i(486, 250);
    glVertex2i(497, 250);
    glEnd();

    glPopMatrix();


    ///tree 8

    glPushMatrix();

    glTranslatef(80, 420, 0);
    glScalef(0.25, 0.25, 0.25);
    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 340);
    glVertex2i(492, 440);
	glVertex2i(540, 340);
	glEnd();

    glColor3f(0, 0.8, 0.5);
	glBegin(GL_TRIANGLES);
    glVertex2i(445, 360);
    glVertex2i(492, 460);
	glVertex2i(540, 360);
	glEnd();

	glColor3f(0.4, 0, 0.5);
	glBegin(GL_QUADS);
    glVertex2i(497, 340);
    glVertex2i(486, 340);
    glVertex2i(486, 250);
    glVertex2i(497, 250);
    glEnd();

    glPopMatrix();


    ///tree 9

    glPushMatrix();

    glTranslatef(780, 415, 0);
    glScalef(0.25, 0.25, 0.25);
    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 340);
    glVertex2i(492, 440);
	glVertex2i(540, 340);
	glEnd();

    glColor3f(0, 0.8, 0.5);
	glBegin(GL_TRIANGLES);
    glVertex2i(445, 360);
    glVertex2i(492, 460);
	glVertex2i(540, 360);
	glEnd();

	glColor3f(0.4, 0, 0.5);
	glBegin(GL_QUADS);
    glVertex2i(497, 340);
    glVertex2i(486, 340);
    glVertex2i(486, 250);
    glVertex2i(497, 250);
    glEnd();

    glPopMatrix();






///river



    glPushMatrix();

    glColor3ub(152, 222, 245);
    glBegin(GL_QUADS);
    glVertex2i(0, 120);
    glVertex2i(1000, 120);
	glVertex2i(1000, 0);
	glVertex2i(0, 0);
	glEnd();

    glPopMatrix();


    ///Left Moving Boat
    glPushMatrix();
	glTranslatef(-_run, 0.0, 0.0);


    ///boat 2
    glPushMatrix();
    glTranslatef(200, 35, 0);


    glColor3f(0.423, 0.329, 0.588);
    glBegin(GL_QUADS);
    glVertex2i(130, 40);
    glVertex2i(110, 60);
	glVertex2i(190, 60);
	glVertex2i(170, 40);
	glEnd();

	glColor3f(0.329, 0.517, 0.588);
    glBegin(GL_QUADS);
    glVertex2i(150, 80);
    glVertex2i(170, 80);
	glVertex2i(170, 60);
	glVertex2i(150, 60);
	glEnd();

    glPopMatrix();


    glPopMatrix();


    ///Right Moving Boat
    glPushMatrix();
	glTranslatef(_run, 0.0, 0.0);

    ///boat 1
    glPushMatrix();

    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(130, 40);
    glVertex2i(110, 60);
	glVertex2i(190, 60);
	glVertex2i(170, 40);
	glEnd();

	glColor3f(0, 1, 0);
    glBegin(GL_QUADS);
    glVertex2i(130, 80);
    glVertex2i(150, 80);
	glVertex2i(150, 60);
	glVertex2i(130, 60);
	glEnd();

    glPopMatrix();

    ///boat 2
    glPushMatrix();
    glTranslatef(500, 15, 0);


    glColor3f(0.5, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2i(130, 40);
    glVertex2i(110, 60);
	glVertex2i(190, 60);
	glVertex2i(170, 40);
	glEnd();

	glColor3f(0.5, 0.0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(130, 80);
    glVertex2i(150, 80);
	glVertex2i(150, 60);
	glVertex2i(130, 60);
	glEnd();

    glPopMatrix();

      ///boat 3

    glPushMatrix();
    glTranslatef(300, 0, 0);


    glColor3f(1, 0, 1);
    glBegin(GL_QUADS);
    glVertex2i(130, 40);
    glVertex2i(110, 60);
	glVertex2i(190, 60);
	glVertex2i(170, 40);
	glEnd();

	glColor3f(0, 0, 1);
    glBegin(GL_QUADS);
    glVertex2i(130, 80);
    glVertex2i(150, 80);
	glVertex2i(150, 60);
	glVertex2i(130, 60);
	glEnd();

    glPopMatrix();


    glPopMatrix();

    ///Left Moving Boat
    glPushMatrix();
	glTranslatef(-_run, 0.0, 0.0);

      ///boat 3

    glPushMatrix();
    glTranslatef(700, -30, 0);


    glColor3f(0.247, 0.505, 0.231);
    glBegin(GL_QUADS);
    glVertex2i(130, 40);
    glVertex2i(100, 65);
	glVertex2i(220, 65);
	glVertex2i(190, 40);
	glEnd();

	glColor3f(0.145, 0.156, 0.337);
    glBegin(GL_QUADS);
    glVertex2i(190, 88);
    glVertex2i(150, 88);
	glVertex2i(150, 65);
	glVertex2i(190, 65);
	glEnd();

    glPopMatrix();


    glPopMatrix();



///1st CART

    glPushMatrix();
	glTranslatef(_run1, 0.0, 0.0);

    glPushMatrix();
    glTranslatef(40, 80, 0.0);

    glPushMatrix();
    glTranslatef(30, 220, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(225, 245, 93);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();


///box of 1st CART
	glColor3ub(242, 242, 237);
	glBegin(GL_LINES);
	glVertex2i(20,220);
	glVertex2i(40,220);
	glVertex2i(30,230);
	glVertex2i(30,210);
	glVertex2i(37,227);
    glVertex2i(23,213);
    glVertex2i(37,213);
    glVertex2i(23,227);

    glVertex2i(5,230);
    glVertex2i(100,230);
    glVertex2i(100,230);
    glVertex2i(100,232);
    glVertex2i(100,232);
    glVertex2i(5,232);

    glVertex2i(7,232);
    glVertex2i(7,262);
    glVertex2i(17,232);
    glVertex2i(17,262);
    glVertex2i(27,232);
    glVertex2i(27,262);
    glVertex2i(37,232);
    glVertex2i(37,262);

    glVertex2i(47,232);
    glVertex2i(47,262);
    glVertex2i(57,232);
    glVertex2i(57,262);
    glVertex2i(7,242);
    glVertex2i(59,242);
    glVertex2i(7,252);
    glVertex2i(59,252);
    glVertex2i(99,233);
    glVertex2i(97,245);
    glVertex2i(101,233);
    glVertex2i(103,245);
	glEnd();


///COW of 1st CART
	glColor3ub(242, 242, 237);
	glBegin(GL_LINE_LOOP);
    glVertex2i(60,210);
    glVertex2i(60,230);
    glVertex2i(90,230);
    glVertex2i(92,233);
    glVertex2i(95,230);
    glVertex2i(97,230);
    glVertex2i(99,233);
    glVertex2i(101,233);

    glVertex2i(105,226);
    glVertex2i(102,226);
    glVertex2i(100,228);
    glVertex2i(98,228);
    glVertex2i(96,220);
    glVertex2i(95,210);
    glVertex2i(93,210);
    glVertex2i(93,220);

    glVertex2i(93,216);
    glVertex2i(65,216);
    glVertex2i(65,220);
    glVertex2i(65,210);
    glEnd();

    glPopMatrix();
///End of COW of 1st Cart


///2nd CART
    glPushMatrix();
    glTranslatef(200, 100, 0.0);

    glPushMatrix();
    glTranslatef(30, 220, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(225, 245, 93);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();


///box of 2nd CART
	glColor3ub(242, 242, 237);
	glBegin(GL_LINES);
	glVertex2i(20,220);
	glVertex2i(40,220);
	glVertex2i(30,230);
	glVertex2i(30,210);
	glVertex2i(37,227);
    glVertex2i(23,213);
    glVertex2i(37,213);
    glVertex2i(23,227);

    glVertex2i(5,230);
    glVertex2i(100,230);
    glVertex2i(100,230);
    glVertex2i(100,232);
    glVertex2i(100,232);
    glVertex2i(5,232);

    glVertex2i(7,232);
    glVertex2i(7,262);
    glVertex2i(17,232);
    glVertex2i(17,262);
    glVertex2i(27,232);
    glVertex2i(27,262);
    glVertex2i(37,232);
    glVertex2i(37,262);

    glVertex2i(47,232);
    glVertex2i(47,262);
    glVertex2i(57,232);
    glVertex2i(57,262);
    glVertex2i(7,242);
    glVertex2i(59,242);
    glVertex2i(7,252);
    glVertex2i(59,252);
    glVertex2i(99,233);
    glVertex2i(97,245);
    glVertex2i(101,233);
    glVertex2i(103,245);
	glEnd();


///COW of 2nd CART
	glColor3ub(242, 242, 237);
	glBegin(GL_LINE_LOOP);
    glVertex2i(60,210);
    glVertex2i(60,230);
    glVertex2i(90,230);
    glVertex2i(92,233);
    glVertex2i(95,230);
    glVertex2i(97,230);
    glVertex2i(99,233);
    glVertex2i(101,233);

    glVertex2i(105,226);
    glVertex2i(102,226);
    glVertex2i(100,228);
    glVertex2i(98,228);
    glVertex2i(96,220);
    glVertex2i(95,210);
    glVertex2i(93,210);
    glVertex2i(93,220);

    glVertex2i(93,216);
    glVertex2i(65,216);
    glVertex2i(65,220);
    glVertex2i(65,210);
    glEnd();

    glPopMatrix();

    glPopMatrix();

///End of COW of 2nd Cart

///Big home
    glPushMatrix();
    glTranslatef(700, -420, 0.0);
    glScalef(2.0,2.0,0.0);


    glColor3ub(182, 163, 240);
    glBegin(GL_POLYGON);
    glVertex2i(85,310);
    glVertex2i(85,350);
    glVertex2i(130,350);
    glVertex2i(130,310);
    glEnd();

    glColor3ub(240, 242, 242);
    glBegin(GL_POLYGON);
    glVertex2i(100,310);
    glVertex2i(100,338);
    glVertex2i(115,338);
    glVertex2i(115,310);
    glEnd();

    glColor3ub(55, 161, 163);
    glBegin(GL_TRIANGLES);
    glVertex2i(80,350);
    glVertex2i(107,380);
    glVertex2i(135,350);
    glEnd();

    glColor3f(0.850, 0.490, 0.756);
    glBegin(GL_QUADS);
    glVertex2i(80,310);
    glVertex2i(80,300);
    glVertex2i(135,300);
    glVertex2i(135,310);
    glEnd();
    glPopMatrix();


///small home
    glPushMatrix();
    glTranslatef(-20,- 100, 0.0);
    glScalef(1.5,1.5,0.0);

    glColor3ub(182, 163, 240);
    glBegin(GL_POLYGON);
    glVertex2i(85,310);
    glVertex2i(85,350);
    glVertex2i(130,350);
    glVertex2i(130,310);
    glEnd();

    glColor3ub(240, 242, 242);
    glBegin(GL_POLYGON);
    glVertex2i(100,310);
    glVertex2i(100,338);
    glVertex2i(115,338);
    glVertex2i(115,310);
    glEnd();

    glColor3ub(55, 161, 163);
    glBegin(GL_TRIANGLES);
    glVertex2i(80,350);
    glVertex2i(107,380);
    glVertex2i(135,350);
    glEnd();

    glColor3f(0.850, 0.490, 0.756);
    glBegin(GL_QUADS);
    glVertex2i(80,310);
    glVertex2i(80,300);
    glVertex2i(135,300);
    glVertex2i(135,310);
    glEnd();
    glPopMatrix();







///Cloud

    glPushMatrix();
    glTranslatef(_run3, 0.0, 0.0);

    glPushMatrix();
    glTranslatef(200, 800, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(180, 750, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(250, 800, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(230, 750, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

///cloud 2
    glPushMatrix();
    glTranslatef(350, 100, 0);
    glPushMatrix();
    glTranslatef(200, 800, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(180, 750, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(250, 800, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(230, 750, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(300, 800, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(290, 760, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPopMatrix();

    glPopMatrix();
///end of cloud

/// windmill
    // draw the tower
    glPushMatrix();
    //glTranslatef(200,100,0);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(160, 40);
    glVertex2f(163, 180);
    glVertex2f(160, 40);
    glVertex2f(175, 40);
    glVertex2f(175, 40);
    glVertex2f(172, 180);
    glEnd();

/*float current_angle = 0.0f;
float step_angle = 0.2f;
float center_x = 168.0f;
float center_y = 180.0f;*/

    // Rotate object
    glPushMatrix();

    glTranslatef( center_x, center_y, 0.0f );
    glRotatef(current_angle, 0, 0, 1);
    current_angle += step_angle;
    glTranslatef(-center_x, -center_y, 0.0f );

    // draw first rotor blade
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(173, 180);
    glVertex2f(163, 180);
    glVertex2f(168, 270);
    glEnd();
    // draw second rotor blade
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(170, 174);
    glVertex2f(175, 180);
    glVertex2f(247, 140);
    glEnd();
    // draw third rotor blade
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(162, 180);
    glVertex2f(167, 174);
    glVertex2f(88, 140);
    glEnd();
    // circle in the middle
    float theta;
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    for (int i = 0; i <= 360; i++) {
           theta = i * 3.142 / 180;
           glVertex2f(168 + 7 * cos(theta), 180 + 6.5 * sin(theta));
    }
    glEnd();
    glPopMatrix();




    glFlush();
	glutSwapBuffers();
}


void update(int value) {

	_run += 1.0f;
	if (_run > 1000)
    {
        _run -= 1700;
    }

    _run1 += 1.0f;
	if (_run1 > 1000)
    {
        _run1 -= 1300;
    }

    _run2 += 3.5f;
	if (_run2 > 1000)
    {
        _run2 -= 1300;
    }

     _run3 += 0.8f;
	if (_run3 > 1000)
    {
        _run3 -= 1700;
    }

    if(onOff){
	_ang_tri += 2.5f;
	if (_ang_tri > 1000){
		_ang_tri = 1300;
	}
	 }

	glutPostRedisplay(); //Tell GLUT that the display has changed
	glutTimerFunc(25, update, 0);
}



void Rain
(int value){

if(rainday){

    _rain += 0.01f;

    glBegin(GL_POINTS);
    for(int i=1;i<=1000;i++)
    {
        int x=rand(),y=rand();
        x%=1000; y%=1000;
        glBegin(GL_LINES);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();
    }

	glutPostRedisplay();
	glutTimerFunc(5, Rain, 0);

    glFlush();

}
}

void Night(int value){

if(night){


    glClearColor(0.0,0.0,0.0,0.0);
	glutPostRedisplay();
    glutTimerFunc(5, Night, 0);
    glFlush();

}
}

void myKeyboard(unsigned char key, int x, int y){
	switch (key)
	{


    case 's':
        frd = false;
        bck = false;
        break;

    case 'r':
        rainday = true;
        Rain(_rain);

        break;

    case 'e':
        rainday = false;

        break;

    case 'n':
        night = true;
        Night(_nt);
        break;

    case 'd':
        night = false;
        glClearColor(0.0,0.5,0.8,1.0);
        break;

    case 27:     // ESC key
        exit(0);
        break;

	default:
	break;
	}
}


int main(int argc,char **argv)
{
    cout << endl << "*********** Natural View Of A Village ********************" << endl << endl;



    cout << "Press R : For Rain " << endl << endl;
    cout << "Press E : For Stop Rain" << endl << endl;

    cout << "Press N : For Night " << endl << endl;
    cout << "Press D : For Day" << endl << endl;

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1200, 600);
	glutCreateWindow("Natural View Of A Village create by md shawon khan");     // creating the window
	//glutFullScreen();       // making the window full screen
	//glutInitWindowPosition(0,0);

	glutDisplayFunc(display);
	glutKeyboardFunc(myKeyboard);
	glutTimerFunc(25, update, 0);
	init();
	glutMainLoop();
	return 0;
}

