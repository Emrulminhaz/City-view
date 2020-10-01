#include <iostream>
using namespace std;
#include<GL/gl.h>
#include <GL/glut.h>
#include <cmath>
#include<Windows.h>
#include<mmsystem.h>


float x,y,i;
bool red=false;
bool helicopter_frd=false;
bool car1_frd=false;
bool car2_frd=false;
bool car3_frd=false;
bool boat_frd=false;
bool train_frd=false;
bool cycle_frd=false;
bool night=false;
bool after_noon=false;
GLfloat m_counter=0.0f;
GLfloat hr_counter=0.0f;
GLfloat h1_counter=0.0f;
GLfloat h2_counter=0.0f;
GLfloat h3_counter=0.0f;
GLfloat h4_counter=0.0f;
GLfloat h5_counter=0.0f;
GLfloat boat_position=0.0f;
GLfloat train_position=0.0f;
GLfloat car1_position=0.0f;
GLfloat car2_position=0.0f;
GLfloat car3_position=0.0f;
GLfloat cycle_position=0.0f;
GLfloat citizen1_position=0.0f;
GLfloat citizen2_position=0.0f;
GLfloat helicopter_position=0.0f;
GLfloat clowd1_position=0.0f;
GLfloat clowd2_position=0.0f;
GLfloat clowd3_position=0.0f;



 void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);

	glLoadIdentity(); ///Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);

  //sky
  glPushMatrix();
glBegin(GL_POLYGON);
if(night==true)
{
    glColor3ub (7, 11, 52);
}
else if(after_noon==true)
{
    glColor3ub (108,178,221);

}
else
{
   glColor3ub (135,206,250);
}

glVertex2f(-1.00, 1.00);
glVertex2f(1.00, 1.00);
glVertex2f(1.00, -0.50);
glVertex2f(-1.00, -0.50);

glEnd();

   glPopMatrix();


 ///Stars///

    glPushMatrix();


                   glPointSize(3.0);


                   glBegin(GL_POINTS);
                   if(night==true)
                    {
                        glColor3ub (255,255,255);
                    }
                    else if(after_noon==true)
                    {
                        glColor3ub (245,245,245);

                    }
                    else
                    {
                    glColor3ub (135,206,250);
                    }

                    glVertex2f(0.33,0.65);
                    glVertex2f(-0.33,0.7);
                    glVertex2f(-0.43,0.8);
                    glVertex2f(0.6,0.88);
                    glVertex2f(0.67,0.68);
                    glVertex2f(-0.53,0.8);
                    glVertex2f(-.41,0.65);
                    glVertex2f(-0.19,0.78);
                    glVertex2f(0.07,0.9);
                    glVertex2f(0.23,0.96);
                    glVertex2f(0.27,1.05);
                    glVertex2f(0.13,1.1);
                    glVertex2f(-0.75,0.75);
                    glVertex2f(-0.56,0.90);

       glEnd();



    glPopMatrix();

//sun
glPushMatrix();
	   if(night==true)
    {
        glColor3ub (255, 255,255);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,178,82);

    }
   else
    {
         glColor3ub(253,255,26);
    }
	   glTranslatef (0.44, 0.86, 0.0);
	   glScalef(1,1.5,0);
	   glutSolidSphere(0.03, 50, 50);
	   glEnd();
    glPopMatrix();
glPopMatrix();


 ///clouds///
	///cloud1///
glPushMatrix();
glTranslatef(clowd1_position ,0.0f,0.0f);

	glPushMatrix();
   glTranslatef(0.18, 0.90, 0.0);
   if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (242,234,231);

    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.03, 50, 50);
	glEnd();
	glPopMatrix();


	glPushMatrix();
   glTranslatef(0.2, 0.925, 0.0);
   if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (242,234,231);

    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.03, 50, 50);
	glEnd();
	glPopMatrix();

	glPushMatrix();
   glTranslatef(0.22, 0.955, 0.0);
   if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (242,234,231);

    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.03, 50, 50);
	glEnd();
	glPopMatrix();



	glPushMatrix();
   glTranslatef(0.22, 0.905, 0.0);
   if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (242,234,231);

    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.03, 50, 50);
	glEnd();
	glPopMatrix();

	  glPushMatrix();
   glTranslatef(0.24, 0.935, 0.0);
   if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (242,234,231);

    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.03, 50, 50);
	glEnd();
	glPopMatrix();
    glPopMatrix();





	//clouds2
	glPushMatrix();
	glTranslatef(clowd2_position ,0.0f,0.0f);
	glPushMatrix();
   glTranslatef(0.38, 0.90, 0.0);
   if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (242,234,231);

    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.03, 50, 50);
	glEnd();
	glPopMatrix();


	glPushMatrix();
   glTranslatef(0.4, 0.925, 0.0);
   if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (242,234,231);

    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.03, 50, 50);
	glEnd();
	glPopMatrix();

	glPushMatrix();
   glTranslatef(0.42, 0.955, 0.0);
  if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (242,234,231);

    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.03, 50, 50);
	glEnd();
	glPopMatrix();



	glPushMatrix();
   glTranslatef(0.42, 0.905, 0.0);
   if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (242,234,231);

    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.03, 50, 50);
	glEnd();
	glPopMatrix();

	  glPushMatrix();
   glTranslatef(0.44, 0.935, 0.0);
   if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (242,234,231);

    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.03, 50, 50);
	glEnd();
	glPopMatrix();
	glPopMatrix();



	//cloud3
	glPushMatrix();
    glTranslatef(clowd3_position ,0.0f,0.0f);
	glPushMatrix();
   glTranslatef(-0.18, 0.85, 0.0);
   if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (242,234,231);

    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.03, 50, 50);
	glEnd();
	glPopMatrix();


	glPushMatrix();
   glTranslatef(-0.2, 0.875, 0.0);
   if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (242,234,231);

    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.03, 50, 50);
	glEnd();
	glPopMatrix();

	glPushMatrix();
   glTranslatef(-0.22, 0.905, 0.0);
   if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (242,234,231);

    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.03, 50, 50);
	glEnd();
	glPopMatrix();



	glPushMatrix();
   glTranslatef(-0.22, 0.855, 0.0);
   if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (242,234,231);

    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.03, 50, 50);
	glEnd();
	glPopMatrix();

	  glPushMatrix();
   glTranslatef(-0.24, 0.895, 0.0);
   if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (242,234,231);

    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.03, 50, 50);
	glEnd();
	glPopMatrix();



	glPopMatrix();


//building 1st
glPushMatrix();
//1st
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (56,35,35);
    }
    else if(after_noon==true)
    {
        glColor3ub (20,87,148);

    }
   else
    {
          glColor3ub (20,87,148);
    }

glVertex2f(-1.00, -0.50);
glVertex2f(-0.84, -0.50);
glVertex2f(-0.84, -0.08);
glVertex2f(-1.00, -0.08);

glEnd();

//left
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (56,35,35);
    }
    else if(after_noon==true)
    {
        glColor3ub (20,87,148);

    }
   else
    {
          glColor3ub (20,87,148);
    }

glVertex2f(-1.00, -0.08);
glVertex2f(-0.92, -0.08);
glVertex2f(-0.92, 0.20);
glVertex2f(-1.00, 0.18);

glEnd();



//right
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (94,49,49);
    }
    else if(after_noon==true)
    {
        glColor3ub (29,132,227);

    }
   else
    {
          glColor3ub (29,132,227);
    }

glVertex2f(-0.84, -0.08);
glVertex2f(-0.92, -0.08);
glVertex2f(-0.92, 0.20);
glVertex2f(-0.84, 0.18);

glEnd();

//leftup
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (56,35,35);
    }
    else if(after_noon==true)
    {
        glColor3ub (20,87,148);

    }
   else
    {
          glColor3ub (20,87,148);
    }

glVertex2f(-0.98, 0.185);
glVertex2f(-0.935, 0.195);
glVertex2f(-0.935, 0.36);
glVertex2f(-0.98, 0.36);

glEnd();

//rightup
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (94,49,49);
    }
    else if(after_noon==true)
    {
        glColor3ub (29,132,227);

    }
   else
    {
          glColor3ub (29,132,227);
    }
glVertex2f(-0.86, 0.185);
glVertex2f(-0.915, 0.195);
glVertex2f(-0.915, 0.36);
glVertex2f(-0.86, 0.36);

glEnd();

//midleft
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (94,49,49);
    }
    else if(after_noon==true)
    {
        glColor3ub (29,132,227);

    }
   else
    {
          glColor3ub (29,132,227);
    }

glVertex2f(-0.92, 0.20);
glVertex2f(-0.935, 0.195);
glVertex2f(-0.935, 0.36);
glVertex2f(-0.92, 0.36);

glEnd();

//midright
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (56,35,35);
    }
    else if(after_noon==true)
    {
        glColor3ub (20,87,148);

    }
   else
    {
          glColor3ub (20,87,148);
    }

glVertex2f(-0.92, 0.20);
glVertex2f(-0.905, 0.195);
glVertex2f(-0.905, 0.36);
glVertex2f(-0.92, 0.36);

glEnd();

//topleft
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (56,35,35);
    }
    else if(after_noon==true)
    {
        glColor3ub (20,87,148);

    }
   else
    {
          glColor3ub (20,87,148);
    }

glVertex2f(-0.92, 0.45);
glVertex2f(-0.98, 0.36);
glVertex2f(-0.935, 0.36);
glVertex2f(-0.92, 0.45);

glEnd();

//topright
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (94,49,49);
    }
    else if(after_noon==true)
    {
        glColor3ub (58,151,236);

    }
   else
    {
          glColor3ub (58,151,236);
    }
glVertex2f(-0.92, 0.45);
glVertex2f(-0.86, 0.36);
glVertex2f(-0.905, 0.36);
glVertex2f(-0.92, 0.45);

glEnd();

//midtopleft
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (94,49,49);
    }
    else if(after_noon==true)
    {
        glColor3ub (58,151,236);

    }
   else
    {
          glColor3ub (58,151,236);
    }
glVertex2f(-0.92, 0.45);
glVertex2f(-0.935, 0.36);
glVertex2f(-0.92, 0.36);
glVertex2f(-0.92, 0.45);

glEnd();

//midtopright
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (56,35,35);
    }
    else if(after_noon==true)
    {
        glColor3ub (20,87,148);

    }
   else
    {
          glColor3ub (20,87,148);
    }

glVertex2f(-0.92, 0.45);
glVertex2f(-0.905, 0.36);
glVertex2f(-0.92, 0.36);
glVertex2f(-0.92, 0.45);

glEnd();

//light1
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (233, 247, 74);

    }
   else
    {
          glColor3ub (255,255,255);
    }

glVertex2f(-0.99, 0.14);
glVertex2f(-0.97, 0.15);
glVertex2f(-0.97, 0.14);
glVertex2f(-0.99, 0.13);

glEnd();
//light2
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (233, 247, 74);

    }
   else
    {
          glColor3ub (255,255,255);
    }

glVertex2f(-0.95, 0.15);
glVertex2f(-0.93, 0.16);
glVertex2f(-0.93, 0.15);
glVertex2f(-0.95, 0.14);

glEnd();


//light3
glBegin(GL_POLYGON);
if(night==true)
    {
         glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,255);

    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(-0.98, 0.02);
glVertex2f(-0.96, 0.03);
glVertex2f(-0.96, 0.02);
glVertex2f(-0.98, 0.01);

glEnd();
//light4
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,255);

    }
   else
    {
          glColor3ub (255,255,255);
    }

glVertex2f(-0.94, 0.03);
glVertex2f(-0.92, 0.04);
glVertex2f(-0.92, 0.03);
glVertex2f(-0.94, 0.02);

glEnd();

//light5
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (233, 247, 74);

    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(-0.92, -0.12);
glVertex2f(-0.90, -0.12);
glVertex2f(-0.90, -0.11);
glVertex2f(-0.92, -0.11);

glEnd();
//light6
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (233, 247, 74);

    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(-0.88, -0.12);
glVertex2f(-0.86, -0.12);
glVertex2f(-0.86, -0.11);
glVertex2f(-0.88, -0.11);

glEnd();

//light7
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (233, 247, 74);

    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(-0.92, -0.18);
glVertex2f(-0.90, -0.18);
glVertex2f(-0.90, -0.17);
glVertex2f(-0.92, -0.17);

glEnd();
//light8
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (233, 247, 74);

    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(-0.88, -0.18);
glVertex2f(-0.86, -0.18);
glVertex2f(-0.86, -0.17);
glVertex2f(-0.88, -0.17);

glEnd();


//light9
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (233, 247, 74);

    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(-0.92, -0.24);
glVertex2f(-0.90, -0.24);
glVertex2f(-0.90, -0.23);
glVertex2f(-0.92, -0.23);

glEnd();
//light10
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (233, 247, 74);

    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(-0.88, -0.24);
glVertex2f(-0.86, -0.24);
glVertex2f(-0.86, -0.23);
glVertex2f(-0.88, -0.23);

glEnd();
//light5
glBegin(GL_POLYGON);
glColor3ub (255,255,255);

glVertex2f(-0.92, -0.30);
glVertex2f(-0.90, -0.30);
glVertex2f(-0.90, -0.29);
glVertex2f(-0.92, -0.29);

glEnd();
//light6
glBegin(GL_POLYGON);
glColor3ub (255,255,255);

glVertex2f(-0.88, -0.30);
glVertex2f(-0.86, -0.30);
glVertex2f(-0.86, -0.29);
glVertex2f(-0.88, -0.29);

glEnd();
glPopMatrix();


//2nd building


glPushMatrix();
//left
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (44, 58, 71);
    }
    else if(after_noon==true)
    {
        glColor3ub (18,69,139);

    }
   else
    {
          glColor3ub (18,69,139);
    }
glVertex2f(-0.84, -0.50);
glVertex2f(-0.80, -0.50);
glVertex2f(-0.80, 0.40);
glVertex2f(-0.84, 0.36);

glEnd();
//right
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (43,73,101);
    }
    else if(after_noon==true)
    {
        glColor3ub (33,104,201);

    }
   else
    {
          glColor3ub (33,104,201);
    }
glVertex2f(-0.60, -0.50);
glVertex2f(-0.80, -0.50);
glVertex2f(-0.80, 0.40);
glVertex2f(-0.60, 0.40);

glEnd();

//railing left
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (4,29,54);
    }
    else if(after_noon==true)
    {
        glColor3ub (13,123,165);

    }
   else
    {
          glColor3ub (13,123,165);
    }
glVertex2f(-0.84, 0.36);
glVertex2f(-0.80, 0.40);
glVertex2f(-0.80, 0.36);
glVertex2f(-0.84, 0.32);

glEnd();

//railing right
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (29,58,86);
    }
    else if(after_noon==true)
    {
        glColor3ub (33,184,242);

    }
   else
    {
          glColor3ub (33,184,242);
    }
glVertex2f(-0.60, 0.40);
glVertex2f(-0.80, 0.40);
glVertex2f(-0.80, 0.36);
glVertex2f(-0.60, 0.36);

glEnd();

//right middle dividator

//right
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (204, 142, 53);
    }
    else if(after_noon==true)
    {
        glColor3ub (31, 167, 219);

    }
   else
    {
         glColor3ub (33,184,242);
    }
glVertex2f(-0.704, -0.48);
glVertex2f(-0.706, -0.48);
glVertex2f(-0.706, 0.345);
glVertex2f(-0.704, 0.345);

glEnd();


//floor dividation for right
//floor d1
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (33,184,242);
    }
    else if(after_noon==true)
    {
        glColor3ub (33,184,242);

    }
   else
    {
         glColor3ub (33,184,242);
    }

glVertex2f(-0.60, 0.26);
glVertex2f(-0.80, 0.26);
glVertex2f(-0.80, 0.255);
glVertex2f(-0.60, 0.255);

glEnd();

//floor d2
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (33,184,242);
    }
    else if(after_noon==true)
    {
        glColor3ub (33,184,242);

    }
   else
    {
         glColor3ub (33,184,242);
    }
glVertex2f(-0.60, 0.16);
glVertex2f(-0.80, 0.16);
glVertex2f(-0.80, 0.155);
glVertex2f(-0.60, 0.155);

glEnd();

//floor d3
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (33,184,242);
    }
    else if(after_noon==true)
    {
        glColor3ub (33,184,242);

    }
   else
    {
         glColor3ub (33,184,242);
    }
glVertex2f(-0.60, 0.06);
glVertex2f(-0.80, 0.06);
glVertex2f(-0.80, 0.055);
glVertex2f(-0.60, 0.055);

glEnd();

//floor d4
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (33,184,242);
    }
    else if(after_noon==true)
    {
        glColor3ub (33,184,242);

    }
   else
    {
         glColor3ub (33,184,242);
    }
glVertex2f(-0.60,-0.06);
glVertex2f(-0.80, -0.06);
glVertex2f(-0.80, -0.055);
glVertex2f(-0.60, -0.055);

glEnd();


//floor d5
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (33,184,242);
    }
    else if(after_noon==true)
    {
        glColor3ub (33,184,242);

    }
   else
    {
         glColor3ub (33,184,242);
    }
glVertex2f(-0.60, -0.16);
glVertex2f(-0.80, -0.16);
glVertex2f(-0.80, -0.155);
glVertex2f(-0.60, -0.155);

glEnd();



//floor d6
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (33,184,242);
    }
    else if(after_noon==true)
    {
        glColor3ub (33,184,242);

    }
   else
    {
         glColor3ub (33,184,242);
    }

glVertex2f(-0.60, -0.26);
glVertex2f(-0.80, -0.26);
glVertex2f(-0.80, -0.255);
glVertex2f(-0.60, -0.255);

glEnd();

//floor d7
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (33,184,242);
    }
    else if(after_noon==true)
    {
        glColor3ub (33,184,242);

    }
   else
    {
         glColor3ub (33,184,242);
    }
glVertex2f(-0.60, -0.36);
glVertex2f(-0.80, -0.36);
glVertex2f(-0.80, -0.355);
glVertex2f(-0.60, -0.355);

glEnd();
//floor d8
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (33,184,242);
    }
    else if(after_noon==true)
    {
        glColor3ub (33,184,242);

    }
   else
    {
         glColor3ub (33,184,242);
    }
