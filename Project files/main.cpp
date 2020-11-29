/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

static int slices = 30;
static int stacks = 30;
static float moveUD = -20;
static float moveLR = -2.4;
static int rotate0 = 0;
static int radiusOfSun = 20*2;  // scale of the sun
static int radiusOfMoon=0;
static float radiusOfWiresun1 =0.5*2;
static float radiusOfWiresun2 =20.1*2;
static float radiusOfblacksun =0;
static float diff = 0;
static int color1 = 1;
static int color2 = 0;
static int color3 = -4;
static int flag1 = 1;
static int flag3 = -111;
static int count = 0;
static int enGine = 0;
static int rotate1 = 0;
static int sign = 1;
static int sign1 = 1;
static int sign2 = 0;
/* GLUT callback Handlers */

static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}

static void display(void)
{
    const double t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
    const double a = t*90.0;

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100, 100, -100, 100, -100, 100);
     count++;
   if(count%4 == 0){
        count = 0;
        sign1  = 0;
        sign2  = 1;

   }
   else{
      sign1  = 1;
      sign2  = 0;
   }
    glPushMatrix();
    glPushMatrix();     // background
    glColor3d(0, 0.6, 3);
    glPushMatrix();
        glTranslated(0,0,flag3);
        glutSolidCube(100*flag1);
    glPopMatrix();
    glPushMatrix();
        glTranslated(100,0,flag3);
         glutSolidCube(100*flag1);
    glPopMatrix();
     glPushMatrix();
        glTranslated(-100,0,flag3);
         glutSolidCube(100*flag1);
    glPopMatrix();
    glPushMatrix();
        glTranslated(0,-100,flag3);
       glutSolidCube(100*flag1);
    glPopMatrix();
    glPushMatrix();
        glTranslated(0,100,flag3);
        glutSolidCube(100*flag1);
    glPopMatrix();
    glPushMatrix();
        glTranslated(100,100,flag3);
        glutSolidCube(100*flag1);
    glPopMatrix();
    glPushMatrix();
        glTranslated(100,-100,flag3);
        glutSolidCube(100*flag1);
    glPopMatrix();
    glPushMatrix();
        glTranslated(-100,100,flag3);
        glutSolidCube(100*flag1);
    glPopMatrix();
    glPushMatrix();
        glTranslated(-100,-100,flag3);
        glutSolidCube(100*flag1);
    glPopMatrix();