glVertex2f(-0.60, -0.46);
glVertex2f(-0.80, -0.46);
glVertex2f(-0.80, -0.455);
glVertex2f(-0.60, -0.455);

glEnd();

//Floor dividation for left
//floor d1
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (50,76,105);
    }
    else if(after_noon==true)
    {
        glColor3ub (13,123,165);

    }
   else
    {
         glColor3ub (13,123,165);
    }
glVertex2f(-0.84, 0.22);
glVertex2f(-0.80, 0.26);
glVertex2f(-0.80, 0.255);
glVertex2f(-0.84, 0.215);

glEnd();
//floor d2
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (50,76,105);
    }
    else if(after_noon==true)
    {
        glColor3ub (13,123,165);

    }
   else
    {
         glColor3ub (13,123,165);
    }
glVertex2f(-0.84, 0.12);
glVertex2f(-0.80, 0.16);
glVertex2f(-0.80, 0.155);
glVertex2f(-0.84, 0.115);

glEnd();
//floor d3
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (50,76,105);
    }
    else if(after_noon==true)
    {
        glColor3ub (13,123,165);

    }
   else
    {
         glColor3ub (13,123,165);
    }
glVertex2f(-0.84, 0.02);
glVertex2f(-0.80, 0.06);
glVertex2f(-0.80, 0.055);
glVertex2f(-0.84, 0.015);

glEnd();
//floor d4
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (50,76,105);
    }
    else if(after_noon==true)
    {
        glColor3ub (13,123,165);

    }
   else
    {
         glColor3ub (13,123,165);
    }
glVertex2f(-0.84, -0.09);
glVertex2f(-0.80, -0.05);
glVertex2f(-0.80, -0.045);
glVertex2f(-0.84, -0.085);

glEnd();
//floor d5
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (50,76,105);
    }
    else if(after_noon==true)
    {
        glColor3ub (13,123,165);

    }
   else
    {
         glColor3ub (13,123,165);
    }
glVertex2f(-0.84, -0.19);
glVertex2f(-0.80, -0.15);
glVertex2f(-0.80, -0.145);
glVertex2f(-0.84, -0.185);

glEnd();
//floor d6
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (50,76,105);
    }
    else if(after_noon==true)
    {
        glColor3ub (13,123,165);

    }
   else
    {
         glColor3ub (13,123,165);
    }
glVertex2f(-0.84, -0.29);
glVertex2f(-0.80, -0.25);
glVertex2f(-0.80, -0.245);
glVertex2f(-0.84, -0.285);
glEnd();
//floor d7
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (50,76,105);
    }
    else if(after_noon==true)
    {
        glColor3ub (13,123,165);

    }
   else
    {
         glColor3ub (13,123,165);
    }
glVertex2f(-0.84, -0.39);
glVertex2f(-0.80, -0.35);
glVertex2f(-0.80, -0.345);
glVertex2f(-0.84, -0.385);

glEnd();

//floor d8
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (50,76,105);
    }
    else if(after_noon==true)
    {
        glColor3ub (13,123,165);

    }
   else
    {
         glColor3ub (13,123,165);
    }
glVertex2f(-0.84, -0.49);
glVertex2f(-0.80, -0.45);
glVertex2f(-0.80, -0.445);
glVertex2f(-0.84, -0.485);

glEnd();

//window for right
//floor w1
//1
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,255);

    }
   else
    {
          glColor3ub (255,255,255);
    }

glVertex2f(-0.62, 0.30);
glVertex2f(-0.645, 0.30);
glVertex2f(-0.645, 0.32);
glVertex2f(-0.62, 0.32);
glEnd();
//2
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,255);

    }
   else
    {
          glColor3ub (255,255,255);
    }
    glVertex2f(-0.655, 0.30);
glVertex2f(-0.68, 0.30);
glVertex2f(-0.68, 0.32);
glVertex2f(-0.655, 0.32);
glEnd();
//3
glBegin(GL_POLYGON);
if(night==true)
    {
         glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,255);

    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(-0.72, 0.30);
glVertex2f(-0.745, 0.30);
glVertex2f(-0.745,0.32);
glVertex2f(-0.72,0.32);
glEnd();
//4
glBegin(GL_POLYGON);
if(night==true)
    {
         glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,255);

    }
   else
    {
          glColor3ub (255,255,255);
    }
    glVertex2f(-0.755,0.30);
glVertex2f(-0.78,0.30);
glVertex2f(-0.78,0.32);
glVertex2f(-0.755,0.32);
glEnd();


//floor w4
//1
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (226,240,0);

    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(-0.62, -0.01);
glVertex2f(-0.645, -0.01);
glVertex2f(-0.645, 0.01);
glVertex2f(-0.62, 0.01);
glEnd();
//2
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (226,240,0);

    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(-0.655, -0.01);
glVertex2f(-0.68, -0.01);
glVertex2f(-0.68, 0.01);
glVertex2f(-0.655, 0.01);
glEnd();
//3
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,255);

    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(-0.72, -0.01);
glVertex2f(-0.745, -0.01);
glVertex2f(-0.745,0.01);
glVertex2f(-0.72,0.01);
glEnd();
//4
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (246, 185, 59);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,255);

    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(-0.755,-0.01);
glVertex2f(-0.78,-0.01);
glVertex2f(-0.78,0.01);
glVertex2f(-0.755,0.01);
glEnd();



//floor w5
//1
glBegin(GL_POLYGON);
glColor3ub (246, 185, 59);

glVertex2f(-0.62, -0.10);
glVertex2f(-0.645, -0.10);
glVertex2f(-0.645, -0.12);
glVertex2f(-0.62, -0.12);
glEnd();
//2
glBegin(GL_POLYGON);
glColor3ub (246, 185, 59);
glVertex2f(-0.655, -0.10);
glVertex2f(-0.68, -0.10);
glVertex2f(-0.68, -0.12);
glVertex2f(-0.655, -0.12);
glEnd();

//floor w6
//3
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (132, 129, 122);
    }
    else if(after_noon==true)
    {
        glColor3ub (226,240,0);

    }
   else
    {
          glColor3ub (255,255,255);
    }


glVertex2f(-0.72, -0.20);
glVertex2f(-0.745, -0.20);
glVertex2f(-0.745,-0.22);
glVertex2f(-0.72,-0.22);
glEnd();
//4
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (132, 129, 122);
    }
    else if(after_noon==true)
    {
        glColor3ub (226,240,0);

    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(-0.755,-0.20);
glVertex2f(-0.78,-0.20);
glVertex2f(-0.78,-0.22);
glVertex2f(-0.755,-0.22);


glEnd();


glPopMatrix();

//3rd building
glPushMatrix();
//main
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (114,110,19);
    }
    else if(after_noon==true)
    {
        glColor3ub (231,223,24);

    }
   else
    {
          glColor3ub (231,223,24);
    }

glVertex2f(-0.50, -0.50);
glVertex2f(-0.30, -0.50);
glVertex2f(-0.30, 0.12);
glVertex2f(-0.50, 0.08);

glEnd();
//dividator in main
//1
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (116,124,72);

    }
   else
    {
          glColor3ub (116,124,72);
    }

glVertex2f(-0.4575, -0.50);
glVertex2f(-0.4425, -0.50);
glVertex2f(-0.4425, 0.12);
glVertex2f(-0.4575, 0.12);

glEnd();

//2
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (116,124,72);

    }
   else
    {
          glColor3ub (116,124,72);
    }

glVertex2f(-0.4075, -0.50);
glVertex2f(-0.3925, -0.50);
glVertex2f(-0.3925, 0.12);
glVertex2f(-0.4075, 0.12);

glEnd();

//2
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
else if(after_noon==true)
    {
        glColor3ub (116,124,72);

    }
   else
    {
          glColor3ub (116,124,72);
    }
glVertex2f(-0.3575, -0.50);
glVertex2f(-0.3425, -0.50);
glVertex2f(-0.3425, 0.12);
glVertex2f(-0.3575, 0.12);

glEnd();

//left left
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (120,116,2);
    }
else if(after_noon==true)
    {
        glColor3ub (249,241,49);

    }
   else
    {
          glColor3ub (249,241,49);
    }
glVertex2f(-0.50, 0.08);
glVertex2f(-0.45, 0.09);
glVertex2f(-0.45, 0.22);
glVertex2f(-0.50, 0.20);

glEnd();

//left right
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (86,83,1);
    }
    else if(after_noon==true)
    {
        glColor3ub (191,185,61);

    }
   else
    {
          glColor3ub (191,185,61);
    }
glVertex2f(-0.40, 0.10);
glVertex2f(-0.45, 0.09);
glVertex2f(-0.45, 0.22);
glVertex2f(-0.40, 0.18);

glEnd();

//left left top
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (86,83,1);
    }
    else if(after_noon==true)
    {
        glColor3ub (229,225,149);

    }
   else
    {
         glColor3ub (229,225,149);
    }



glVertex2f(-0.50, 0.20);
glVertex2f(-0.45, 0.22);
glVertex2f(-0.45, 0.30);


glEnd();

//left right top
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (56,54,0);
    }
    else if(after_noon==true)
    {
        glColor3ub (135,129,9);

    }
   else
    {
         glColor3ub (135,129,9);
    }


glVertex2f(-0.45, 0.22);
glVertex2f(-0.45, 0.30);
glVertex2f(-0.40, 0.18);
glEnd();

//right left
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (114,110,19);
    }
    else if(after_noon==true)
    {
        glColor3ub (231,223,24);

    }
   else
    {
          glColor3ub (231,223,24);
    }
glVertex2f(-0.40, 0.10);
glVertex2f(-0.30, 0.12);
glVertex2f(-0.30, 0.36);
glVertex2f(-0.40, 0.32);

glEnd();

//right windows

//1
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (31, 118, 143);
    }
    else if(after_noon==true)
    {
        glColor3ub (31, 118, 143);

    }
   else
    {
          glColor3ub (31, 118, 143);
    }
glVertex2f(-0.38, 0.12);
glVertex2f(-0.36, 0.13);
glVertex2f(-0.36, 0.15);
glVertex2f(-0.38, 0.14);

glEnd();

//2
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (255,246,0);
    }
    else if(after_noon==true)
    {
        glColor3ub (31, 118, 143);

    }
   else
    {
          glColor3ub (31, 118, 143);
    }
glVertex2f(-0.34, 0.13);
glVertex2f(-0.32, 0.14);
glVertex2f(-0.32, 0.16);
glVertex2f(-0.34, 0.15);

glEnd();
//3
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (255,246,0);
    }
    else if(after_noon==true)
    {
        glColor3ub (255, 255, 255);

    }
   else
    {
          glColor3ub (31, 118, 143);
    }
glVertex2f(-0.38, 0.16);
glVertex2f(-0.36, 0.17);
glVertex2f(-0.36, 0.19);
glVertex2f(-0.38, 0.18);

glEnd();

//4
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (31, 118, 143);
    }
    else if(after_noon==true)
    {
        glColor3ub (31, 118, 143);

    }
   else
    {
          glColor3ub (31, 118, 143);
    }
glVertex2f(-0.34, 0.17);
glVertex2f(-0.32, 0.18);
glVertex2f(-0.32, 0.20);
glVertex2f(-0.34, 0.19);

glEnd();
//5
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (255,246,0);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,255);

    }
   else
    {
          glColor3ub (31, 118, 143);
    }
glVertex2f(-0.38, 0.20);
glVertex2f(-0.36, 0.21);
glVertex2f(-0.36, 0.23);
glVertex2f(-0.38, 0.22);

glEnd();

//6
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (255,246,0);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,255);

    }
   else
    {
          glColor3ub (31, 118, 143);
    }
glVertex2f(-0.34, 0.21);
glVertex2f(-0.32, 0.22);
glVertex2f(-0.32, 0.24);
glVertex2f(-0.34, 0.23);

glEnd();


//right left top
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (86,83,1);
    }
    else if(after_noon==true)
    {
        glColor3ub (229,225,149);

    }
   else
    {
         glColor3ub (229,225,149);
    }


glVertex2f(-0.30, 0.46);
glVertex2f(-0.30, 0.36);
glVertex2f(-0.40, 0.32);
glEnd();

//right left design
// 1
glBegin(GL_POLYGON);
glColor3ub (116,124,72);

glVertex2f(-0.30, 0.46);
glVertex2f(-0.3275, 0.35);
glVertex2f(-0.3325, 0.35);
glEnd();

// 2
glBegin(GL_POLYGON);
glColor3ub (116,124,72);

glVertex2f(-0.30, 0.46);
glVertex2f(-0.3575, 0.34);
glVertex2f(-0.3625, 0.34);
glEnd();


//right right
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (96,93,12);
    }
    else if(after_noon==true)
    {
       glColor3ub (163,157,44);

    }
   else
    {
         glColor3ub (163,157,44);
    }


glVertex2f(-0.30, -0.50);
glVertex2f(-0.20, -0.50);
glVertex2f(-0.20, 0.32);
glVertex2f(-0.30, 0.36);

glEnd();

//right right dividation
//1
glBegin(GL_POLYGON);
glColor3ub (116,124,72);

glVertex2f(-0.30,0.26);
glVertex2f(-0.20, 0.22);
glVertex2f(-0.20, 0.21);
glVertex2f(-0.30, 0.25);

glEnd();

//2
glBegin(GL_POLYGON);
glColor3ub (116,124,72);

glVertex2f(-0.30,0.12);
glVertex2f(-0.20, 0.08);
glVertex2f(-0.20, 0.07);
glVertex2f(-0.30, 0.11);

glEnd();

//3
glBegin(GL_POLYGON);
glColor3ub (116,124,72);

glVertex2f(-0.30,0.04);
glVertex2f(-0.20, 0.00);
glVertex2f(-0.20, -0.01);
glVertex2f(-0.30, 0.03);

glEnd();
//4
glBegin(GL_POLYGON);
glColor3ub (116,124,72);

glVertex2f(-0.30,-0.04);
glVertex2f(-0.20, -0.08);
glVertex2f(-0.20, -0.09);
glVertex2f(-0.30, -0.05);

glEnd();

//4
glBegin(GL_POLYGON);
glColor3ub (116,124,72);

glVertex2f(-0.2725,-0.11);
glVertex2f(-0.2775, -0.10);
glVertex2f(-0.2775, -0.30);
glVertex2f(-0.2725, -0.31);

glEnd();

//5
glBegin(GL_POLYGON);
glColor3ub (116,124,72);

glVertex2f(-0.2725,-0.35);
glVertex2f(-0.2775, -0.34);
glVertex2f(-0.2775, -0.47);
glVertex2f(-0.2725, -0.48);

glEnd();



//right right top
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (56,54,0);
    }
    else if(after_noon==true)
    {
       glColor3ub (135,129,9);

    }
   else
    {
        glColor3ub (135,129,9);
    }
glVertex2f(-0.30, 0.46);
glVertex2f(-0.30, 0.36);
glVertex2f(-0.20, 0.32);
glEnd();


glPopMatrix();


//5th building behind 4th
glPushMatrix();
//main
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (86,7,74);
    }
    else if(after_noon==true)
    {
        glColor3ub (116, 84, 168);

    }
   else
    {
         glColor3ub (150,102,227);
    }
glVertex2f(0.00, -0.50);
glVertex2f(0.15, -0.50);
glVertex2f(0.15, 0.60);
glVertex2f(0.075, 0.62);
glVertex2f(0.00, 0.60);

glEnd();
//main design
glBegin(GL_LINES);
glColor3ub (0,0,0);

glVertex2f(0.01, -0.50);
glVertex2f(0.01, 0.60);

glVertex2f(0.03, -0.50);
glVertex2f(0.03, 0.608);

glVertex2f(0.05, -0.50);
glVertex2f(0.05, 0.613);

glVertex2f(0.08, -0.50);
glVertex2f(0.08, 0.62);
glVertex2f(0.10, -0.50);
glVertex2f(0.10, 0.613);

glVertex2f(0.12, -0.50);
glVertex2f(0.12, 0.608);

glVertex2f(0.14, -0.50);
glVertex2f(0.14, 0.60);


//horizontall
glVertex2f(0.00, 0.0);
glVertex2f(0.075, 0.02);

glVertex2f(0.075, 0.02);
glVertex2f(0.15, 0.00);

glVertex2f(0.00, 0.10);
glVertex2f(0.075, 0.12);

glVertex2f(0.075, 0.12);
glVertex2f(0.15, 0.10);

glVertex2f(0.00, 0.20);
glVertex2f(0.075, 0.22);

glVertex2f(0.075, 0.22);
glVertex2f(0.15, 0.20);


glVertex2f(0.00, 0.30);
glVertex2f(0.075, 0.32);

glVertex2f(0.075, 0.32);
glVertex2f(0.15, 0.30);


glVertex2f(0.00, 0.40);
glVertex2f(0.075, 0.42);

glVertex2f(0.075, 0.42);
glVertex2f(0.15, 0.40);


glVertex2f(0.00, 0.50);
glVertex2f(0.075, 0.52);

glVertex2f(0.075, 0.52);
glVertex2f(0.15, 0.50);

glEnd();

//polyleftup
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (126,10,109);
    }
    else if(after_noon==true)
    {
        glColor3ub (111,132,206);

    }
   else
    {
        glColor3ub (111,132,206);
    }



glVertex2f(0.00, 0.60);
glVertex2f(0.01, 0.60);
glVertex2f(0.04, 0.66);
glVertex2f(0.03, 0.66);

glEnd();

//polymidup
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (126,10,109);
    }
    else if(after_noon==true)
    {
        glColor3ub (111,132,206);

    }
   else
    {
        glColor3ub (111,132,206);
    }


glVertex2f(0.07, 0.618);
glVertex2f(0.075, 0.62);
glVertex2f(0.08, 0.618);
glVertex2f(0.08, 0.66);
glVertex2f(0.07, 0.66);

glEnd();



//polymidright
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (126,10,109);
    }
    else if(after_noon==true)
    {
        glColor3ub (87,111,195);

    }
   else
    {
        glColor3ub (87,111,195);
    }



glVertex2f(0.15, 0.60);
glVertex2f(0.14, 0.60);
glVertex2f(0.11, 0.66);
glVertex2f(0.12, 0.66);
glEnd();


//polytop
glBegin(GL_POLYGON);
if(night==true)
if(night==true)
    {
        glColor3ub (126,10,109);
    }
    else if(after_noon==true)
    {
        glColor3ub (111,132,206);

    }
   else
    {
        glColor3ub (111,132,206);
    }

glVertex2f(0.03, 0.66);
glVertex2f(0.07, 0.70);
glVertex2f(0.12, 0.66);
glEnd();
glPopMatrix();


//4th building
glPushMatrix();

//main left
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (73,72,72);
    }
    else if(after_noon==true)
    {
        glColor3ub (152,161,156);

    }
   else
    {
         glColor3ub (162,171,166);
    }
glVertex2f(-0.25, -0.58);
glVertex2f(-0.20, -0.58);
glVertex2f(-0.20, 0.52);
glVertex2f(-0.25, 0.48);

glEnd();

//main left railing
glBegin(GL_POLYGON);
glColor3ub (79,88,84);

glVertex2f(-0.25, 0.48);
glVertex2f(-0.20, 0.52);
glVertex2f(-0.20, 0.48);
glVertex2f(-0.25, 0.44);

glEnd();

//main right
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (43,43,43);
    }
    else if(after_noon==true)
    {
        glColor3ub (174,179,176);

    }
   else
    {
         glColor3ub (184,189,186);
    }

glVertex2f(-0.20, -0.58);
glVertex2f(0.05, -0.58);
glVertex2f(0.05, 0.52);
glVertex2f(-0.20, 0.52);


glEnd();

//main right railing
glBegin(GL_POLYGON);
glColor3ub (79,88,84);

glVertex2f(-0.20, 0.52);
glVertex2f(0.05, 0.52);
glVertex2f(0.05, 0.48);
glVertex2f(-0.20, 0.48);
glEnd();

//main right design
glBegin(GL_LINES);
if(night==true)
    {
        glColor3ub (255,255,255);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,255);

    }
   else
    {
         glColor3ub (255,255,255);
    }

glVertex2f(-0.18, 0.48);
glVertex2f(-0.18, -0.58);

glVertex2f(-0.15, 0.48);
glVertex2f(-0.15, -0.58);

glVertex2f(-0.12, 0.48);
glVertex2f(-0.12, -0.58);

glVertex2f(-0.09, 0.48);
glVertex2f(-0.09, -0.58);

glVertex2f(-0.06, 0.48);
glVertex2f(-0.06, -0.58);

glVertex2f(-0.03, 0.48);
glVertex2f(-0.03, -0.58);

glVertex2f(0.00, 0.48);
glVertex2f(0.00, -0.58);

glVertex2f(0.03, 0.48);
glVertex2f(0.03, -0.58);

glEnd();

//main left porting
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (49,49,49);
    }
    else if(after_noon==true)
    {
       glColor3ub (79,88,84);

    }
   else
    {
         glColor3ub (79,88,84);
    }

glVertex2f(-0.25, -0.26);
glVertex2f(-0.20, -0.22);
glVertex2f(-0.20, 0.24);
glVertex2f(-0.25, 0.20);

glEnd();
//main right porting
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (32,32,32);
    }
    else if(after_noon==true)
    {
        glColor3ub (120,131,125);

    }
   else
    {
         glColor3ub (120,131,125);
    }

glVertex2f(-0.20, -0.22);
glVertex2f(0.05, -0.22);
glVertex2f(0.05, 0.24);
glVertex2f(-0.20, 0.24);


glEnd();

//window
//1
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (60, 99, 130);
    }
    else if(after_noon==true)
    {
        glColor3ub (60, 92, 117);

    }
   else
    {
         glColor3ub (60, 92, 117);
    }

glVertex2f(-0.18, 0.17);
glVertex2f(-0.10, 0.17);
glVertex2f(-0.10, 0.20);
glVertex2f(-0.18, 0.20);


glEnd();

//2
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (60, 99, 130);
    }
    else if(after_noon==true)
    {
        glColor3ub (60, 92, 117);

    }
   else
    {
         glColor3ub (60, 92, 117);
    }


glVertex2f(-0.06, 0.17);
glVertex2f(0.02, 0.17);
glVertex2f(0.02, 0.20);
glVertex2f(-0.06, 0.20);


glEnd();

//3
glBegin(GL_POLYGON);
glColor3ub (60, 92, 117);


glVertex2f(-0.18, 0.10);
glVertex2f(-0.10, 0.10);
glVertex2f(-0.10, 0.13);
glVertex2f(-0.18, 0.13);


glEnd();

//4
glBegin(GL_POLYGON);
glColor3ub (60, 92, 117);


glVertex2f(-0.06, 0.10);
glVertex2f(0.02, 0.10);
glVertex2f(0.02, 0.13);
glVertex2f(-0.06, 0.13);


glEnd();
//5
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (193, 240, 232);
    }
    else if(after_noon==true)
    {
        glColor3ub (193, 240, 232);

    }
   else
    {
         glColor3ub (60, 92, 117);
    }

glVertex2f(-0.18, -0.08);
glVertex2f(-0.10, -0.08);
glVertex2f(-0.10, -0.11);
glVertex2f(-0.18, -0.11);


glEnd();

//6
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (193, 240, 232);
    }
    else if(after_noon==true)
    {
        glColor3ub (193, 240, 232);

    }
   else
    {
         glColor3ub (60, 92, 117);
    }


glVertex2f(-0.06, -0.08);
glVertex2f(0.02, -0.08);
glVertex2f(0.02, -0.11);
glVertex2f(-0.06, -0.11);


glEnd();


//7
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (193, 240, 232);
    }
    else if(after_noon==true)
    {
        glColor3ub (193, 240, 232);

    }
   else
    {
         glColor3ub (60, 92, 117);
    }


glVertex2f(-0.18, -0.15);
glVertex2f(-0.10, -0.15);
glVertex2f(-0.10, -0.18);
glVertex2f(-0.18, -0.18);


glEnd();

//8
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (193, 240, 232);
    }
    else if(after_noon==true)
    {
        glColor3ub (193, 240, 232);

    }
   else
    {
         glColor3ub (60, 92, 117);
    }

glVertex2f(-0.06,-0.15);
glVertex2f(0.02, -0.15);
glVertex2f(0.02, -0.18);
glVertex2f(-0.06, -0.18);


glEnd();



//Clock
glPushMatrix();
  glPushMatrix();
if(night==true)
        {
            glColor3ub (87, 96, 111);
        }
        else if(after_noon==true)
        {
        glColor3ub (229,238,234);

        }
       else
        {
             glColor3ub(229,238,234);
        }
        glTranslatef (-0.075, 0.325, 0.0);
	   glutSolidSphere(0.07, 50, 50);
	   glEnd();
    glPopMatrix();


    //hour
glPushMatrix();
glTranslatef(-0.0725f,0.325f,0);
glRotatef(hr_counter,0.0f,0.0f,-1.0f);
hr_counter+=1;
glTranslatef(0.0725f,-0.325f,0);
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (255, 255, 255);
        }
        else if(after_noon==true)
        {
        glColor3ub (69, 34, 23);

        }
       else
        {
             glColor3ub (225,70,18);
        }
glVertex2f(-0.0725, 0.37);
glVertex2f(-0.0725, 0.325);
glVertex2f(-0.0775, 0.325);
glVertex2f(-0.0775, 0.37);


glEnd();
glPopMatrix();

   //minute
glPushMatrix();
glTranslatef(-0.0725f,0.325f,0);
glRotatef(m_counter,0.0f,0.0f,-1.0f);
m_counter+=2;
glTranslatef(0.0725f,-0.325f,0);
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (255, 255, 255);
        }
        else if(after_noon==true)
        {
        glColor3ub (69, 34, 23);

        }
       else
        {
             glColor3ub (225,70,18);
        }
glVertex2f(-0.0225, 0.37);
glVertex2f(-0.0725, 0.325);
glVertex2f(-0.0775, 0.325);
glVertex2f(-0.0275, 0.37);


glEnd();
glPopMatrix();




glPushMatrix();
if(night==true)
        {
            glColor3ub (47, 53, 66);
        }
        else if(after_noon==true)
        {
        glColor3ub (91, 99, 95);

        }
       else
        {
             glColor3ub(120,131,125);
        }
        	   glTranslatef (-0.075, 0.325, 0.0);
	   glutSolidSphere(0.01, 50, 50);
	   glEnd();
    glPopMatrix();


     glPopMatrix();
glPopMatrix();

//6th building
glPushMatrix();
//cilinder
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (205, 97, 51);
        }
        else if(after_noon==true)
        {
        glColor3ub (221, 227, 187);

        }
       else
        {
             glColor3ub (242,242,210);

        }
glVertex2f(0.20, -0.50);
glVertex2f(0.40, -0.50);
glVertex2f(0.325, 0.37);
glVertex2f(0.30, 0.38);
glVertex2f(0.275, 0.37);

glEnd();
//design main
glBegin(GL_LINES);
    if(night==true)
        {
            glColor3ub (255, 255, 255);
        }
        else if(after_noon==true)
        {
        glColor3ub (0,0,0);

        }
       else
        {
             glColor3ub (0,0,0);

        }
glVertex2f(0.225, -0.50);
glVertex2f(0.282, 0.37);

glVertex2f(0.25, -0.50);
glVertex2f(0.29, 0.37);

glVertex2f(0.275, -0.50);
glVertex2f(0.295, 0.37);


glVertex2f(0.30, -0.50);
glVertex2f(0.305, 0.37);


glVertex2f(0.325, -0.50);
glVertex2f(0.31, 0.37);


glVertex2f(0.35, -0.50);
glVertex2f(0.315, 0.37);


glVertex2f(0.375, -0.50);
glVertex2f(0.32, 0.37);


glEnd();

//enrty
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (44, 44, 84);
        }
        else if(after_noon==true)
        {
        glColor3ub (59, 55, 54);

        }
       else
        {
             glColor3ub (69,64,62);

        }
glVertex2f(0.27, -0.50);
glVertex2f(0.33, -0.50);
glVertex2f(0.33, -0.345);
glVertex2f(0.27, -0.345);

glEnd();

//enrtypointing
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (87, 96, 111);
        }
        else if(after_noon==true)
        {
        glColor3ub (82, 82, 82);

        }
       else
        {
             glColor3ub (105,103,102);

        }

glVertex2f(0.275, -0.50);
glVertex2f(0.325, -0.50);
glVertex2f(0.325, -0.35);
glVertex2f(0.275, -0.35);

glEnd();


//circle1bottom
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (176,187,2);
        }
        else if(after_noon==true)
        {
        glColor3ub (163, 157, 24);

        }
       else
        {
             glColor3ub (189,182,27);

        }
        glVertex2f(0.275, 0.37);
glVertex2f(0.30, 0.38);
glVertex2f(0.325, 0.37);
glVertex2f(0.35, 0.40);
glVertex2f(0.25, 0.40);


glEnd();

//circle1up
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (220,234,3);
        }
        else if(after_noon==true)
        {
        glColor3ub (204, 204, 96);

        }
       else
        {
             glColor3ub (240,240,110);

        }
glVertex2f(0.35, 0.40);
glVertex2f(0.25, 0.40);
glVertex2f(0.275, 0.43);
glVertex2f(0.325, 0.43);


glEnd();

//poly
glBegin(GL_POLYGON);
glColor3ub (242,242,210);

glVertex2f(0.285, 0.43);
glVertex2f(0.315, 0.43);
glVertex2f(0.315, 0.55);
glVertex2f(0.285, 0.55);

glEnd();

//poly design
glBegin(GL_LINES);
glColor3ub (0,0,0);

glVertex2f(0.285, 0.45);
glVertex2f(0.315, 0.45);

glVertex2f(0.285, 0.47);
glVertex2f(0.315, 0.47);

glVertex2f(0.285, 0.49);
glVertex2f(0.315, 0.49);

glVertex2f(0.285, 0.51);
glVertex2f(0.315, 0.51);

glVertex2f(0.285, 0.53);
glVertex2f(0.315, 0.53);

glEnd();

//circle1bottom2
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (176,187,2);
        }
        else if(after_noon==true)
        {
        glColor3ub (166, 160, 25);

        }
       else
        {
             glColor3ub (189,182,27);

        }
glVertex2f(0.285, 0.55);
glVertex2f(0.315, 0.55);
glVertex2f(0.335, 0.57);
glVertex2f(0.265, 0.57);


glEnd();

//circle1up2
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (220,234,3);
        }
        else if(after_noon==true)
        {
        glColor3ub (204, 204, 96);

        }
       else
        {
             glColor3ub (240,240,110);

        }
glVertex2f(0.265, 0.57);
glVertex2f(0.335, 0.57);
glVertex2f(0.315, 0.60);
glVertex2f(0.285, 0.60);


glEnd();

//poly2
glBegin(GL_POLYGON);
glColor3ub (242,242,210);
glVertex2f(0.29, 0.60);
glVertex2f(0.31, 0.60);
glVertex2f(0.305, 0.70);
glVertex2f(0.295, 0.70);

glEnd();

//top light
  glPushMatrix();
	   glColor3ub(255,0,0);
	   glTranslatef (0.30, 0.71, 0.0);
	   glutSolidSphere(0.007, 50, 50);
	   glEnd();
    glPopMatrix();



glPopMatrix();



//7th building
glPushMatrix();
//main
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (46,32,49);
        }
        else if(after_noon==true)
        {
        glColor3ub (99, 80, 128);

        }
       else
        {
             glColor3ub (118,95,152);

        }
glVertex2f(0.30, -0.50);
glVertex2f(0.60, -0.50);
glVertex2f(0.60, 0.46);
glVertex2f(0.54, 0.46);

glEnd();

//main design
glBegin(GL_LINES);
if(night==true)
        {
            glColor3ub (255,255,255);
        }
        else if(after_noon==true)
        {
        glColor3ub (255,255,255);

        }
       else
        {
             glColor3ub (255,255,255);

        }
glVertex2f(0.39, -0.30);
glVertex2f(0.60, -0.30);

glVertex2f(0.43, -0.15);
glVertex2f(0.60, -0.15);

glVertex2f(0.46, 0.0);
glVertex2f(0.60, 0.0);

glVertex2f(0.48, 0.15);
glVertex2f(0.60, 0.15);

glVertex2f(0.52, 0.30);
glVertex2f(0.60, 0.30);

glEnd();

//main window
//1
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (229, 142, 38);
    }
    else if(after_noon==true)
        {
        glColor3ub (229, 142, 38);

        }
   else
    {
          glColor3ub (255,255,255);
    }
    glVertex2f(0.55, 0.31);
glVertex2f(0.58, 0.31);
glVertex2f(0.58, 0.33);
glVertex2f(0.55, 0.33);

glEnd();

//2
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (229, 142, 38);
    }
    else if(after_noon==true)
        {
        glColor3ub (229, 142, 38);

        }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(0.55, 0.01);
glVertex2f(0.58, 0.01);
glVertex2f(0.58, 0.035);
glVertex2f(0.55, 0.035);

glEnd();
//3
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (229, 142, 38);
    }
    else if(after_noon==true)
        {
        glColor3ub (229, 142, 38);

        }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(0.53, 0.01);
glVertex2f(0.50, 0.01);
glVertex2f(0.50, 0.035);
glVertex2f(0.53, 0.035);

glEnd();

//4
glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glVertex2f(0.55, -0.14);
glVertex2f(0.58, -0.14);
glVertex2f(0.58, -0.11);
glVertex2f(0.55, -0.11);

glEnd();

//5
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (229, 142, 38);
    }
    else if(after_noon==true)
        {
        glColor3ub (255,255,255);

        }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(0.53, -0.14);
glVertex2f(0.50, -0.14);
glVertex2f(0.50, -0.11);
glVertex2f(0.53, -0.11);

glEnd();

//6
glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glVertex2f(0.48, -0.14);
glVertex2f(0.45, -0.14);
glVertex2f(0.45, -0.11);
glVertex2f(0.48, -0.11);

glEnd();

//left left
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (26,19,28);
        }
        else if(after_noon==true)
        {
        glColor3ub (72, 58, 94);

        }
       else
        {
             glColor3ub (84,68,109);

        }
glVertex2f(0.35, -0.50);
glVertex2f(0.30, -0.50);
glVertex2f(0.42, 0.20);
glVertex2f(0.54, 0.46);
glVertex2f(0.56, 0.46);

glEnd();

//left left design
glBegin(GL_LINES);
if(night==true)
        {
            glColor3ub (255,255,255);
        }
        else if(after_noon==true)
        {
        glColor3ub (255,255,255);

        }
       else
        {
             glColor3ub (255,255,255);

        }
glVertex2f(0.35, -0.50);
glVertex2f(0.56, 0.46);

glVertex2f(0.345, -0.46);
glVertex2f(0.55, 0.46);

glVertex2f(0.30, -0.50);
glVertex2f(0.42, 0.20);

glVertex2f(0.32, -0.46);
glVertex2f(0.43, 0.20);




glEnd();



//left
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (58,52,60);
        }
        else if(after_noon==true)
        {
        glColor3ub (114, 99, 138);

        }
       else
        {
             glColor3ub (128,111,154);

        }
glVertex2f(0.52, 0.50);
glVertex2f(0.54, 0.56);
glVertex2f(0.54, 0.46);
glVertex2f(0.52, 0.41);


glEnd();


//middle
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (26,19,28);
        }
        else if(after_noon==true)
        {
        glColor3ub (84,68,109);

        }
       else
        {
             glColor3ub (84,68,109);

        }
glVertex2f(0.60, 0.46);
glVertex2f(0.54, 0.46);
glVertex2f(0.54, 0.56);
glVertex2f(0.60, 0.56);


glEnd();

//middleup
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (58,52,60);
        }
        else if(after_noon==true)
        {
        glColor3ub (114, 99, 138);

        }
       else
        {
             glColor3ub (128,111,154);

        }

glVertex2f(0.54, 0.56);
glVertex2f(0.66, 0.80);
glVertex2f(0.72, 0.80);
glVertex2f(0.60, 0.56);


glEnd();

//middleright
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (26,19,28);
        }
        else if(after_noon==true)
        {
        glColor3ub (84,68,109);

        }
       else
        {
             glColor3ub (84,68,109);

        }
glVertex2f(0.60, 0.56);
glVertex2f(0.72, 0.80);
glVertex2f(0.72, 0.70);
glVertex2f(0.60, 0.46);