glPopMatrix();


    glPushMatrix();
      glTranslated(0,-75,0);
      glColor3d(0.5f, 0.35f, 0.05f);
      glPushMatrix();
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

      glPushMatrix();
      glTranslated(0,12,-10);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

      glPushMatrix();
      glTranslated(20,0,0);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

      glPushMatrix();
      glTranslated(20,12,-10);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

      glPushMatrix();
      glTranslated(40,0,0);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

      glPushMatrix();
      glTranslated(40,12,-10);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

      glPushMatrix();
      glTranslated(-20,0,0);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

      glPushMatrix();
      glTranslated(-20,12,-10);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();


      glPushMatrix();
      glTranslated(-40,0,0);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

      glPushMatrix();
      glTranslated(-40,12,-10);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();


      glPushMatrix();
      glTranslated(-60,0,0);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

      glPushMatrix();
      glTranslated(-60,12,-10);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

      glPushMatrix();
      glTranslated(60,12,-10);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

      glPushMatrix();
      glTranslated(60,0,0);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

      glPushMatrix();
      glTranslated(80,0,0);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

       glPushMatrix();
      glTranslated(80,12,-10);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

       glPushMatrix();
      glTranslated(80,-14,12);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

       glPushMatrix();
      glTranslated(100,0,0);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

       glPushMatrix();
      glTranslated(100,12,-10);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

       glPushMatrix();
      glTranslated(100,-14,12);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

      glPushMatrix();
      glTranslated(0,-14,12);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

      glPushMatrix();
      glTranslated(20,-14,12);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

       glPushMatrix();
      glTranslated(40,-14,12);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

       glPushMatrix();
      glTranslated(-40,-14,12);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

       glPushMatrix();
      glTranslated(-60,-14,12);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

       glPushMatrix();
      glTranslated(-20,-14,12);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();


      glPushMatrix();
      glTranslated(60,-14,12);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

       glPushMatrix();
      glTranslated(-80,0,0);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

       glPushMatrix();
      glTranslated(-80,12,-10);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

       glPushMatrix();
      glTranslated(-80,-14,12);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

       glPushMatrix();
      glTranslated(-100,0,0);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();

       glPushMatrix();
      glTranslated(-100,12,-10);
      glRotated(140,1,0,0);
      glutSolidCube(20);
      glPopMatrix();

       glPushMatrix();
      glTranslated(-100,-14,12);
      glRotated(140,1,0,0);
      glutSolidCube(20*sign);
      glPopMatrix();


     glPopMatrix();



     glPushMatrix();                           //Air plane
    glRotated(rotate1, 0,1,0);
    glPushMatrix();//1
    //glRotated(90, 1,0,0);
    glTranslated(moveLR+1,moveUD+25,5);
    glRotated(a*100*enGine, 0,1*enGine,0);
    glColor3d(0.5, 0.5, 0.5);
    // glRotated(90, 0,0,1);
    glScaled(3,0.1,0.2);
    glutSolidSphere(15,slices,stacks);
    glPopMatrix();

    glPushMatrix();
    glTranslated(moveLR,moveUD,3);
    glColor3d(1, 1, 1);
    glTranslated(1,1,3);
    glScaled(1.9,1,0.9);
    glutSolidSphere(20,slices,stacks);
    glPopMatrix();

    glPushMatrix();//5
    glColor3d(1, 1, 1);
    glTranslated(moveLR,moveUD,3);
    glTranslated(-31,1.5,3);
    glRotated(-100, 0,1,0);
    glutSolidCone(8,40,slices,stacks);
    glPopMatrix();

    glPushMatrix();
    glTranslated(moveLR,moveUD,3);
    glTranslated(-78,0,-1);
    glRotated(a*100*enGine, 0,0,1*enGine);
    glColor3d(1, 1, 1);
    glRotated(90, 0,0,1);
    glScaled(0.4,0.05,0.1);
    glutSolidSphere(15,slices,stacks);
    glPopMatrix();

    glPushMatrix();
    glColor3d(1, 1, 1);
    glTranslated(moveLR,moveUD,3);
    glTranslated(-78,1,-2.5);
    glutSolidTorus(1,8,slices,stacks);
    glPopMatrix();

    glPushMatrix();
    glColor3d(1, 1, 1);
    glTranslated(moveLR,moveUD,3);
    glTranslated(-78,1,-4);
    glColor3d(0, 0, 1);
    //glRotated(90, 0,1,0);
    glScaled(0.2,0.9,0.05);
    glutSolidSphere(15,slices,stacks);
    glPopMatrix();

    glPushMatrix();
    glTranslated(moveLR,moveUD,3);
    glTranslated(-78,1,-3.7);
    glColor3d(0, 0, 1);
    glRotated(90, 0,0,1);
    glScaled(0.5,0.9,0.05);
    glutSolidSphere(15,slices,stacks);
    glPopMatrix();

    glPushMatrix();
    glTranslated(moveLR,moveUD,3);
    glTranslated(2,20,2);
    glRotated(a*100*enGine, 0,1*enGine,0);
    glColor3d(0.5, 0.5, 0.5);
    glRotated(90, 0,0,1);
    glScaled(0.4,0.05,0.05);
    glutSolidSphere(15,slices,stacks);
    glPopMatrix();

    glPushMatrix();//1
    //glRotated(90, 1,0,0);
    glTranslated(moveLR-1,moveUD-30,20);
    glColor3d(0.5, 0.5, 0.5);
    // glRotated(90, 0,0,1);
    glScaled(2.5,0.1,0.2);
    glutSolidSphere(15,slices,stacks);
    glPopMatrix();

    glPushMatrix();//1
    //glRotated(90, 1,0,0);
    glTranslated(moveLR-1,moveUD-30,-8);
    glColor3d(0.5, 0.5, 0.5);
    // glRotated(90, 0,0,1);
    glScaled(2.5,0.1,0.2);
    glutSolidSphere(15,slices,stacks);
    glPopMatrix();

    glPushMatrix();//1
    //glRotated(90, 1,0,0);
    glTranslated(moveLR,moveUD-30,6);
    glColor3d(0.5, 0.5, 0.5);
    glRotated(90, 0,1,0);
    glScaled(1,0.1,0.2);
    glutSolidSphere(15,slices,stacks);
    glPopMatrix();

     glPushMatrix();//1
    //glRotated(90, 1,0,0);
    glTranslated(moveLR-20,moveUD-30,6);
    glColor3d(0.5, 0.5, 0.5);
    glRotated(90, 0,1,0);
    glScaled(1,0.1,0.2);
    glutSolidSphere(15,slices,stacks);
    glPopMatrix();

    glPushMatrix();//1
    //glRotated(90, 1,0,0);
    glTranslated(moveLR-6,moveUD-21,15);
    glColor3d(0.5, 0.5, 0.5);
    glRotated(90, 0,1,1);
    glScaled(0.8,0.05,0.1);
    glutSolidSphere(15,slices,stacks);
    glPopMatrix();
    glPushMatrix();
    glTranslated(moveLR+10,moveUD-21,15);
    glColor3d(0.5, 0.5, 0.5);
    glRotated(90, 0,1,1);
    glScaled(0.8,0.05,0.1);
    glutSolidSphere(15,slices,stacks);
    glPopMatrix();
     glPushMatrix();
    glTranslated(moveLR+8,moveUD-20,-3);
    glColor3d(0.5, 0.5, 0.5);
    glRotated(235, 1,1,0);
    glScaled(0.8,0.05,0.1);
    glutSolidSphere(15,slices,stacks);
    glPopMatrix();

    glPushMatrix();
    glTranslated(moveLR-7,moveUD-20,-3);
    glColor3d(0.5, 0.5, 0.5);
    glRotated(235, 1,1,0);
    glScaled(0.8,0.05,0.1);
    glutSolidSphere(15,slices,stacks);
    glPopMatrix();



    glPushMatrix();//5
    glColor3d(0.5, 0.5, 0.5);
    glTranslated(moveLR+34,moveUD+1,5.5);
    glRotated(100, 0,1,0);
    glutSolidCone(9,12,slices,stacks);
    glPopMatrix();

    glPushMatrix();
    glTranslated(moveLR+2,moveUD,3);
    glColor3d(0.5, 1, 0.5);
    glTranslated(1,1,3);
    glScaled(0.1,1.05,0.9);
    glutSolidSphere(20,slices,stacks);
    glPopMatrix();

    glPushMatrix();
    glTranslated(moveLR-1,moveUD+4,23);
    glColor3d(0, 0, 4);
    glScaled(4,4,1);
    glRotated(110,  0, 1,0);
    //glRotated(90, 0 , 1 ,0);
    glutSolidCone(3,10,slices, stacks);
    glPopMatrix();

    glPushMatrix();
    glTranslated(moveLR-1,moveUD+4,-9.5);
    glColor3d(0, 0, 4);
    glScaled(4,4,1);
    glRotated(110,  0, 1,0);
    //glRotated(90, 0 , 1 ,0);
    glutSolidCone(3,10,slices, stacks);
    glPopMatrix();

    glPopMatrix();



    glPushMatrix();
   glTranslated(-10,70,-10);
   glScaled(0.25,0.25,0.25);
   glColor3d(1, 1, 1);
   glRotated(a,0,0,1);
   glPushMatrix();
   glScaled(1,6,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(-60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
glPopMatrix();

glPushMatrix();
   glTranslated(-10,70,-10);
   glScaled(0.25,0.25,0.25);
   glColor3d(1, 1, 0);
   glRotated(a,0,0,1);
   glPushMatrix();
   glScaled(1,6,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(-60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
glPopMatrix();

glPushMatrix();
   glTranslated(20,90,-10);
   glColor3d(1, 1, 1);
   glScaled(0.25,0.25,0.25);
   glRotated(a,0,0,1);
   glPushMatrix();
   glScaled(1,6,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(-60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
glPopMatrix();

glPushMatrix();
   glColor3d(1, 1, 0);
   glTranslated(20,90,-10);
   glScaled(0.25,0.25,0.25);
   glRotated(a,0,0,1);
   glPushMatrix();
   glScaled(1,6,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(-60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
glPopMatrix();


glPushMatrix();
   glTranslated(-40,50,-10);
   glScaled(0.25,0.25,0.25);
   glColor3d(1, 1, 1);
   glRotated(a,0,0,1);
   glPushMatrix();
   glScaled(1,6,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(-60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
glPopMatrix();

glPushMatrix();
   glTranslated(-40,50,-10);
   glColor3d(1, 1, 0);
   glScaled(0.25,0.25,0.25);
   glRotated(a,0,0,1);
   glPushMatrix();
   glScaled(1,6,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(-60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
glPopMatrix();

glPushMatrix();
   glTranslated(-90,50,4);
   glColor3d(1, 1, 1);
   glScaled(0.25,0.25,0.25);
   glRotated(a,0,0,1);
   glPushMatrix();
   glScaled(1,6,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(-60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
glPopMatrix();

glPushMatrix();
   glTranslated(-90,50,4);
   glScaled(0.25,0.25,0.25);
   glColor3d(1, 1, 0);
   glRotated(a,0,0,1);
   glPushMatrix();
   glScaled(1,6,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(-60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
glPopMatrix();


glPushMatrix();
   glTranslated(-50,80,4);
   glScaled(0.25,0.25,0.25);
   glColor3d(1, 1, 1);
   glRotated(a,0,0,1);
   glPushMatrix();
   glScaled(1,6,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(-60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign1,slices,stacks);
   glPopMatrix();
glPopMatrix();

glPushMatrix();
   glTranslated(-50,80,4);
   glScaled(0.25,0.25,0.25);
   glColor3d(1, 1, 0);
   glRotated(a,0,0,1);
   glPushMatrix();
   glScaled(1,6,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
   glPushMatrix();
   glRotated(-60,0,0,1);
   glScaled(6,1,0.5);
   glutSolidSphere((radiusOfMoon*0.25-7)*sign2,slices,stacks);
   glPopMatrix();
glPopMatrix();





        glPushMatrix();
        glTranslated(70,70,-10);
        glColor3d(10,0.3,0);
        glRotated(a,0,0,1);
        glutSolidTorus(radiusOfWiresun1*1.5,radiusOfWiresun2,20,20);//sun
        glPopMatrix();
        glPushMatrix();
        glTranslated(70,70,-10);
        glColor3d(10,10,0);
        glutSolidSphere(radiusOfSun,slices,stacks); //sun
        glPopMatrix();
        glPushMatrix();
        glTranslated(rotate0*0.6,0,0);
        glPushMatrix();
        glTranslated(-60,70,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.25,slices,stacks); //sun
        glPopMatrix();

        glPushMatrix();
        glTranslated(-75,70,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.25,slices,stacks); //sun
        glPopMatrix();

        glPushMatrix();
        glTranslated(-45,70,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.25,slices,stacks); //sun
        glPopMatrix();

        glPushMatrix();
        glTranslated(-55,78,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.23,slices,stacks); //sun
        glPopMatrix();

         glPushMatrix();
        glTranslated(-65,78,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.23,slices,stacks); //sun
        glPopMatrix();

        glPushMatrix();
        glTranslated(-55,65,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.23,slices,stacks); //sun
        glPopMatrix();

         glPushMatrix();
        glTranslated(-65,65,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.23,slices,stacks); //sun
        glPopMatrix();
    glPopMatrix();


    glPushMatrix();
        glTranslated(70,-30,0);
        glTranslated(-rotate0*0.5,0,0);
        glPushMatrix();
        glTranslated(-60,70,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.25,slices,stacks); //sun
        glPopMatrix();

        glPushMatrix();
        glTranslated(-75,70,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.25,slices,stacks); //sun
        glPopMatrix();

        glPushMatrix();
        glTranslated(-45,70,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.25,slices,stacks); //sun
        glPopMatrix();

        glPushMatrix();
        glTranslated(-55,78,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.23,slices,stacks); //sun
        glPopMatrix();

         glPushMatrix();
        glTranslated(-65,78,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.23,slices,stacks); //sun
        glPopMatrix();

        glPushMatrix();
        glTranslated(-55,65,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.23,slices,stacks); //sun
        glPopMatrix();

         glPushMatrix();
        glTranslated(-65,65,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.23,slices,stacks); //sun
        glPopMatrix();
    glPopMatrix();


    glPushMatrix();
        glTranslated(70,-50,0);
        glTranslated(rotate0*0.3,0,0);
        glPushMatrix();
        glTranslated(-60,70,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.25,slices,stacks); //sun
        glPopMatrix();

        glPushMatrix();
        glTranslated(-75,70,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.25,slices,stacks); //sun
        glPopMatrix();

        glPushMatrix();
        glTranslated(-45,70,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.25,slices,stacks); //sun
        glPopMatrix();

        glPushMatrix();
        glTranslated(-55,78,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.23,slices,stacks); //sun
        glPopMatrix();

         glPushMatrix();
        glTranslated(-65,78,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.23,slices,stacks); //sun
        glPopMatrix();

        glPushMatrix();
        glTranslated(-55,65,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.23,slices,stacks); //sun
        glPopMatrix();

         glPushMatrix();
        glTranslated(-65,65,-10);
        glColor3d(10,10,10);
        glutSolidSphere(radiusOfSun*0.23,slices,stacks); //sun
        glPopMatrix();
    glPopMatrix();


        glPushMatrix();
        glTranslated(80,70,-10);
        glColor3d(10, 10, 10);
        glutSolidSphere(radiusOfMoon,slices,stacks); //moon
        glPopMatrix();

        glPushMatrix();
        glTranslated(90,60,8);
        glColor3d(0.5, 0.5, 0.5);
        glutSolidSphere(radiusOfMoon*0.5,slices,stacks); //moon
        glPopMatrix();

        glPushMatrix();
        glTranslated(80,80,20);
        glColor3d(0.5, 0.5, 0.5);
        glutSolidSphere(radiusOfMoon*0.25,slices,stacks); //moon
        glPopMatrix();

        glPushMatrix();
        glTranslated(65,80,4);
        glColor3d(0.5, 0.5, 0.5);
        glutSolidSphere(radiusOfMoon*0.5,slices,stacks); //moon
        glPopMatrix();

         glPushMatrix();
        glTranslated(65,50,14);
        glColor3d(0.5, 0.5, 0.5);
        glutSolidSphere(radiusOfMoon*0.25,slices,stacks); //moon
        glPopMatrix();


        glPushMatrix();
        glTranslated(100,70,-5);
        glRotated(rotate0*3,0,0,1);
        glColor3d(0, 0, 0);
        glutSolidSphere(radiusOfMoon*0.5,slices,stacks); //moon
        glPopMatrix();

        glPushMatrix();
        glTranslated(60,75,4);
        glColor3d(0,0,color2);
        glutSolidSphere(radiusOfblacksun*sign1 ,slices,stacks); //black body
        glPopMatrix();
        glPushMatrix();
        glTranslated(60,75,4);
        glColor3d(0,0,color3);
        glutSolidSphere(radiusOfblacksun*sign2,slices,stacks); //black body
        glPopMatrix();


        glPushMatrix();

        /*if(count%2 == 0){
                   flag2 = 0;
                   flag1 = 1;
               }
       count++;*/
     glPopMatrix();
     if (rotate0<90)
            {
                rotate0+=1;
            }
            else{
                if(radiusOfSun > 0){
                color1 = 0;
                radiusOfMoon = radiusOfSun;
                radiusOfSun = 0;
                radiusOfWiresun1 = 0;
                radiusOfWiresun2 = 0;
                diff+=15;
                flag1 = 0;
                //radiusOfblacksun =35;
                 if(radiusOfblacksun-diff < 40 && radiusOfblacksun!=0 ){
                        diff =0;
                        radiusOfblacksun = 0;

                    }
                else{
                        radiusOfblacksun =50-diff;
                }}else{
                     color1 = 1;
                     flag1 = 1;
                     radiusOfSun = radiusOfMoon;
                     radiusOfMoon = 0;
                     radiusOfWiresun1 =0.5*2;
                     radiusOfWiresun2 =20.1*2;
                     radiusOfblacksun =0;

                }
                rotate0 =0;
                }











    glutSwapBuffers();
}


static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 27 :
        case 'q':
            exit(0);
            break;

        case 'f':
            enGine =1;
            break;
        case 'w':
            if(enGine ==1){
            if(moveUD <= 50){
            moveUD+=5;}
            }
            break;
        case 's':
            if(enGine ==1){
            if(moveUD >= -16){
              moveUD-=5;
            }}
            break;
        case 'a':
            if(enGine ==1 ){
            if(moveLR >= -50){
            moveLR-=20;
            }
            if(moveLR == 30){
            sign = 0;
            }
            if(moveLR < 30){
            sign = 1;
            }

            }
            break;
            case 'd':
            if(enGine ==1 ){
            if(moveLR <= 50){
            moveLR+=20;
            }
            if(moveLR == 30){
            sign = 0;
            }
            if(moveLR < 30){
            sign = 1;
            }
            }
            break;

            case 'g':
            if(moveUD<=-20){
            enGine=0;
            }
            break;
        case 'c':
            if(enGine ==1){
            rotate1+=5;
            }
            break;
        case 'v':
            if(enGine ==1){
            rotate1-=5;
            }
            break;

        case '-':
            if (slices>3 && stacks>3)
            {
                slices--;
                stacks--;
            }
            break;
    }

    glutPostRedisplay();
}

static void idle(void)
{
    glutPostRedisplay();
}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

/* Program entry point */

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(1000,800);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT Shapes");

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);

    glClearColor(0,0,0,0);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    glutMainLoop();

    return EXIT_SUCCESS;
}