glEnd();

//rightup
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (58,52,60);
        }
        else if(after_noon==true)
        {
        glColor3ub (114, 99, 138);

        }
       else
        {
             glColor3ub (128,111,154);

        }
glVertex2f(0.60, 0.46);
glVertex2f(0.66, 0.46);
glVertex2f(0.78, 0.70);
glVertex2f(0.72, 0.70);


glEnd();

//rightmain
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (26,19,28);
        }
        else if(after_noon==true)
        {
        glColor3ub (84,68,109);

        }
       else
        {
             glColor3ub (84,68,109);

        }
glVertex2f(0.60, 0.46);
glVertex2f(0.66, 0.46);
glVertex2f(0.66, -0.50);
glVertex2f(0.60, -0.50);


glEnd();

//rightright
glBegin(GL_POLYGON);
if(night==true)
        {
            glColor3ub (46,32,49);
        }
        else if(after_noon==true)
        {
        glColor3ub (99, 80, 128);
        }
       else
        {
             glColor3ub (118,95,152);

        }
        glVertex2f(0.66, -0.50);
glVertex2f(0.66, 0.46);
glVertex2f(0.78, 0.70);
glVertex2f(0.78, -0.50);



glEnd();

//main design
glBegin(GL_LINES);
if(night==true)
        {
            glColor3ub (255,255,255);
        }
        else if(after_noon==true)
        {
        glColor3ub (255,255,255);
        }
       else
        {
             glColor3ub (255,255,255);

        }
glVertex2f(0.66, -0.30);
glVertex2f(0.78, -0.30);

glVertex2f(0.66, -0.15);
glVertex2f(0.78, -0.15);

glVertex2f(0.66, 0.0);
glVertex2f(0.78, 0.0);

glVertex2f(0.66, 0.15);
glVertex2f(0.78, 0.15);

glVertex2f(0.66, 0.30);
glVertex2f(0.78, 0.30);

glVertex2f(0.66, 0.39);
glVertex2f(0.78, 0.39);

glVertex2f(0.66, 0.46);
glVertex2f(0.78, 0.46);

glVertex2f(0.69, 0.52);
glVertex2f(0.78, 0.52);

glVertex2f(0.72, 0.57);
glVertex2f(0.78, 0.57);

glVertex2f(0.75, 0.62);
glVertex2f(0.78, 0.62);

glEnd();
//right right window

//1
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (229, 142, 38);
    }
    else if(after_noon==true)
        {
        glColor3ub (229, 142, 38);
        }
   else
    {
          glColor3ub (255,255,255);
    }
    glVertex2f(0.72, 0.53);
glVertex2f(0.76, 0.53);
glVertex2f(0.76, 0.547);
glVertex2f(0.72, 0.547);

glEnd();
//2
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (229, 142, 38);
    }
    else if(after_noon==true)
    {
        glColor3ub (229, 142, 38);
    }
   else
    {
          glColor3ub (255,255,255);
    }
    glVertex2f(0.74, 0.40);
glVertex2f(0.77, 0.40);
glVertex2f(0.77, 0.42);
glVertex2f(0.74, 0.42);

glEnd();

//3
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (229, 142, 38);
    }
    else if(after_noon==true)
    {
        glColor3ub (229, 142, 38);
    }
   else
    {
          glColor3ub (255,255,255);
    }
    glVertex2f(0.68, 0.40);
glVertex2f(0.71, 0.40);
glVertex2f(0.71, 0.42);
glVertex2f(0.68, 0.42);

glEnd();


//4
glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glVertex2f(0.68, 0.16);
glVertex2f(0.72, 0.16);
glVertex2f(0.72, 0.18);
glVertex2f(0.68, 0.18);

glEnd();
//5
glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glVertex2f(0.74, 0.16);
glVertex2f(0.77, 0.16);
glVertex2f(0.77, 0.18);
glVertex2f(0.74, 0.18);

glEnd();




glPopMatrix();



//8th building
glPushMatrix();
//main
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (7,40,45);
    }
    else if(after_noon==true)
    {
        glColor3ub (42, 119, 120);
    }
   else
    {
          glColor3ub (47,134,135);
    }
glVertex2f(0.80, -0.50);
glVertex2f(0.94, -0.50);
glVertex2f(0.94, 0.60);
glVertex2f(0.80, 0.60);

glEnd();

//main railing
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (14,30,30);
    }
    else if(after_noon==true)
    {
     glColor3ub (21,107,120);
    }
   else
    {
        glColor3ub (21,107,120);
    }


glVertex2f(0.80, 0.60);
glVertex2f(0.94, 0.60);
glVertex2f(0.94, 0.56);
glVertex2f(0.80, 0.56);

glEnd();

//main design
glBegin(GL_LINES);
if(night==true)
    {
        glColor3ub (120, 224, 143);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,255);
    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(0.80, -0.35);
glVertex2f(0.94, -0.35);

glVertex2f(0.80, -0.25);
glVertex2f(0.94, -0.25);

glVertex2f(0.80, -0.15);
glVertex2f(0.94, -0.15);

glVertex2f(0.80, 0.05);
glVertex2f(0.94, 0.05);

glVertex2f(0.80, 0.13);
glVertex2f(0.94, 0.13);

glVertex2f(0.80, 0.20);
glVertex2f(0.94, 0.20);

glVertex2f(0.80, 0.26);
glVertex2f(0.94, 0.26);


glEnd();

//right right window

//1
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (229, 142, 38);
    }
    else if(after_noon==true)
    {
        glColor3ub (229, 142, 38);
    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(0.82, 0.21);
glVertex2f(0.84, 0.21);
glVertex2f(0.84, 0.23);
glVertex2f(0.82, 0.23);

glEnd();
//2
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (229, 142, 38);
    }
    else if(after_noon==true)
    {
        glColor3ub (229, 142, 38);
    }
   else
    {
          glColor3ub (255,255,255);
    }
    glVertex2f(0.86, 0.21);
glVertex2f(0.89, 0.21);
glVertex2f(0.89, 0.23);
glVertex2f(0.86, 0.23);


glEnd();

//3
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (229, 142, 38);
    }
    else if(after_noon==true)
    {
        glColor3ub (229, 142, 38);
    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(0.91, 0.21);
glVertex2f(0.93, 0.21);
glVertex2f(0.93, 0.23);
glVertex2f(0.91, 0.23);

glEnd();


//4
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (229, 142, 38);
    }
    else if(after_noon==true)
    {
        glColor3ub (229, 142, 38);
    }
   else
    {
          glColor3ub (255,255,255);
    }
    glVertex2f(0.86, -0.24);
glVertex2f(0.89, -0.24);
glVertex2f(0.89, -0.17);
glVertex2f(0.86, -0.17);


glEnd();
//5
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (229, 142, 38);
    }
    else if(after_noon==true)
    {
        glColor3ub (229, 142, 38);
    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(0.82, -0.34);
glVertex2f(0.84, -0.34);
glVertex2f(0.84, -0.31);
glVertex2f(0.82, -0.31);

glEnd();
//6
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (229, 142, 38);
    }
    else if(after_noon==true)
    {
        glColor3ub (229, 142, 38);
    }
   else
    {
          glColor3ub (255,255,255);
    }
    glVertex2f(0.86, -0.34);
glVertex2f(0.89, -0.34);
glVertex2f(0.89, -0.31);
glVertex2f(0.86, -0.31);


glEnd();

//7
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (229, 142, 38);
    }
    else if(after_noon==true)
    {
        glColor3ub (229, 142, 38);
    }
   else
    {
          glColor3ub (255,255,255);
    }
glVertex2f(0.91, -0.34);
glVertex2f(0.93, -0.34);
glVertex2f(0.93, -0.31);
glVertex2f(0.91, -0.31);

glEnd();



//right
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (7,33,36);
    }
    else if(after_noon==true)
    {
        glColor3ub (34,100,101);
    }
   else
    {
         glColor3ub (34,100,101);
    }



glVertex2f(0.94, -0.50);
glVertex2f(1.00, -0.50);
glVertex2f(1.00, 0.56);
glVertex2f(0.94, 0.60);

glEnd();

//right design
glBegin(GL_LINES);
glColor3ub (255,255,255);

glVertex2f(0.95, -0.50);
glVertex2f(0.95, 0.60);

glVertex2f(0.96, -0.50);
glVertex2f(0.96, 0.60);


glVertex2f(0.97, -0.50);
glVertex2f(0.97, 0.58);


glVertex2f(0.98, -0.50);
glVertex2f(0.98, 0.57);


glVertex2f(0.99, -0.50);
glVertex2f(0.99, 0.56);


glEnd();

//top1
glBegin(GL_POLYGON);
glColor3ub (90,90,90);

glVertex2f(0.94, 0.60);
glVertex2f(0.84, 0.60);
glVertex2f(0.84, 0.66);
glVertex2f(0.97, 0.66);
glVertex2f(0.97, 0.58);


glEnd();



//top2
glBegin(GL_POLYGON);
glColor3ub (129,125,125);

glVertex2f(0.86, 0.66);
glVertex2f(0.86, 0.70);
glVertex2f(0.95, 0.70);
glVertex2f(0.95, 0.66);


glEnd();

//top stand
glBegin(GL_POLYGON);
glColor3ub (184,176,176);

glVertex2f(0.90, 0.70);
glVertex2f(0.90, 0.85);
glVertex2f(0.91, 0.85);
glVertex2f(0.91, 0.70);
glEnd();
glPopMatrix();

//helicopter
glPushMatrix();
glTranslatef(helicopter_position ,0.0f,0.0f);
glPushMatrix();
//body
glBegin(GL_POLYGON);
glColor3ub (240,73,17);

glVertex2f(-0.90, 0.75);
glVertex2f(-0.72, 0.75);
glVertex2f(-0.74, 0.70);
glVertex2f(-0.78, 0.65);
glVertex2f(-0.92, 0.65);
glVertex2f(-0.94, 0.68);

glEnd();
if(night==true && helicopter_frd==true){
glPushMatrix();

//helicopter_light_body
glBegin(GL_POLYGON);
glColor3ub (240,73,17);

glVertex2f(-0.92, 0.65);
glVertex2f(-0.92, 0.635);
glVertex2f(-0.915, 0.635);
glVertex2f(-0.915, 0.65);

glEnd();

//helicopter_light
glBegin(GL_POLYGON);
glColor3ub (255,255,255);


glVertex2f(-0.92, 0.635);
glVertex2f(-0.925, 0.62);
glVertex2f(-0.91, 0.62);
glVertex2f(-0.915, 0.635);
glEnd();
//light_reflection
/* glPushMatrix();
glBegin(GL_POLYGON);

glColor4ub (231,244,13,1);


glVertex2f(-0.98, 0.30);
glVertex2f(-0.925, 0.62);
glVertex2f(-0.91, 0.62);
glVertex2f(-0.86, 0.30);*/
glEnd();
    glPopMatrix();
        glPopMatrix();

 }

//fornt window
glBegin(GL_POLYGON);
if(night==true)
{
    glColor3ub (7, 11, 52);
}
else if(after_noon==true)
    {
        glColor3ub (108,178,221);

    }
else
{
   glColor3ub (178,229,240);
}
glVertex2f(-0.90, 0.74);
glVertex2f(-0.86, 0.74);
glVertex2f(-0.86, 0.68);
glVertex2f(-0.90, 0.68);
glVertex2f(-0.92, 0.655);
glVertex2f(-0.935, 0.68);


glEnd();

//small window 1
glPushMatrix();
if(night==true)
{
    glColor3ub (7, 11, 52);
}
else if(after_noon==true)
    {
        glColor3ub (108,178,221);

    }
else
{
   glColor3ub (178,229,240);
}
	   glTranslatef (-0.83, 0.71, 0.0);
	   glutSolidSphere(0.013, 50, 50);
	   glEnd();

glPopMatrix();


glEnd();

//small window 2
glPushMatrix();
	   if(night==true)
{
    glColor3ub (7, 11, 52);
}
else if(after_noon==true)
    {
        glColor3ub (108,178,221);

    }
else
{
   glColor3ub (178,229,240);
}
	   glTranslatef (-0.79, 0.71, 0.0);
	   glutSolidSphere(0.013, 50, 50);
	   glEnd();

glPopMatrix();


glEnd();




//wing1
glBegin(GL_POLYGON);
glColor3ub (240,73,17);
glVertex2f(-0.72, 0.75);
glVertex2f(-0.87, 0.75);
glVertex2f(-0.85, 0.77);
glVertex2f(-0.65, 0.77);
glVertex2f(-0.63, 0.75);
glVertex2f(-0.728, 0.73);

glEnd();

//wing2
glBegin(GL_POLYGON);
glColor3ub (240,73,17);

glVertex2f(-0.65, 0.77);
glVertex2f(-0.63, 0.75);
glVertex2f(-0.58, 0.84);
glVertex2f(-0.59, 0.84);



glEnd();


//back side fan
glPushMatrix();
//fan11
glPushMatrix();
if(helicopter_frd==true)
{
glTranslatef(-0.585f,0.845,0);
glRotatef(h1_counter,0.0f,0.0f,-1.0f);
h1_counter+=400;
glTranslatef(0.585f,-0.845,0);
}
glBegin(GL_POLYGON);
glColor3ub (255,255,205);

glVertex2f(-0.585, 0.845);
glVertex2f(-0.54, 0.90);
glVertex2f(-0.52, 0.88);
glEnd();
glPopMatrix();


//fan12
glPushMatrix();
if(helicopter_frd==true){
glTranslatef(-0.585f,0.845,0);
glRotatef(h2_counter,0.0f,0.0f,-1.0f);
h2_counter+=400;
glTranslatef(0.585f,-0.845,0);
}
glBegin(GL_POLYGON);
glColor3ub (255,255,205);

glVertex2f(-0.585, 0.845);
glVertex2f(-0.54, 0.76);
glVertex2f(-0.52, 0.78);
glEnd();
glPopMatrix();

//fan13
glPushMatrix();
if(helicopter_frd==true){
glTranslatef(-0.585f,0.845,0);
glRotatef(h3_counter,0.0f,0.0f,-1.0f);
h3_counter+=400;
glTranslatef(0.585f,-0.845,0);
}
glBegin(GL_POLYGON);
glColor3ub (255,255,205);

glVertex2f(-0.585, 0.845);
glVertex2f(-0.64, 0.86);
glVertex2f(-0.66, 0.84);
glEnd();
glPopMatrix();


//center circle
glPushMatrix();
	   glColor3ub(148,148,141);
	   glTranslatef (-0.585, 0.845, 0.0);
	   glutSolidSphere(0.007, 50, 50);
	   glEnd();

glPopMatrix();


glEnd();


glPopMatrix();

//main fan body
glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub (240,73,17);


glVertex2f(-0.85, 0.77);
glVertex2f(-0.85, 0.78);
glVertex2f(-0.79, 0.78);
glVertex2f(-0.79, 0.77);

glEnd();
//main fan 2nd body
glBegin(GL_POLYGON);
glColor3ub (240,73,17);


glVertex2f(-0.83, 0.78);
glVertex2f(-0.83, 0.83);
glVertex2f(-0.82, 0.83);
glVertex2f(-0.82, 0.78);

glEnd();


//main fan
glPushMatrix();
//fan21
glPushMatrix();
if(helicopter_frd==true){
glTranslatef(-0.825f,0.83f,0);
glRotatef(h4_counter,0.0f,1.0f,0.0f);
h4_counter+=400;
glTranslatef(0.825f,-0.83f,0);
}
glBegin(GL_POLYGON);
glColor3ub (255,255,205);

glVertex2f(-0.825, 0.83);
glVertex2f(-0.94, 0.825);
glVertex2f(-0.945, 0.845);
glEnd();
glPopMatrix();

//fan12
glPushMatrix();
if(helicopter_frd==true){
glTranslatef(-0.825f,0.83f,0);
glRotatef(h5_counter,0.0f,1.0f,0.0f);
h5_counter+=400;
glTranslatef(0.825f,-0.83f,0);
}
glBegin(GL_POLYGON);
glColor3ub (255,255,205);

glVertex2f(-0.825, 0.83);
glVertex2f(-0.70, 0.825);
glVertex2f(-0.705, 0.845);
glEnd();
glPopMatrix();



// Circlemain
glPushMatrix();
	   glColor3ub(148,148,141);
	   glTranslatef (-0.825, 0.83, 0.0);
	   glutSolidSphere(0.007, 50, 50);
	   glEnd();

glPopMatrix();


glEnd();


glPopMatrix();


//stand1
glBegin(GL_POLYGON);
glColor3ub (255,255,205);

glVertex2f(-0.88, 0.65);
glVertex2f(-0.874, 0.65);
glVertex2f(-0.874, 0.62);
glVertex2f(-0.88, 0.62);
glEnd();


//stand2
glBegin(GL_POLYGON);
glColor3ub (255,255,205);

glVertex2f(-0.80, 0.65);
glVertex2f(-0.804, 0.65);
glVertex2f(-0.804, 0.62);
glVertex2f(-0.80, 0.62);
glEnd();

//standbottom
glBegin(GL_POLYGON);
glColor3ub (255,255,205);

glVertex2f(-0.90, 0.62);
glVertex2f(-0.78, 0.62);
glVertex2f(-0.78, 0.614);
glVertex2f(-0.90, 0.614);
glEnd();




glPopMatrix();
glPopMatrix();
glPopMatrix();


     ///Trees start

     ///tree mid
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(98,78,44);

        glVertex2f(0.18f, -0.25f);
        glVertex2f(0.2f, -0.25f);
        glVertex2f(0.185f, -0.39f);
        glVertex2f(0.185f, -0.41f);
        glVertex2f(0.2f, -0.5f);

        glVertex2f(0.157f, -0.5f);
        glVertex2f(0.169, -0.41f);
        glVertex2f(0.169, -0.39f);
        glVertex2f(0.157f, -0.25f);
        glVertex2f(0.163f, -0.25f);
        glVertex2f(0.18f, -0.38f);
        glVertex2f(0.18f, -0.25f);
	glEnd();
    glPopMatrix();
    ///tree up

       glPushMatrix();
         glTranslatef(.16,-0.25,0.0);
      if(night==true)
    {
        glColor3ub (23, 70, 21);
    }
    else if(after_noon==true)
    {
        glColor3ub (1, 148, 20);
    }
   else
    {
          glColor3ub(0,204,26);
    }
             glutSolidSphere(0.04, 50, 50);
            glPopMatrix();

            glPushMatrix();
         glTranslatef(0.18,-0.195,0.0);
       if(night==true)
    {
        glColor3ub (23, 70, 21);
    }
    else if(after_noon==true)
    {
        glColor3ub (1, 148, 20);
    }
   else
    {
          glColor3ub(0,204,26);
    }
            glutSolidSphere(0.04, 50, 50);
            glPopMatrix();

            glPushMatrix();
         glTranslatef(.20,-0.25,0.0);
         if(night==true)
    {
        glColor3ub (23, 70, 21);
    }
    else if(after_noon==true)
    {
        glColor3ub (1, 148, 20);
    }
   else
    {
          glColor3ub(0,204,26);
    }
            glutSolidSphere(0.04, 50, 50);
            glPopMatrix();

  ///tree left
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(98,78,44);

        glVertex2f(-0.54f, -0.25f);
        glVertex2f(-0.55f, -0.25f);
        glVertex2f(-0.541f, -0.39f);
        glVertex2f(-0.541f, -0.41f);
        glVertex2f(-0.55f, -0.5f);
        glVertex2f(-0.513f, -0.5f);
        glVertex2f(-0.525f, -0.41f);
        glVertex2f(-0.525f, -0.39f);

        glVertex2f(-0.513f, -0.25f);
        glVertex2f(-0.52f, -0.25f);
        glVertex2f(-0.527f, -0.38f);
        glVertex2f(-0.54f, -0.25f);
	glEnd();
    glPopMatrix();
    ///tree up

       glPushMatrix();
         glTranslatef(-.5,-0.25,0.0);
       if(night==true)
    {
        glColor3ub (23, 70, 21);
    }
    else if(after_noon==true)
    {
        glColor3ub (1, 148, 20);
    }
   else
    {
          glColor3ub(0,204,26);
    }
             glutSolidSphere(0.04, 50, 50);
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-0.53,-0.195,0.0);
       if(night==true)
    {
        glColor3ub (23, 70, 21);
    }
    else if(after_noon==true)
    {
        glColor3ub (1, 148, 20);
    }
   else
    {
          glColor3ub(0,204,26);
    }
            glutSolidSphere(0.04, 50, 50);
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-.55,-0.25,0.0);
          if(night==true)
    {
        glColor3ub (23, 70, 21);
    }
    else if(after_noon==true)
    {
        glColor3ub (1, 148, 20);
    }
   else
    {
          glColor3ub(0,204,26);
    }
            glutSolidSphere(0.04, 50, 50);
            glPopMatrix();


  ///tree Right
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(98,78,44);
         glVertex2f(0.72f, -0.25f);
        glVertex2f(0.707f, -0.25f);
        glVertex2f(0.719f, -0.39f);
        glVertex2f(0.719f, -0.41f);
        glVertex2f(0.707f, -0.5f);
        glVertex2f(0.747f, -0.5f);
        glVertex2f(0.735f, -0.41f);
        glVertex2f(0.735f, -0.39f);

        glVertex2f(0.747f, -0.25f);
        glVertex2f(0.74f, -0.25f);
        glVertex2f(0.73f, -0.38f);
        glVertex2f(0.72f, -0.25f);
	glEnd();
    glPopMatrix();
    ///tree up

       glPushMatrix();
         glTranslatef(.7,-0.25,0.0);
       if(night==true)
    {
        glColor3ub (23, 70, 21);
    }
    else if(after_noon==true)
    {
        glColor3ub (1, 148, 20);
    }
   else
    {
          glColor3ub(0,204,26);
    }
             glutSolidSphere(0.04, 50, 50);
            glPopMatrix();

            glPushMatrix();
         glTranslatef(0.73,-0.195,0.0);
       if(night==true)
    {
        glColor3ub (23, 70, 21);
    }
    else if(after_noon==true)
    {
        glColor3ub (1, 148, 20);
    }
   else
    {
          glColor3ub(0,204,26);
    }
           glutSolidSphere(0.04, 50, 50);
            glPopMatrix();

            glPushMatrix();
         glTranslatef(.75,-0.25,0.0);
          if(night==true)
    {
        glColor3ub (23, 70, 21);
    }
    else if(after_noon==true)
    {
        glColor3ub (1, 148, 20);
    }
   else
    {
          glColor3ub(0,204,26);
    }
            glutSolidSphere(0.04, 50, 50);
            glPopMatrix();
  ///tree finish


    //traffic signal
glPushMatrix();

//stand body 1
glBegin(GL_POLYGON);
glColor3ub (0,0,0);

glVertex2f(-0.35, -0.50);
glVertex2f(-0.37, -0.50);
glVertex2f(-0.37, -0.49);
glVertex2f(-0.35, -0.49);

glEnd();

//stand body 2
glBegin(GL_POLYGON);
glColor3ub (66,62,62);

glVertex2f(-0.355, -0.49);
glVertex2f(-0.365, -0.49);
glVertex2f(-0.365, -0.30);
glVertex2f(-0.355, -0.30);

glEnd();

//stand body 3
glBegin(GL_POLYGON);
glColor3ub (0,0,0);

glVertex2f(-0.355, -0.32);
glVertex2f(-0.31, -0.31);
glVertex2f(-0.31, -0.34);
glVertex2f(-0.355, -0.35);

glEnd();
//red
        glPushMatrix();
        if(red==true){
	   glColor3ub (255,0,0);
        }
        else
        {
           glColor3ub (0,0,0);
        }
	   glTranslatef (-0.345, -0.335, 0.0);
	   glutSolidSphere(0.006, 50, 50);
	   glEnd();
	   glPopMatrix();
	   //yellow
	      glPushMatrix();
	   glColor3ub (224,251,3);
	   glTranslatef (-0.33, -0.331, 0.0);
	   glutSolidSphere(0.006, 50, 50);
	   glEnd();
	   glPopMatrix();
	   //green
	    glPushMatrix();
	    if(red==true){
        glColor3ub (0,0,0);
	    }
	    else{
        glColor3ub (0,255,0);
	    }
	   glTranslatef (-0.318, -0.328, 0.0);
	   glutSolidSphere(0.006, 50, 50);
	   glEnd();
	   glPopMatrix();



glPopMatrix();



//road1
glPushMatrix();
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (0, 0, 0);
    }
    else if(after_noon==true)
    {
        glColor3ub (94, 92, 92);
    }
   else
    {
          glColor3ub (127,127,127);
    }
glVertex2f(-1.0, -0.50);
glVertex2f(-1.0, -0.55);
glVertex2f(1.0, -0.55);
glVertex2f(1.0, -0.50);

glEnd();
glPopMatrix();

///road white strips
    glPushMatrix();

    glColor3ub(255,255,255);

    for(float i=-1;i<1;i+=0.06){

        glBegin(GL_POLYGON);
        glVertex2f(i, -0.52f);
        glVertex2f(i, -0.524f);
        glVertex2f(i+0.04f, -0.524f);
        glVertex2f(i+0.04f,-0.52f);
        glEnd();

    }
glPopMatrix();

//car1
glPushMatrix();
glTranslatef(car1_position ,0.0f,0.0f);
glPushMatrix();

//main body
glBegin(GL_POLYGON);
glColor3ub (255,0,0);

glVertex2f(0.40, -0.50);
glVertex2f(0.40, -0.45);
glVertex2f(0.50, -0.45);
glVertex2f(0.50, -0.50);

glEnd();

//front body
glBegin(GL_POLYGON);
glColor3ub (255,0,0);

glVertex2f(0.40, -0.50);
glVertex2f(0.37, -0.49);
glVertex2f(0.35, -0.48);
glVertex2f(0.35, -0.47);
glVertex2f(0.40, -0.45);

glEnd();

//front light
if(night==true && car1_frd==true){
glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub (255,255,255);


glVertex2f(0.37, -0.487);
glVertex2f(0.36, -0.475);
glVertex2f(0.37, -0.467);


glEnd();

//front light_reflection
/*glBegin(GL_POLYGON);
glColor4ub (255,255,255,30);

glVertex2f(0.36, -0.475);
glVertex2f(0.28, -0.48);
glVertex2f(0.32, -0.51);*/


glEnd();
glPopMatrix();
 }



//front glass
glBegin(GL_POLYGON);
glColor3ub (255,0,0);

glVertex2f(0.42, -0.45);
glVertex2f(0.425, -0.45);
glVertex2f(0.45, -0.425);
glVertex2f(0.445, -0.42);


glEnd();


//seat
glBegin(GL_POLYGON);
glColor3ub (0,0,0);

glVertex2f(0.47, -0.45);
glVertex2f(0.48, -0.45);
glVertex2f(0.48, -0.44);
glVertex2f(0.475, -0.43);
glVertex2f(0.47, -0.44);


glEnd();

//back body
glBegin(GL_POLYGON);
glColor3ub (255,0,0);

glVertex2f(0.50, -0.45);
glVertex2f(0.52, -0.46);
glVertex2f(0.53, -0.47);
glVertex2f(0.52, -0.50);
glVertex2f(0.50, -0.50);


glEnd();

//back light
glBegin(GL_POLYGON);
glColor3ub (255,255,255);



glVertex2f(0.52, -0.475);
glVertex2f(0.515, -0.475);
glVertex2f(0.515, -0.465);
glVertex2f(0.52, -0.465);

glEnd();

//back light_reflection
glBegin(GL_POLYGON);
glColor3ub (255,255,255);


glEnd();



//seat2
glBegin(GL_POLYGON);
glColor3ub (0,0,0);

glVertex2f(0.48, -0.45);
glVertex2f(0.50, -0.44);
glVertex2f(0.52, -0.46);
glVertex2f(0.50, -0.45);
glEnd();
//car wheel1
  glPushMatrix();
	   glColor3ub(0,0,0);
	   glTranslatef (0.41, -0.49, 0.0);
	   glutSolidSphere(0.02, 50, 50);
	   glEnd();
    glPopMatrix();
    //car wheel11
  glPushMatrix();
	   glColor3ub(255,255,255);
	   glTranslatef (0.41, -0.49, 0.0);
	   glutSolidSphere(0.005, 50, 50);
	   glEnd();
    glPopMatrix();


    //car wheel2
  glPushMatrix();
	   glColor3ub(0,0,0);
	   glTranslatef (0.49, -0.49, 0.0);
	   glutSolidSphere(0.02, 50, 50);
	   glEnd();
    glPopMatrix();

     //car wheel21
  glPushMatrix();
	   glColor3ub(255,255,255);
	   glTranslatef (0.49, -0.49, 0.0);
	   glutSolidSphere(0.005, 50, 50);
	   glEnd();
    glPopMatrix();

glEnd();
glPopMatrix();
glPopMatrix();

//car2
glPushMatrix();
glTranslatef(car2_position ,0.0f,0.0f);
glPushMatrix();
//main body
glBegin(GL_POLYGON);
glColor3ub (0,0,0);

glVertex2f(0.66, -0.52);
glVertex2f(0.82, -0.52);
glVertex2f(0.82, -0.49);
glVertex2f(0.66, -0.49);

glEnd();
//body2
glBegin(GL_POLYGON);
glColor3ub (0,0,0);

glVertex2f(0.64, -0.52);
glVertex2f(0.86, -0.52);
glVertex2f(0.86, -0.538);
glVertex2f(0.64, -0.538);

glEnd();

//upper part
glBegin(GL_POLYGON);
glColor3ub (0,0,0);

glVertex2f(0.66, -0.49);
glVertex2f(0.69, -0.46);
glVertex2f(0.76, -0.46);
glVertex2f(0.82, -0.49);

glEnd();

//glass1
glBegin(GL_POLYGON);
glColor3ub (255,255,255);

glVertex2f(0.67, -0.485);
glVertex2f(0.695, -0.465);
glVertex2f(0.725, -0.465);
glVertex2f(0.725, -0.485);

glEnd();

//glass2
glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glVertex2f(0.735, -0.465);
glVertex2f(0.735, -0.485);
glVertex2f(0.80, -0.488);
glVertex2f(0.75, -0.465);


glEnd();

//front
glBegin(GL_POLYGON);
glColor3ub (0,0,0);

glVertex2f(0.82, -0.49);
glVertex2f(0.84, -0.49);
glVertex2f(0.85, -0.50);
glVertex2f(0.855, -0.515);
glVertex2f(0.86, -0.52);
glVertex2f(0.82, -0.52);

glEnd();


//front light
if(night==true && car2_frd==true){
glPushMatrix();
glBegin(GL_POLYGON);
glBegin(GL_POLYGON);
glColor3ub (255,255,255);



glVertex2f(0.855, -0.522);
glVertex2f(0.855, -0.53);
glVertex2f(0.848, -0.53);
glVertex2f(0.848, -0.522);

glEnd();


//front light_reflection
/*glBegin(GL_POLYGON);
glColor4ub (255,255,255,30);

glVertex2f(0.855, -0.53);
glVertex2f(0.855, -0.522);
glVertex2f(0.92, -0.522);
glVertex2f(0.90, -0.544);*/

glEnd();
glPopMatrix();
 }


//back
glBegin(GL_POLYGON);
glColor3ub (0,0,0);

glVertex2f(0.66, -0.49);
glVertex2f(0.65, -0.50);
glVertex2f(0.64, -0.52);
glVertex2f(0.66, -0.52);

glEnd();

//back light
glBegin(GL_POLYGON);
glColor3ub (255,255,255);



glVertex2f(0.645, -0.522);
glVertex2f(0.645, -0.53);
glVertex2f(0.65, -0.53);
glVertex2f(0.65, -0.522);

glEnd();

//back light_reflection
glBegin(GL_POLYGON);
glColor3ub (255,255,255);


glEnd();

//wheel1
glPushMatrix();
	   glColor3ub(60,60,60);
	   glTranslatef (0.82, -0.53, 0.0);
	   glutSolidSphere(0.02, 50, 50);
	   glEnd();
    glPopMatrix();
    //wheel12
glPushMatrix();
	   glColor3ub(255,255,255);
	   glTranslatef (0.82, -0.53, 0.0);
	   glutSolidSphere(0.008, 50, 50);
	   glEnd();
    glPopMatrix();

//wheel2
glPushMatrix();
	   glColor3ub(60,60,60);
	   glTranslatef (0.68, -0.53, 0.0);
	   glutSolidSphere(0.02, 50, 50);
	   glEnd();
    glPopMatrix();

    //wheel21
glPushMatrix();
	     glColor3ub(255,255,255);
	   glTranslatef (0.68, -0.53, 0.0);
	   glutSolidSphere(0.008, 50, 50);
	   glEnd();
    glPopMatrix();
    glEnd();
glPopMatrix();
glPopMatrix();


    //grill road
glBegin(GL_POLYGON);
glColor3ub (193,193,193);

glVertex2f(-1.00, -0.485);
glVertex2f(1.00, -0.485);
glVertex2f(1.00, -0.48);
glVertex2f(-1.00, -0.48);

glEnd();
//grill
glColor3ub (193,193,193);

    for(float i=-1;i<1;i+=0.06){

        glBegin(GL_POLYGON);
        glVertex2f(i, -0.485f);
        glVertex2f(i, -0.55f);
        glVertex2f(i+0.01f, -0.55f);
        glVertex2f(i+0.01f,-0.485f);
        glEnd();}
glPopMatrix();






//train
//1st_body
glPushMatrix();
glTranslatef(train_position ,0.0f,0.0f);
glPushMatrix();
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (191,180,180);
    }
    else if(after_noon==true)
    {
        glColor3ub (240,238,229);
    }
   else
    {
          glColor3ub (240,238,229);

    }
glVertex2f(-0.15, -0.45);
glVertex2f(0.12,-0.45);
glVertex2f(0.15,-0.58);
glVertex2f(-0.15, -0.58);

glEnd();

glBegin(GL_POLYGON);
glColor3ub (214,38,74);


glVertex2f(0.12,-0.45);
glVertex2f(0.155,-0.50);
glVertex2f(0.16,-0.51);
glVertex2f(0.165,-0.54);
glVertex2f(0.15,-0.58);


glEnd();
//front light
if(night==true && train_frd==true){
glPushMatrix();
glPushMatrix();
	  glColor3ub (245,245,90);
	   glTranslatef (0.155, -0.535, 0.0);
	   glutSolidSphere(0.007, 50, 50);
	   glEnd();
    glPopMatrix();


glEnd();

//front light_reflection
/*glBegin(GL_POLYGON);
glColor4ub (255,255,255,30);

glVertex2f(0.15, -0.532);
glVertex2f(0.16, -0.538);
glVertex2f(0.25, -0.55);
glVertex2f(0.23, -0.53);*/
glEnd();
glPopMatrix();
 }

//train_win1
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (16,249,255);
    }
    else if(after_noon==true)
    {
        glColor3ub (178,229,240);
    }
   else
    {
         glColor3ub (178,229,240);

    }

glVertex2f(0.12,-0.45);
glVertex2f(0.155,-0.50);
glVertex2f(0.16,-0.51);
glVertex2f(0.12,-0.51);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (16,249,255);
    }
    else if(after_noon==true)
    {
        glColor3ub (178,229,240);
    }
   else
    {
         glColor3ub (178,229,240);

    }



glVertex2f(0.08,-0.47);
glVertex2f(0.08,-0.51);
glVertex2f(0.04,-0.51);
glVertex2f(0.04,-0.47);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (16,249,255);
    }
    else if(after_noon==true)
    {
        glColor3ub (178,229,240);
    }
   else
    {
         glColor3ub (178,229,240);

    }



glVertex2f(-0.01,-0.47);
glVertex2f(-0.01,-0.51);
glVertex2f(0.03,-0.51);
glVertex2f(0.03,-0.47);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (16,249,255);
    }
    else if(after_noon==true)
    {
        glColor3ub (178,229,240);
    }
   else
    {
         glColor3ub (178,229,240);

    }



glVertex2f(-0.02,-0.47);
glVertex2f(-0.02,-0.51);
glVertex2f(-0.06,-0.51);
glVertex2f(-0.06,-0.47);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (16,249,255);
    }
    else if(after_noon==true)
    {
        glColor3ub (178,229,240);
    }
   else
    {
         glColor3ub (178,229,240);

    }



glVertex2f(-0.07,-0.47);
glVertex2f(-0.07,-0.51);
glVertex2f(-0.11,-0.51);
glVertex2f(-0.11,-0.47);

glEnd();


//train
//2nd body
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (191,180,180);
    }
    else if(after_noon==true)
    {
        glColor3ub (240,238,229);
    }
   else
    {
          glColor3ub (240,238,229);

    }
glVertex2f(-0.18, -0.45);
glVertex2f(-0.45,-0.45);
glVertex2f(-0.45,-0.58);
glVertex2f(-0.18, -0.58);

glEnd();

//train_win2
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (16,249,255);
    }
    else if(after_noon==true)
    {
        glColor3ub (178,229,240);
    }
   else
    {
         glColor3ub (178,229,240);

    }



glVertex2f(-0.22,-0.47);
glVertex2f(-0.22,-0.51);
glVertex2f(-0.26,-0.51);
glVertex2f(-0.26,-0.47);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (16,249,255);
    }
    else if(after_noon==true)
    {
        glColor3ub (178,229,240);
    }
   else
    {
         glColor3ub (178,229,240);

    }



glVertex2f(-0.27,-0.47);
glVertex2f(-0.27,-0.51);
glVertex2f(-0.31,-0.51);
glVertex2f(-0.31,-0.47);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (16,249,255);
    }
    else if(after_noon==true)
    {
        glColor3ub (178,229,240);
    }
   else
    {
         glColor3ub (178,229,240);

    }



glVertex2f(-0.32,-0.47);
glVertex2f(-0.32,-0.51);
glVertex2f(-0.36,-0.51);
glVertex2f(-0.36,-0.47);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (16,249,255);
    }
    else if(after_noon==true)
    {
        glColor3ub (178,229,240);
    }
   else
    {
         glColor3ub (178,229,240);

    }



glVertex2f(-0.37,-0.47);
glVertex2f(-0.37,-0.51);
glVertex2f(-0.41,-0.51);
glVertex2f(-0.41,-0.47);

glEnd();



//train
//3rd body
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (191,180,180);
    }
    else if(after_noon==true)
    {
        glColor3ub (240,238,229);
    }
   else
    {
          glColor3ub (240,238,229);
    }
glVertex2f(-0.75, -0.45);
glVertex2f(-0.48,-0.45);
glVertex2f(-0.48,-0.58);
glVertex2f(-0.78, -0.58);

glEnd();

glBegin(GL_POLYGON);
glColor3ub (214,38,74);

glVertex2f(-0.75,-0.45);
glVertex2f(-0.785,-0.50);
glVertex2f(-0.79,-0.51);
glVertex2f(-0.795,-0.54);
glVertex2f(-0.78,-0.58);
glEnd();

//back light
glPushMatrix();
	  glColor3ub (245,245,90);
	   glTranslatef (-0.785, -0.535, 0.0);
	   glutSolidSphere(0.007, 50, 50);
	   glEnd();
    glPopMatrix();

    //reflection

//train_win3
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (16,249,255);
    }
    else if(after_noon==true)
    {
        glColor3ub (178,229,240);
    }
   else
    {
         glColor3ub (178,229,240);

    }



glVertex2f(-0.75,-0.45);
glVertex2f(-0.785,-0.50);
glVertex2f(-0.79,-0.51);
glVertex2f(-0.75,-0.51);

glEnd();


glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (16,249,255);
    }
    else if(after_noon==true)
    {
        glColor3ub (178,229,240);
    }
   else
    {
         glColor3ub (178,229,240);

    }



glVertex2f(-0.52,-0.47);
glVertex2f(-0.52,-0.51);
glVertex2f(-0.56,-0.51);
glVertex2f(-0.56,-0.47);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (16,249,255);
    }
    else if(after_noon==true)
    {
        glColor3ub (178,229,240);
    }
   else
    {
         glColor3ub (178,229,240);

    }



glVertex2f(-0.57,-0.47);
glVertex2f(-0.57,-0.51);
glVertex2f(-0.61,-0.51);
glVertex2f(-0.61,-0.47);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (16,249,255);
    }
    else if(after_noon==true)
    {
        glColor3ub (178,229,240);
    }
   else
    {
         glColor3ub (178,229,240);

    }



glVertex2f(-0.62,-0.47);
glVertex2f(-0.62,-0.51);
glVertex2f(-0.66,-0.51);
glVertex2f(-0.66,-0.47);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (16,249,255);
    }
    else if(after_noon==true)
    {
        glColor3ub (178,229,240);
    }
   else
    {
         glColor3ub (178,229,240);

    }


glVertex2f(-0.67,-0.47);
glVertex2f(-0.67,-0.51);
glVertex2f(-0.71,-0.51);
glVertex2f(-0.71,-0.47);

glEnd();

//train_connector
//connector_1

glBegin(GL_POLYGON);
glColor3ub (44,48,49);

glVertex2f(-0.18, -0.45);
glVertex2f(-0.17,-0.44);
glVertex2f(-0.17,-0.58);
glVertex2f(-0.18, -0.58);

glEnd();

glBegin(GL_POLYGON);
glColor3ub (44,48,49);

glVertex2f(-0.17, -0.44);
glVertex2f(-0.165,-0.45);
glVertex2f(-0.165,-0.58);
glVertex2f(-0.17, -0.58);

glEnd();

glBegin(GL_POLYGON);
glColor3ub (44,48,49);


glVertex2f(-0.165,-0.45);
glVertex2f(-0.16, -0.44);
glVertex2f(-0.16, -0.58);
glVertex2f(-0.165,-0.58);


glEnd();

glBegin(GL_POLYGON);
glColor3ub (44,48,49);



glVertex2f(-0.16, -0.44);
glVertex2f(-0.15,-0.45);
glVertex2f(-0.15,-0.58);
glVertex2f(-0.16, -0.58);



glEnd();

//connector_2

glBegin(GL_POLYGON);
glColor3ub (44,48,49);

glVertex2f(-0.48, -0.45);
glVertex2f(-0.47,-0.44);
glVertex2f(-0.47,-0.58);
glVertex2f(-0.48, -0.58);

glEnd();

glBegin(GL_POLYGON);
glColor3ub (44,48,49);

glVertex2f(-0.47, -0.44);
glVertex2f(-0.465,-0.45);
glVertex2f(-0.465,-0.58);
glVertex2f(-0.47, -0.58);

glEnd();

glBegin(GL_POLYGON);
glColor3ub (44,48,49);


glVertex2f(-0.465,-0.45);
glVertex2f(-0.46, -0.44);
glVertex2f(-0.46, -0.58);
glVertex2f(-0.465,-0.58);


glEnd();

glBegin(GL_POLYGON);
glColor3ub (44,48,49);



glVertex2f(-0.46, -0.44);
glVertex2f(-0.45,-0.45);
glVertex2f(-0.45,-0.58);
glVertex2f(-0.46, -0.58);



glEnd();
glPopMatrix();
glPopMatrix();

//road
glPushMatrix();
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (94,94,94);
    }
    else if(after_noon==true)
    {
       glColor3ub (111,107,107);
    }
   else
    {
         glColor3ub (111,107,107);
    }

glVertex2f(-1.00,-0.50);
glVertex2f(0.00,-0.50);

glVertex2f(0.00, -0.58);
glVertex2f(-1.00, -0.58);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (94,94,94);
    }
    else if(after_noon==true)
    {
       glColor3ub (111,107,107);
    }
   else
    {
         glColor3ub (111,107,107);
    }


glVertex2f(0.00,-0.50);
glVertex2f(0.12,-0.55);
glVertex2f(0.12, -0.58);
glVertex2f(0.00, -0.58);


glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (94,94,94);
    }
    else if(after_noon==true)
    {
       glColor3ub (111,107,107);
    }
   else
    {
         glColor3ub (111,107,107);
    }



glVertex2f(0.12,-0.55);
glVertex2f(1.00,-0.55);
glVertex2f(1.00, -0.58);
glVertex2f(0.12, -0.58);



glEnd();
glPopMatrix();


   //bank of the river
   glPushMatrix();
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (94,94,94);
    }
    else if(after_noon==true)
    {
      glColor3ub (127,127,127);
    }
   else
    {
        glColor3ub (127,127,127);
    }

glVertex2f(-1.00, -0.58);
glVertex2f(1.00, -0.58);
glVertex2f(1.00, -0.65);
glVertex2f(-1.00,-0.65);

glEnd();
  glPushMatrix();
   //bank river finishing

   glColor3ub (193,193,193);

    for(float i=-1;i<1;i+=0.06){

        glBegin(GL_POLYGON);
        glVertex2f(i, -0.58f);
        glVertex2f(i+0.06, -0.58f);
        glVertex2f(i+0.08f, -0.62f);
        glVertex2f(i+0.04f,-0.62f);
        glEnd();}

   glPopMatrix();

//bank river stones
glPushMatrix();

	glPushMatrix();
   glTranslatef(-0.99, -0.655, 0.0);
   if(night==true)
    {
        glColor3ub (75, 101, 132);
    }
    else if(after_noon==true)
    {
        glColor3ub (91, 96, 102);
    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();


	glPushMatrix();
   glTranslatef(-0.97, -0.655, 0.0);
   if(night==true)
    {
        glColor3ub (75, 101, 132);
    }
    else if(after_noon==true)
    {
        glColor3ub (91, 96, 102);
    }
   else
    {
          glColor3ub(255,255,255);
    }
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.95, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.93, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.91, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.89, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();

	glPushMatrix();
   glTranslatef(-0.87, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();

	glPushMatrix();
   glTranslatef(-0.85, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();

	glPushMatrix();
   glTranslatef(-0.83, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();

	glPushMatrix();
   glTranslatef(-0.81, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();

	glPushMatrix();
   glTranslatef(-0.79, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.77, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.75, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.73, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.71, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.69, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.67, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.65, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.63, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.61, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.59, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.57, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.55, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.53, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.51, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.49, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.47, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.45, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.43, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.41, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.39, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.37, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.35, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.33, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.31, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.29, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(-0.27, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(-0.25, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(-0.23, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(-0.21, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(-0.19, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(-0.17, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(-0.15, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(-0.13, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(-0.11, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(-0.09, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.07, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.05, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.03, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(-0.01, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();


	//


	glPushMatrix();
   glTranslatef(0.99, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();


	glPushMatrix();
   glTranslatef(0.97, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.95, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.93, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.91, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.89, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();

	glPushMatrix();
   glTranslatef(0.87, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();

	glPushMatrix();
   glTranslatef(0.85, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();

	glPushMatrix();
   glTranslatef(0.83, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();

	glPushMatrix();
   glTranslatef(0.81, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();

	glPushMatrix();
   glTranslatef(0.79, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.77, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.75, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.73, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.71, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.69, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.67, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.65, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.63, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.61, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.59, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.57, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.55, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.53, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.51, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.49, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.47, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.45, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.43, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.41, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.39, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.37, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.35, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.33, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.31, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.29, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(0.27, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(0.25, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(0.23, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(0.21, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(0.19, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(0.17, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(0.15, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(0.13, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(0.11, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
		glPushMatrix();
   glTranslatef(0.09, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.07, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.05, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.03, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();
	glPushMatrix();
   glTranslatef(0.01, -0.655, 0.0);
   glColor3ub(255,255,255);
	glutSolidSphere(0.015, 50, 50);
	glEnd();
	glPopMatrix();

   glPopMatrix();
    //river
  glPushMatrix();
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (5,0,41);
    }
    else if(after_noon==true)
    {
        glColor3ub (78,202,206);
    }
   else
    {
          glColor3ub (157, 231, 202);
    }
glVertex2f(-1.00, -0.66);
glVertex2f(1.00, -0.66);
glVertex2f(1.00, -0.90);
glVertex2f(-1.00, -0.90);

glEnd();



   glPopMatrix();




//bridge
glPushMatrix();
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (56, 53, 53);
    }
    else if(after_noon==true)
    {
        glColor3ub (66,63,63);
    }
   else
    {
          glColor3ub (66,63,63);
    }
glVertex2f(-1.00, -0.35);
glVertex2f(-1.00,-0.25);
glVertex2f(-0.30,-0.50);
glVertex2f(-0.45, -0.50);



glEnd();

glBegin(GL_POLYGON);
glColor3ub (133,132,128);

glVertex2f(-1.00, -0.25);
glVertex2f(-1.00,-0.23);
glVertex2f(-0.40,-0.465);
glVertex2f(-0.40, -0.465);



glEnd();

//piller

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (139,105,0);
    }
    else if(after_noon==true)
    {
        glColor3ub (193,163,36);
    }
   else
    {
          glColor3ub (193,163,36);
    }
glVertex2f(-0.71, -0.38);
glVertex2f(-.70,-0.38);
glVertex2f(-0.70,-0.70);
glVertex2f(-0.71, -0.70);



glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (139,105,0);
    }
    else if(after_noon==true)
    {
        glColor3ub (171, 144, 32);
    }
   else
    {
          glColor3ub (206,178,59);

    }
glVertex2f(-0.79, -0.38);
glVertex2f(-.80,-0.38);
glVertex2f(-0.80,-0.70);
glVertex2f(-0.79, -0.70);



glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (139,105,0);
    }
    else if(after_noon==true)
    {
        glColor3ub (171, 144, 32);
    }
   else
    {
		glColor3ub (206,178,59);
    }
glVertex2f(-0.805, -0.38);
glVertex2f(-.695,-0.38);
glVertex2f(-0.695,-0.45);
glVertex2f(-0.805, -0.45);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (139,105,0);
    }
    else if(after_noon==true)
    {
        glColor3ub (171, 144, 32);
    }
   else
    {
          glColor3ub (206,178,59);

    }
glVertex2f(-0.805, -0.63);
glVertex2f(-.695,-0.63);
glVertex2f(-0.695,-0.70);
glVertex2f(-0.805, -0.70);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (139,105,0);
    }
    else if(after_noon==true)
    {
        glColor3ub (171, 144, 32);
    }
   else
    {
          glColor3ub (206,178,59);

    }
glVertex2f(-0.80, -0.45);
glVertex2f(-0.79, -0.45);
glVertex2f(-0.71,-0.54);
glVertex2f(-0.70,-0.54);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (139,105,0);
    }
    else if(after_noon==true)
    {
        glColor3ub (171, 144, 32);
    }
   else
    {
          glColor3ub (206,178,59);

    }
glVertex2f(-0.80, -0.54);
glVertex2f(-0.79, -0.54);
glVertex2f(-0.71,-0.63);
glVertex2f(-0.70,-0.63);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (139,105,0);
    }
    else if(after_noon==true)
    {
        glColor3ub (171, 144, 32);
    }
   else
    {
          glColor3ub (206,178,59);

    }
glVertex2f(-0.70, -0.45);
glVertex2f(-0.71, -0.45);
glVertex2f(-0.79,-0.54);
glVertex2f(-0.80,-0.54);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (139,105,0);
    }
    else if(after_noon==true)
    {
        glColor3ub (171, 144, 32);
    }
   else
    {
          glColor3ub (206,178,59);

    }
glVertex2f(-0.70, -0.54);
glVertex2f(-0.71, -0.54);
glVertex2f(-0.79,-0.63);
glVertex2f(-0.80,-0.63);

glEnd();

//bridge rope right
	glPushMatrix();
glBegin(GL_LINES);
if(night==true)
    {
        glColor3ub (250, 130, 49);
    }
    else if(after_noon==true)
    {
        glColor3ub (255, 255, 255);
    }
   else
    {
          glColor3ub (255, 255, 255);

    }
    glVertex2f(-0.46,-0.44);
glVertex2f(-0.71, 0.32);

glVertex2f(-0.48,-0.44);
glVertex2f(-0.79, 0.31);
glEnd();
glPopMatrix();



//piller_upper
//1st
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (250, 255, 130);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,120);
    }
   else
    {
          glColor3ub (255,255,120);
    }
glVertex2f(-0.70, -0.35);
glVertex2f(-0.72, -0.35);
glVertex2f(-0.72,0.31);
glVertex2f(-0.70,0.31);

glEnd();

//2nd
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (250, 255, 130);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,120);
    }
   else
    {
          glColor3ub (255,255,120);
    }
glVertex2f(-0.80, -0.32);
glVertex2f(-0.78, -0.32);
glVertex2f(-0.78,0.30);
glVertex2f(-0.80,0.30);

glEnd();

//1st

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (250, 255, 130);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,120);
    }
   else
    {
          glColor3ub (255,255,120);
    }
glVertex2f(-0.80, -0.12);
glVertex2f(-0.70, -0.12);
glVertex2f(-0.70,-0.155);
glVertex2f(-0.80,-0.155);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (250, 255, 130);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,120);
    }
   else
    {
          glColor3ub (255,255,120);
    }
glVertex2f(-0.78, -0.15);
glVertex2f(-0.74, -0.15);
glVertex2f(-0.76,-0.17);
glVertex2f(-0.78,-0.20);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (250, 255, 130);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,120);
    }
   else
    {
          glColor3ub (255,255,120);
    }

glVertex2f(-0.72, -0.15);
glVertex2f(-0.74, -0.15);
glVertex2f(-0.725,-0.17);
glVertex2f(-0.72,-0.18);

glEnd();

//2nd

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (250, 255, 130);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,120);
    }
   else
    {
          glColor3ub (255,255,120);
    }
glVertex2f(-0.80, 0.08);
glVertex2f(-0.70, 0.08);
glVertex2f(-0.70,.045);
glVertex2f(-0.80,0.045);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (250, 255, 130);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,120);
    }
   else
    {
          glColor3ub (255,255,120);
    }

glVertex2f(-0.78, 0.05);
glVertex2f(-0.74, 0.05);
glVertex2f(-0.76,0.03);
glVertex2f(-0.78,0.00);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (250, 255, 130);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,120);
    }
   else
    {
          glColor3ub (255,255,120);
    }
glVertex2f(-0.72, 0.05);
glVertex2f(-0.74, 0.05);
glVertex2f(-0.725,0.03);
glVertex2f(-0.72,0.02);

glEnd();

//3rd

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (250, 255, 130);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,120);
    }
   else
    {
          glColor3ub (255,255,120);
    }
glVertex2f(-0.80, 0.28);
glVertex2f(-0.70, 0.28);
glVertex2f(-0.70,.245);
glVertex2f(-0.80,0.245);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (250, 255, 130);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,120);
    }
   else
    {
          glColor3ub (255,255,120);
    }
glVertex2f(-0.78, 0.25);
glVertex2f(-0.74, 0.25);
glVertex2f(-0.76,0.23);
glVertex2f(-0.78,0.20);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (250, 255, 130);
    }
    else if(after_noon==true)
    {
        glColor3ub (255,255,120);
    }
   else
    {
          glColor3ub (255,255,120);
    }
glVertex2f(-0.72, 0.25);
glVertex2f(-0.74, 0.25);
glVertex2f(-0.725,0.23);
glVertex2f(-0.72,0.22);

glEnd();

//light_bridge
//1st
glBegin(GL_POLYGON);
glColor3ub (255,255,120);

glVertex2f(-0.708, 0.31);
glVertex2f(-0.712, 0.31);
glVertex2f(-0.712,0.32);
glVertex2f(-0.708,0.32);

glEnd();
//red Circle1
  glPushMatrix();
	   glColor3ub(255,0,0);
	   glTranslatef (-0.71, 0.325, 0.0);
	   glutSolidSphere(0.007, 50, 50);
	   glEnd();
    glPopMatrix();

//2nd
glBegin(GL_POLYGON);
glColor3ub (255,255,120);

glVertex2f(-0.788, 0.30);
glVertex2f(-0.792, 0.30);
glVertex2f(-0.792,0.31);
glVertex2f(-0.788,0.31);

glEnd();

//red Circle2
glPushMatrix();
	   glColor3ub(255,0,0);
	   glTranslatef (-0.79, 0.315, 0.0);
	   glutSolidSphere(0.007, 50, 50);
	   glEnd();
    glPopMatrix();
glPopMatrix();

//bridge rope left
	glPushMatrix();
glBegin(GL_LINES);
if(night==true)
    {
        glColor3ub (250, 130, 49);
    }
    else if(after_noon==true)
    {
        glColor3ub (255, 255, 255);
    }
   else
    {
          glColor3ub (255, 255, 255);
    }
    glVertex2f(-0.95,-0.26);
glVertex2f(-0.71, 0.32);

glVertex2f(-0.98, -0.25);
glVertex2f(-0.79, 0.31);
glEnd();
//bridge up liner
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (209, 216, 224);
    }
    else if(after_noon==true)
    {
        glColor3ub (133,132,128);
    }
   else
    {
          glColor3ub (133,132,128);
    }
glVertex2f(-1.00, -0.25);
glVertex2f(-1.00,-0.23);
glVertex2f(-0.40,-0.465);
glVertex2f(-0.40, -0.465);



glEnd();

glPopMatrix();

//shadow of bridge

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (5,0,41);
    }
    else if(after_noon==true)
    {
        glColor3ub (73, 113, 166);
    }
   else
    {
         glColor3ub (83,186,168);
    }
glVertex2f(-0.805, -0.70);
glVertex2f(-.695,-0.70);
glVertex2f(-1.0, -0.90);
glVertex2f(-1.0,-0.80);


glEnd();


//boat
glPushMatrix();
glTranslatef(boat_position,0.0f,0.0f);
glPushMatrix();
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (204, 142, 53);
    }
    else if(after_noon==true)
    {
        glColor3ub (232,234,1);
    }
   else
    {
          glColor3ub (255,245,7);
    }
glVertex2f(0.0, -0.76);
glVertex2f(0.26, -0.70);
glVertex2f(0.25,-0.74);
glVertex2f(0.23,-0.76);
glVertex2f(0.17,-0.80);
glVertex2f(-0.01,-0.80);

glEnd();

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (209, 204, 192);
    }
    else if(after_noon==true)
    {
        glColor3ub (224, 186, 108);
    }
   else
    {
          glColor3ub (255,210,120);
    }
glVertex2f(0.04, -0.752);
glVertex2f(0.06, -0.68);
glVertex2f(0.16,-0.686);
glVertex2f(0.18,-0.70);
glVertex2f(0.20,-0.72);

glEnd();

glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glVertex2f(0.12,-0.68);
glVertex2f(0.18,-0.686);
glVertex2f(0.20,-0.718);
glVertex2f(0.12,-0.738);
glEnd();
//boad grill
//1st
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (114, 176, 129);
    }
    else if(after_noon==true)
    {
        glColor3ub (110, 109, 109);
    }
   else
    {
          glColor3ub (127,127,127);
    }
glVertex2f(0.03, -0.755);
glVertex2f(0.035, -0.755);
glVertex2f(0.035, -0.73);
glVertex2f(0.03, -0.73);

glEnd();

//2nd

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (114, 176, 129);
    }
    else if(after_noon==true)
    {
        glColor3ub (110, 109, 109);
    }
   else
    {
          glColor3ub (127,127,127);
    }
glVertex2f(0.08, -0.745);
glVertex2f(0.085, -0.745);
glVertex2f(0.085, -0.72);
glVertex2f(0.08, -0.72);

glEnd();

//3rd

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (114, 176, 129);
    }
    else if(after_noon==true)
    {
        glColor3ub (110, 109, 109);
    }
   else
    {
          glColor3ub (127,127,127);
    }
glVertex2f(0.13, -0.735);
glVertex2f(0.135, -0.735);
glVertex2f(0.135, -0.71);
glVertex2f(0.13, -0.71);

glEnd();

//4th

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (114, 176, 129);
    }
    else if(after_noon==true)
    {
        glColor3ub (110, 109, 109);
    }
   else
    {
          glColor3ub (127,127,127);
    }
glVertex2f(0.18, -0.725);
glVertex2f(0.185, -0.725);
glVertex2f(0.185, -0.70);
glVertex2f(0.18, -0.70);

glEnd();

//5th

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (114, 176, 129);
    }
    else if(after_noon==true)
    {
        glColor3ub (110, 109, 109);
    }
   else
    {
          glColor3ub (127,127,127);
    }
glVertex2f(0.23, -0.715);
glVertex2f(0.235, -0.715);
glVertex2f(0.235, -0.69);
glVertex2f(0.23, -0.69);

glEnd();

//6th

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (114, 176, 129);
    }
    else if(after_noon==true)
    {
        glColor3ub (110, 109, 109);
    }
   else
    {
          glColor3ub (127,127,127);
    }
glVertex2f(0.254, -0.707);
glVertex2f(0.257, -0.707);
glVertex2f(0.257, -0.68);
glVertex2f(0.254, -0.68);

glEnd();

//horizontal grill

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (114, 176, 129);
    }
    else if(after_noon==true)
    {
        glColor3ub (110, 109, 109);
    }
   else
    {
          glColor3ub (127,127,127);
    }
glVertex2f(0.02, -0.73);
glVertex2f(0.26, -0.685);
glVertex2f(0.26, -0.68);
glVertex2f(0.02, -0.735);

glEnd();
//fornt light
if(night==true && boat_frd==true){
glPushMatrix();
//front light
glPushMatrix();
	  glColor3ub (245,245,90);
	   glTranslatef (0.075, -0.673, 0.0);
	   glutSolidSphere(0.007, 50, 50);
	   glEnd();
    glPopMatrix();
//front light body

glBegin(GL_POLYGON);

glColor3ub (127,127,127);

glVertex2f(0.06, -0.677);
glVertex2f(0.075, -0.665);
glVertex2f(0.075, -0.68);
glVertex2f(0.06, -0.677);

glEnd();

//front light_reflection
/*glBegin(GL_POLYGON);
glColor4ub (226,253,7,30);

glVertex2f(0.075, -0.665);
glVertex2f(0.23, -0.63);
glVertex2f(0.23, -0.68);
glVertex2f(0.075, -0.68);*/


glEnd();
glPopMatrix();
 }






glPopMatrix();

//shadow of boat
glPushMatrix();
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (5,0,41);
    }
    else if(after_noon==true)
    {
        glColor3ub (73, 113, 166);
    }
   else
    {
         glColor3ub (83,186,168);
    }

glVertex2f(-0.01,-0.80);
glVertex2f(0.17,-0.80);
glVertex2f(0.26, -0.80);
glVertex2f(0.23,-0.84);
glVertex2f(0.0, -0.84);





glEnd();
glPopMatrix();
glPopMatrix();
glPopMatrix();




//tree1
glPushMatrix();

//wood
glBegin(GL_LINES);
if(night==true)
    {
        glColor3ub (87, 96, 111);
    }
    else if(after_noon==true)
    {
        glColor3ub (255, 255, 255);
    }
   else
    {
         glColor3ub (255, 255, 255);
    }
    glVertex2f(0.98,-1.0);
glVertex2f(0.87,-0.60);


glVertex2f(0.978,-1.0);
glVertex2f(0.87,-0.60);

glVertex2f(0.976,-1.0);
glVertex2f(0.87,-0.60);

glVertex2f(0.974,-1.0);
glVertex2f(0.87,-0.60);

glVertex2f(0.972,-1.0);
glVertex2f(0.87,-0.60);

glVertex2f(0.97,-1.0);
glVertex2f(0.87,-0.60);
glEnd();
glPopMatrix();

//leaves1

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (23, 70, 21);
    }
    else if(after_noon==true)
    {
        glColor3ub (3, 143, 21);
    }
   else
    {
          glColor3ub (60,255,60);
    }
glVertex2f(0.90,-0.60);
glVertex2f(0.80, -0.80);
glVertex2f(0.85, -0.60);
glVertex2f(0.90, -0.80);
glVertex2f(0.90,-0.60);

glEnd();

//leaves2

glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (23, 70, 21);
    }
    else if(after_noon==true)
    {
        glColor3ub (3, 143, 21);
    }
   else
    {
          glColor3ub (60,255,60);
    }
glVertex2f(0.90,-0.60);
glVertex2f(0.80, -0.450);
glVertex2f(0.85, -0.60);
glVertex2f(0.90, -0.40);
glVertex2f(0.90,-0.60);

glEnd();
//leaves3
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (23, 70, 21);
    }
    else if(after_noon==true)
    {
        glColor3ub (3, 143, 21);
    }
   else
    {
          glColor3ub (60,255,60);
    }
glVertex2f(0.87,-0.60);
glVertex2f(0.95, -0.50);
glVertex2f(0.92, -0.60);
glVertex2f(0.95, -0.75);
glVertex2f(0.87,-0.60);


glEnd();
glPopMatrix();
//lower road

glPushMatrix();
//road
glBegin(GL_POLYGON);
if(night==true)
    {
        glColor3ub (47, 53, 66);
    }
    else if(after_noon==true)
    {
        glColor3ub (94, 92, 92);
    }
   else
    {
         glColor3ub (127,127,127);
    }
glVertex2f(-1.00, -0.90);
glVertex2f(1.00, -0.90);
glVertex2f(1.00, -1.00);
glVertex2f(-1.00, -1.00);

glEnd();

//grill road
glBegin(GL_POLYGON);
glColor3ub (193,193,193);

glVertex2f(-1.00, -0.81);
glVertex2f(1.00, -0.81);
glVertex2f(1.00, -0.82);
glVertex2f(-1.00, -0.82);

glEnd();

//grill1

glColor3ub (193,193,193);

    for(float i=-1;i<1;i+=0.06){

        glBegin(GL_POLYGON);
        glVertex2f(i, -0.82f);
        glVertex2f(i, -0.90f);
        glVertex2f(i+0.01f, -0.90f);
        glVertex2f(i+0.01f,-0.82f);
        glEnd();}

   glPopMatrix();

//lamp post1
glPushMatrix();
//stand part 1
glBegin(GL_POLYGON);
glColor3ub (255,255,0);

glVertex2f(-0.44, -0.92);
glVertex2f(-0.41, -0.92);
glVertex2f(-0.41, -0.91);
glVertex2f(-0.44, -0.91);

glEnd();

//stand part 2
glBegin(GL_POLYGON);
glColor3ub (104,108,109);

glVertex2f(-0.435, -0.91);
glVertex2f(-0.415, -0.91);
glVertex2f(-0.415, -0.90);
glVertex2f(-0.435, -0.90);

glEnd();

//stand part 3
glBegin(GL_POLYGON);
glColor3ub (104,108,109);

glVertex2f(-0.432, -0.90);
glVertex2f(-0.417, -0.90);
glVertex2f(-0.422, -0.88);
glVertex2f(-0.428, -0.88);

glEnd();


//stand part 4
glBegin(GL_POLYGON);
glColor3ub (104,108,109);

glVertex2f(-0.428, -0.88);
glVertex2f(-0.422, -0.88);
glVertex2f(-0.422, -0.68);
glVertex2f(-0.428, -0.68);

glEnd();


//stand part 5
glBegin(GL_POLYGON);
glColor3ub (255,255,0);

glVertex2f(-0.46, -0.70);
glVertex2f(-0.39, -0.70);
glVertex2f(-0.39, -0.695);
glVertex2f(-0.46, -0.695);

glEnd();

//stand part 6
glBegin(GL_POLYGON);
glColor3ub (104,108,109);

glVertex2f(-0.395, -0.715);
glVertex2f(-0.40, -0.715);
glVertex2f(-0.40, -0.68);
glVertex2f(-0.395, -0.68);

glEnd();

//stand part 7
glBegin(GL_POLYGON);
glColor3ub (104,108,109);

glVertex2f(-0.455, -0.715);
glVertex2f(-0.45, -0.715);
glVertex2f(-0.45, -0.68);
glVertex2f(-0.455, -0.68);

glEnd();






//light1


glPushMatrix();
	   if(night==true)
    {
        glColor3ub (255, 255, 255);
    }
    else if(after_noon==true)
    {
        glColor3ub (253,255,0);
    }
   else
    {
         glColor3ub (245,245,90);
    }
	   glTranslatef (-0.4525, -0.67, 0.0);
	   glutSolidSphere(0.012, 50, 50);
	   glEnd();
    glPopMatrix();

    if(night==true){
glPushMatrix();

// light_reflection
/*glBegin(GL_POLYGON);
glColor4ub (255,255,255,30);

glVertex2f(-0.45, -0.69);
glVertex2f(-0.46, -0.69);
glVertex2f(-0.50, -0.90);
glVertex2f(-0.44, -0.90);*/
glEnd();
glPopMatrix();
}

    //light2


glPushMatrix();
    glPushMatrix();
	  if(night==true)
    {
        glColor3ub (255, 255, 255);
    }
    else if(after_noon==true)
    {
        glColor3ub (253,255,0);
    }
   else
    {
         glColor3ub (245,245,90);
    }
	   glTranslatef (-0.3975, -0.67, 0.0);
	   glutSolidSphere(0.012, 50, 50);
	   glEnd();
    glPopMatrix();

   if(night==true ){


glPushMatrix();
// light_reflection
/*glBegin(GL_POLYGON);
glColor4ub (255,255,255,30);

glVertex2f(-0.39, -0.69);
glVertex2f(-0.40, -0.69);
glVertex2f(-0.41, -0.90);
glVertex2f(-0.35, -0.90);*/
glEnd();
glPopMatrix();
}


glPopMatrix();

//lamp post2
glPushMatrix();
//stand part 1
glBegin(GL_POLYGON);
glColor3ub (255,255,0);

glVertex2f(0.44, -0.92);
glVertex2f(0.41, -0.92);
glVertex2f(0.41, -0.91);
glVertex2f(0.44, -0.91);

glEnd();

//stand part 2
glBegin(GL_POLYGON);
glColor3ub (104,108,109);

glVertex2f(0.435, -0.91);
glVertex2f(0.415, -0.91);
glVertex2f(0.415, -0.90);
glVertex2f(0.435, -0.90);

glEnd();

//stand part 3
glBegin(GL_POLYGON);
glColor3ub (104,108,109);

glVertex2f(0.432, -0.90);
glVertex2f(0.417, -0.90);
glVertex2f(0.422, -0.88);
glVertex2f(0.428, -0.88);

glEnd();


//stand part 4
glBegin(GL_POLYGON);
glColor3ub (104,108,109);

glVertex2f(0.428, -0.88);
glVertex2f(0.422, -0.88);
glVertex2f(0.422, -0.68);
glVertex2f(0.428, -0.68);

glEnd();

//stand part 5
glBegin(GL_POLYGON);
glColor3ub (255,255,0);

glVertex2f(0.46, -0.70);
glVertex2f(0.39, -0.70);
glVertex2f(0.39, -0.695);
glVertex2f(0.46, -0.695);

glEnd();

//stand part 6
glBegin(GL_POLYGON);
glColor3ub (104,108,109);

glVertex2f(0.395, -0.715);
glVertex2f(0.40, -0.715);
glVertex2f(0.40, -0.68);
glVertex2f(0.395, -0.68);

glEnd();

//stand part 7
glBegin(GL_POLYGON);
glColor3ub (104,108,109);

glVertex2f(0.455, -0.715);
glVertex2f(0.45, -0.715);
glVertex2f(0.45, -0.68);
glVertex2f(0.455, -0.68);

glEnd();



//light1

glPushMatrix();
  glPushMatrix();
	   if(night==true)
    {
        glColor3ub (255, 255, 255);
    }
    else if(after_noon==true)
    {
        glColor3ub (253,255,0);
    }
   else
    {
         glColor3ub (245,245,90);
    }
	   glTranslatef (0.4525, -0.67, 0.0);
	   glutSolidSphere(0.012, 50, 50);
	   glEnd();
    glPopMatrix();

  if(night==true ){


glPushMatrix();

// light_reflection
/*glBegin(GL_POLYGON);
glColor4ub (255,255,255,30);

glVertex2f(0.45, -0.69);
glVertex2f(0.46, -0.69);
glVertex2f(0.50, -0.90);
glVertex2f(0.44, -0.90);*/

glEnd();
glPopMatrix();
}


 //light2



glPushMatrix();
	  if(night==true)
    {
        glColor3ub (255, 255, 255);
    }
    else if(after_noon==true)
    {
        glColor3ub (253,255,0);
    }
   else
    {
         glColor3ub (245,245,90);
    }
	   glTranslatef (0.3975, -0.67, 0.0);
	   glutSolidSphere(0.012, 50, 50);
	   glEnd();
    glPopMatrix();



glPopMatrix();
   if(night==true ){
//light_reflection
/*glBegin(GL_POLYGON);
glColor4ub (255,255,255,30);

glVertex2f(0.39, -0.69);
glVertex2f(0.40, -0.69);
glVertex2f(0.41, -0.90);
glVertex2f(0.35, -0.90);*/
glEnd();
glPopMatrix();
}


//citizen1
glPushMatrix();

glTranslatef(citizen1_position ,0.0f,0.0f);
glPushMatrix();
	  glColor3ub (245,245,90);
	   glTranslatef (-0.60, -0.78, 0.0);
	   glutSolidSphere(0.012, 50, 50);
	   glEnd();
    glPopMatrix();

//hair
glBegin(GL_POLYGON);
glColor3ub (0,0,0);

glVertex2f(-0.60, -0.792);
glVertex2f(-0.60, -0.768);
glVertex2f(-0.59, -0.77);
glVertex2f(-0.585, -0.78);
glVertex2f(-0.59, -0.79);

glEnd();

//body
glBegin(GL_POLYGON);
glColor3ub (255,0,0);

glVertex2f(-0.615, -0.792);
glVertex2f(-0.58, -0.792);
glVertex2f(-0.58, -0.85);
glVertex2f(-0.615, -0.85);

glEnd();

//body
glBegin(GL_POLYGON);
glColor3ub (240,240,255);

glVertex2f(-0.605, -0.85);
glVertex2f(-0.585, -0.85);
glVertex2f(-0.59, -0.92);
glVertex2f(-0.60, -0.92);

glEnd();



glPopMatrix();
glPopMatrix();

   //citizen2
glPushMatrix();
glTranslatef(citizen2_position ,0.0f,0.0f);
glPushMatrix();
	  glColor3ub (245,245,90);
	   glTranslatef (0.60, -0.78, 0.0);
	   glutSolidSphere(0.012, 50, 50);
	   glEnd();
    glPopMatrix();

//hair
glBegin(GL_POLYGON);
glColor3ub (0,0,0);

glVertex2f(0.60, -0.792);
glVertex2f(0.60, -0.768);
glVertex2f(0.59, -0.77);
glVertex2f(0.585, -0.78);
glVertex2f(0.59, -0.79);

glEnd();

//body
glBegin(GL_POLYGON);
glColor3ub (255,0,0);

glVertex2f(0.615, -0.792);
glVertex2f(0.58, -0.792);
glVertex2f(0.58, -0.85);
glVertex2f(0.615, -0.85);

glEnd();

//body
glBegin(GL_POLYGON);
glColor3ub (240,240,255);

glVertex2f(0.605, -0.85);
glVertex2f(0.585, -0.85);
glVertex2f(0.59, -0.92);
glVertex2f(0.60, -0.92);

glEnd();

glPopMatrix();



glPopMatrix();



//bicyclewith citizen;
//light1
glPushMatrix();
glTranslatef(cycle_position ,0.0f,0.0f);
glPushMatrix();

//1st wheel
glPushMatrix();
	   glColor3ub (0,0,0);
	   glTranslatef (0.90, -0.93, 0.0);
	   glutSolidSphere(0.025, 50, 50);
	   glEnd();
    glPopMatrix();

    glPushMatrix();
	   glColor3ub (255,255,255);
	   glTranslatef (0.90, -0.93, 0.0);
	   glutSolidSphere(0.02, 50, 50);
	   glEnd();
    glPopMatrix();
    glPushMatrix();
	   glColor3ub (193,193,193);
	   glTranslatef (0.90, -0.93, 0.0);
	   glutSolidSphere(0.01, 50, 50);
	   glEnd();
	   glPopMatrix();

	   //2nd wheel
    glPushMatrix();
	   glColor3ub (0,0,0);
	   glTranslatef (0.82, -0.93, 0.0);
	   glutSolidSphere(0.025, 50, 50);
	   glEnd();
    glPopMatrix();

    glPushMatrix();
	   glColor3ub (255,255,255);
	   glTranslatef (0.82, -0.93, 0.0);
	   glutSolidSphere(0.02, 50, 50);
	   glEnd();
    glPopMatrix();

     glPushMatrix();
	   glColor3ub (193,193,193);
	   glTranslatef (0.82, -0.93, 0.0);
	   glutSolidSphere(0.01, 50, 50);
	   glEnd();
	   glPopMatrix();

	   //cycle body
	    glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub (0,0,255);

glVertex2f(0.82, -0.93);
glVertex2f(0.82, -0.925);
glVertex2f(0.86, -0.925);
glVertex2f(0.86, -0.93);

glEnd();
glPopMatrix();
  //cycle body circle
     glPushMatrix();
	   glColor3ub (193,193,193);
	   glTranslatef (0.86, -0.927, 0.0);
	   glutSolidSphere(0.009, 50, 50);
	   glEnd();
	   glPopMatrix();

	   	   //cycle body2
	    glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub (0,0,255);

glVertex2f(0.86, -0.925);
glVertex2f(0.855, -0.925);
glVertex2f(0.83, -0.88);
glVertex2f(0.835, -0.88);
glEnd();
   glPopMatrix();

    //cycle body3
	    glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub (0,0,255);

glVertex2f(0.825, -0.925);
glVertex2f(0.82, -0.925);
glVertex2f(0.838, -0.89);
glVertex2f(0.842, -0.89);
glEnd();
  glPopMatrix();

    //cycle body4
	    glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub (0,0,255);
glVertex2f(0.842, -0.895);
glVertex2f(0.842, -0.89);
glVertex2f(0.887, -0.89);
glVertex2f(0.882, -0.895);
glEnd();
   glPopMatrix();

     //cycle body5
	    glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub (0,0,255);
glVertex2f(0.86, -0.925);
glVertex2f(0.855, -0.925);
glVertex2f(0.88, -0.89);
glVertex2f(0.885, -0.895);
glEnd();
   glPopMatrix();

   	   	   //cycle body6
	    glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub (0,0,255);

glVertex2f(0.90, -0.925);
glVertex2f(0.895, -0.925);
glVertex2f(0.87, -0.86);
glVertex2f(0.875, -0.86);


glEnd();
   glPopMatrix();


   	   	   //cycle body7
	    glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub (255,120,220);

glVertex2f(0.86, -0.86);
glVertex2f(0.86, -0.855);
glVertex2f(0.89, -0.855);
glVertex2f(0.89, -0.86);


glEnd();
   glPopMatrix();

     	   //cityzen 3
	    glPushMatrix();
	    //body1
glBegin(GL_POLYGON);
glColor3ub (255,0,0);

glVertex2f(0.845, -0.88);
glVertex2f(0.825, -0.88);
glVertex2f(0.825, -0.845);
glVertex2f(0.83, -0.84);
glVertex2f(0.85, -0.84);


glEnd();
glPopMatrix();

     glPushMatrix();
	    //body2
glBegin(GL_POLYGON);
glColor3ub (127,127,127);

glVertex2f(0.845, -0.88);
glVertex2f(0.825, -0.88);
glVertex2f(0.855, -0.925);
glVertex2f(0.865, -0.925);
glEnd();
   glPopMatrix();

       glPushMatrix();
    //body1
glBegin(GL_POLYGON);
glColor3ub (255,0,0);
glVertex2f(0.85, -0.84);
glVertex2f(0.84, -0.86);
glVertex2f(0.875, -0.86);
glVertex2f(0.88, -0.85);


glEnd();
   glPopMatrix();

    //head
     glPushMatrix();
	   glColor3ub (0,0,0);
	   glTranslatef (0.845, -0.835, 0.0);
	   glutSolidSphere(0.009, 50, 50);
	   glEnd();
	   glPopMatrix();

 glPopMatrix();

  glPopMatrix();

   //car3
 glPushMatrix();
 glTranslatef(car3_position ,0.0f,0.0f);
 glPushMatrix();
 //body
glBegin(GL_POLYGON);
glColor3ub (255,0,0);
glVertex2f(-0.87, -0.98);
glVertex2f(-0.85, -0.92);
glVertex2f(-0.81, -0.88);
glVertex2f(-0.72, -0.88);
glVertex2f(-0.65, -0.95);
glVertex2f(-0.64, -0.98);


glEnd();

   //front light
   if(night == true && car3_frd == true){
    glPushMatrix();
	   glColor3ub (255,255,255);
	   glTranslatef (-0.66, -0.96, 0.0);
	   glutSolidSphere(0.007, 50, 50);
	   glEnd();
    glPopMatrix();

//front light_reflection
/*glBegin(GL_POLYGON);

glColor4ub (231,244,13,30);
glVertex2f(-0.665, -0.95);
glVertex2f(-0.60, -0.94);
glVertex2f(-0.57, -0.98);
glVertex2f(-0.645, -0.965);*/
glEnd();}


//back light
glBegin(GL_POLYGON);
glColor3ub (255,255,255);



glVertex2f(-0.857, -0.97);
glVertex2f(-0.85, -0.97);
glVertex2f(-0.85, -0.963);
glVertex2f(-0.857, -0.963);

glEnd();

//back light_reflection
glBegin(GL_POLYGON);
glColor4ub (231,244,13,30);


glEnd();




 //glass
glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glVertex2f(-0.83, -0.92);
glVertex2f(-0.81, -0.885);
glVertex2f(-0.72, -0.885);
glVertex2f(-0.69, -0.92);


glEnd();

//body2
glBegin(GL_POLYGON);
glColor3ub (255,0,0);
glVertex2f(-0.77, -0.92);
glVertex2f(-0.76, -0.92);
glVertex2f(-0.76, -0.88);
glVertex2f(-0.77, -0.88);
glEnd();

   //1st wheel
    glPushMatrix();
	   glColor3ub (0,0,0);
	   glTranslatef (-0.82, -0.98, 0.0);
	   glutSolidSphere(0.025, 50, 50);
	   glEnd();
    glPopMatrix();



     glPushMatrix();
	   glColor3ub (193,193,193);
	   glTranslatef (-0.82, -0.98, 0.0);
	   glutSolidSphere(0.01, 50, 50);
	   glEnd();
	   glPopMatrix();


	   //2nd wheel
    glPushMatrix();
	   glColor3ub (0,0,0);
	   glTranslatef (-0.69, -0.98, 0.0);
	   glutSolidSphere(0.025, 50, 50);
	   glEnd();
    glPopMatrix();



     glPushMatrix();
	   glColor3ub (193,193,193);
	   glTranslatef (-0.69, -0.98, 0.0);
	   glutSolidSphere(0.01, 50, 50);
	   glEnd();
	   glPopMatrix();
    glPopMatrix();

  glPopMatrix();
	glutSwapBuffers();
}
void boatForward(int value){
    if(boat_frd==true){
    if(boat_position > 1.2f)
        boat_position =-1.2f;

    boat_position+=.01;
	glutPostRedisplay();

	glutTimerFunc(25, boatForward, 0);
    }

}
void trainForward(int value){
    if(train_frd==true){
    train_position+=.01;
    if(train_position > 1.8f)
        train_position =-1.2f;

	glutPostRedisplay();

	glutTimerFunc(25, trainForward, 0);
    }

}
void car1Forward(int value){
    if(car1_frd==true){
    car1_position-=.01;
    if(car1_position < -1.5f)
        car1_position =1.1f;

	glutPostRedisplay();

	glutTimerFunc(25, car1Forward, 0);
    }

}
void car2Forward(int value){
    if(car2_frd==true){
    car2_position+=.01;
    if(car2_position > 1.1f)
        car2_position =-1.75f;

	glutPostRedisplay();

	glutTimerFunc(25, car2Forward, 0);
    }

}
void car3Forward(int value){
    if(car3_frd==true){
    car3_position+=.01;
    if(car3_position > 1.85f)
        car3_position =-1.0f;

	glutPostRedisplay();

	glutTimerFunc(25, car3Forward, 0);
    }

}
void cycleForward(int value){
    if(cycle_frd==true){
    cycle_position+=.005;
    if(cycle_position > 0.6f)
        cycle_position =-1.9f;

	glutPostRedisplay();

	glutTimerFunc(25, cycleForward, 0);
    }

}
void helicopterForward(int value){
    if(helicopter_frd==true){
    helicopter_position-=.006;
    if(helicopter_position <-0.6f)
        helicopter_position =1.96f;

	glutPostRedisplay();

	glutTimerFunc(25, helicopterForward, 0);
    }

}
void trafficUpdate(int value){
    if(red==true){
    if(car1_position >=-0.75f)
        {
            if((car1_position-(-0.75))<=.05)
                car1_frd=false;
        }
    if(car2_position <=-1.2f)
        {
            if((car2_position-(-1.2))>=-.05)
                car2_frd=false;
        }
    }
    glutPostRedisplay();

	glutTimerFunc(25, trafficUpdate, 0);


}
void update(int value) {

    citizen1_position-=.004;
    if(citizen1_position <-0.7f)
        citizen1_position =1.6f;

    citizen2_position+=.005;
    if(citizen2_position > 0.8f)
        citizen2_position =-1.7f;

    clowd1_position+=.0035;
    if(clowd1_position > 0.9f)
        clowd1_position =-1.4f;
    clowd2_position+=.0025;
    if(clowd2_position > 0.8f)
        clowd2_position =-1.5f;

    clowd3_position+=.003;
    if(clowd3_position > 1.3f)
        clowd3_position =-1.0f;




	glutPostRedisplay();

	glutTimerFunc(25, update, 0);

}
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
            if(car3_frd==false)
                {
                    car3_frd=true;
                    car3Forward(car3_position);
                    sndPlaySound("car3.wav",SND_ASYNC|SND_LOOP);
                }
		}
	}

	if (button == GLUT_RIGHT_BUTTON)
{
if (state == GLUT_DOWN)
{
if(car3_frd==true)
{
car3_frd=false;
sndPlaySound(0,0);
}
}
}

	glutPostRedisplay();
}
void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'b':///boat forward
    if(boat_frd==false)
    {
    boat_frd=true;
    sndPlaySound("boat.wav",SND_ASYNC|SND_LOOP);
    boatForward(boat_position);
    }
    break;
case 'v':///boat stop
    boat_frd=false;
    sndPlaySound(0,0);
    break;
case 't':///train forward
    if(train_frd==false)
    {
    train_frd=true;
    sndPlaySound("train.wav",SND_ASYNC|SND_LOOP);
    trainForward(train_position);
    }
    break;
case 'p':///train stop
    train_frd=false;
    sndPlaySound(0,0);
    break;
case 'n':///Night start
    night=true;
    sndPlaySound("night.wav",SND_ASYNC|SND_LOOP);
    drawScene();
    break;
case 'a':///afternoon start
    after_noon=true;
    night=false;
    sndPlaySound(0,0);
    drawScene();
    break;
case 'd':///Day Start
    night=false;
    after_noon=false;
    sndPlaySound(0,0);
    drawScene();
    break;
case 'c':///car1 forward
    if(car1_frd==false)
    {
    car1_frd=true;
    sndPlaySound("car1.wav",SND_ASYNC|SND_LOOP);
    car1Forward(car1_position);
    }
    break;
case 'l':///car1 stop
    car1_frd=false;
    sndPlaySound(0,0);
    break;
case 'm':///Car2 forward
    if(car2_frd==false)
    {
    car2_frd=true;
    sndPlaySound("car2.wav",SND_ASYNC|SND_LOOP);
    car2Forward(car2_position);

    }
    break;
case 'k':///Car2 stop
    car2_frd=false;
    sndPlaySound(0,0);
    break;
case 'o':///car3 forward
    if(car3_frd==false)
    {
    car3_frd=true;
    car3Forward(car3_position);
    sndPlaySound("car3.wav",SND_ASYNC|SND_LOOP);
    }
    break;
case 'i':/// car3 stop
    car3_frd=false;
    sndPlaySound(0,0);
    break;
case 'q':///Cycle forward
    if(cycle_frd==false)
    {
    cycle_frd=true;
    sndPlaySound("cycle.wav",SND_ASYNC|SND_LOOP);
    cycleForward(cycle_position);

    }
    break;
case 'w':///Cycle stop
    cycle_frd=false;
    sndPlaySound(0,0);
    break;
case 'h'://train forward
    if(helicopter_frd==false)
    {
    helicopter_frd=true;
    sndPlaySound("helicopter.wav",SND_ASYNC|SND_LOOP);
    helicopterForward(helicopter_position);
    }
    break;
case 'y':///helicopter stop
    helicopter_frd=false;
    sndPlaySound(0,0);
    break;
case 'r':///Red Light forward
    if(red==false)
    {
    red=true;
     sndPlaySound(0,0);
    trafficUpdate(car1_position);
    }
    break;
case 'g':///Green stop
    red=false;
    if(car1_frd==false)
    {
    if((car1_position-(-0.75))<=.05){
    car1_frd=true;
    sndPlaySound("car1.wav",SND_ASYNC|SND_LOOP);
    car1Forward(car1_position);

    }
    }

    if(car2_frd==false)
    {
    if((car2_position-(-1.2))<=.05){
    car2_frd=true;
    car2Forward(car2_position);
    sndPlaySound("car1.wav",SND_ASYNC|SND_LOOP);
    }
    }
    break;
	}
}


int main(int argc, char** argv) {
    cout << ".................Smart City...................." << endl;

    cout << "1. Press b for boat forward and press v for stop" << endl;
    cout << "2. Press t for train forward and press p for stop" << endl;
    cout << "3. Press c for car1 forward and press l for stop" << endl;
    cout << "4. Press m for car2 forward and press k for stop" << endl;
    cout << "5. Press o for car3 forward and press i for stop" << endl;
    cout << "6. Press q for cycle forward and press w for stop" << endl;
    cout << "7. Press h for helicopter forward and press y for stop" << endl;
    cout << "8. Press r for red signal and press g for green signal" << endl;
    cout << "9. Press d for day and press n for night and press a for afternoon" << endl;
	glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE| GLUT_RGB );
	glutInitWindowSize(1500,800);
	glutInitWindowPosition(30, 30);
	glutCreateWindow("Modern City");
	glutKeyboardFunc(handleKeypress);
	glutMouseFunc(handleMouse);
	glutDisplayFunc(drawScene);
    glutTimerFunc(25, update, 0);
	//glutTimerFunc(20, update1, 0);
	glutMainLoop();
	return 0;
}
