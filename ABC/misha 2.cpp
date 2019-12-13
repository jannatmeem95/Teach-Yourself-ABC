/*#include"iGraphics.h"
#include<math.h>
#include<time.h>
#include<iostream>
using namespace std;
 
double o,x=500,y=360+250,sx,sy,p;
double xm=500,ym=360+220,mx,my,pm;
double xh=500,yh=360+200,hx,hy,ph,H,M,S;
int i;
int wx1=5 ,hy1=100, wx2=30, hy2=5;
 
char ch ;
 
void gettime()
{
        time_t rawtime;
    tm * ptm;
 
    time ( &rawtime );
 
    ptm = gmtime ( &rawtime );   //getting time from bios
 
    H=(ptm->tm_hour+6)%24;
        M=ptm->tm_min;
        S=(ptm->tm_sec+3);
}
 
 
 
void idigit(int pos1x, int pos1y , int a)
{
        if( a == 0 )
                {
                        //iClear();
                                iSetColor(0,255,0);              // no.1
                        iFilledRectangle(pos1x,pos1y ,wx1  ,hy1 );
                       
                                iSetColor(0,255,0);              // no.3
                        iFilledRectangle(pos1x+wx1+wx2 ,pos1y ,wx1  ,hy1 );
 
                                iSetColor(0,255,0);              // no.5
                        iFilledRectangle(pos1x,pos1y+hy1+hy2 ,wx1  ,hy1 );
 
                                iSetColor(0,255,0);              // no.7
                        iFilledRectangle(pos1x+wx1+wx2,pos1y+hy1+hy2 , wx1 , hy1);
 
                       
                       
                       
                                iSetColor(0,255,0);              // no.2
                        iFilledRectangle(pos1x+wx1  ,pos1y-hy2 ,wx2  ,hy2 );
 
                                iSetColor(0,0,0);              // no.4
                        iFilledRectangle(pos1x+wx1,pos1y+hy1 ,wx2  ,hy2 );
 
                                iSetColor(0,255,0);              // no.6
                        iFilledRectangle(pos1x+wx1,pos1y+hy1+hy2+hy1 ,wx2  ,hy2 );
                }
 
 
                if( a == 1 )
                {
                        //iClear();
                                iSetColor(0,0,0);              // no.1
                        iFilledRectangle(pos1x,pos1y ,wx1  ,hy1 );
                       
                                iSetColor(0,255,0);              // no.3
                        iFilledRectangle(pos1x+wx1+wx2 ,pos1y ,wx1  ,hy1 );
 
                                iSetColor(0,0,0);              // no.5
                        iFilledRectangle(pos1x,pos1y+hy1+hy2 ,wx1  ,hy1 );
 
                                iSetColor(0,255,0);              // no.7
                        iFilledRectangle(pos1x+wx1+wx2,pos1y+hy1+hy2 , wx1 , hy1);
 
                       
                       
                       
                                iSetColor(0,0,0);              // no.2
                        iFilledRectangle(pos1x+wx1  ,pos1y-hy2 ,wx2  ,hy2 );
 
                                iSetColor(0,0,0);              // no.4
                        iFilledRectangle(pos1x+wx1,pos1y+hy1 ,wx2  ,hy2 );
 
                                iSetColor(0,0,0);              // no.6
                        iFilledRectangle(pos1x+wx1,pos1y+hy1+hy2+hy1 ,wx2  ,hy2 );
                }
 
                if( a == 2 )
                {
                        //iClear();
                                iSetColor(0,255,0);              // no.1
                        iFilledRectangle(pos1x,pos1y ,wx1  ,hy1 );
                       
                                iSetColor(0,0,0);              // no.3
                        iFilledRectangle(pos1x+wx1+wx2 ,pos1y ,wx1  ,hy1 );
 
                                iSetColor(0,0,0);              // no.5
                        iFilledRectangle(pos1x,pos1y+hy1+hy2 ,wx1  ,hy1 );
 
                                iSetColor(0,255,0);              // no.7
                        iFilledRectangle(pos1x+wx1+wx2,pos1y+hy1+hy2 , wx1 , hy1);
 
                       
                       
                       
                                iSetColor(0,255,0);              // no.2
                        iFilledRectangle(pos1x+wx1  ,pos1y-hy2 ,wx2  ,hy2 );
 
                                iSetColor(0,255,0);              // no.4
                        iFilledRectangle(pos1x+wx1,pos1y+hy1 ,wx2  ,hy2 );
 
                                iSetColor(0,255,0);              // no.6
                        iFilledRectangle(pos1x+wx1,pos1y+hy1+hy2+hy1 ,wx2  ,hy2 );
                }
 
                if( a == 3 )
                {
                        //iClear();
                                iSetColor(0,0,0);              // no.1
                        iFilledRectangle(pos1x,pos1y ,wx1  ,hy1 );
                       
                                iSetColor(0,255,0);              // no.3
                        iFilledRectangle(pos1x+wx1+wx2 ,pos1y ,wx1  ,hy1 );
 
                                iSetColor(0,0,0);              // no.5
                        iFilledRectangle(pos1x,pos1y+hy1+hy2 ,wx1  ,hy1 );
 
                                iSetColor(0,255,0);              // no.7
                        iFilledRectangle(pos1x+wx1+wx2,pos1y+hy1+hy2 , wx1 , hy1);
 
                       
                       
                       
                                iSetColor(0,255,0);              // no.2
                        iFilledRectangle(pos1x+wx1  ,pos1y-hy2 ,wx2  ,hy2 );
 
                                iSetColor(0,255,0);              // no.4
                        iFilledRectangle(pos1x+wx1,pos1y+hy1 ,wx2  ,hy2 );
 
                                iSetColor(0,255,0);              // no.6
                        iFilledRectangle(pos1x+wx1,pos1y+hy1+hy2+hy1 ,wx2  ,hy2 );
                }
 
                if( a == 4 )
                {
                        //iClear();
                                iSetColor(0,0,0);              // no.1
                        iFilledRectangle(pos1x,pos1y ,wx1  ,hy1 );
                       
                                iSetColor(0,255,0);              // no.3
                        iFilledRectangle(pos1x+wx1+wx2 ,pos1y ,wx1  ,hy1 );
 
                                iSetColor(0,255,0);              // no.5
                        iFilledRectangle(pos1x,pos1y+hy1+hy2 ,wx1  ,hy1 );
 
                                iSetColor(0,255,0);              // no.7
                        iFilledRectangle(pos1x+wx1+wx2,pos1y+hy1+hy2 , wx1 , hy1);
 
                       
                       
                       
                                iSetColor(0,0,0);              // no.2
                        iFilledRectangle(pos1x+wx1  ,pos1y-hy2 ,wx2  ,hy2 );
 
                                iSetColor(0,255,0);              // no.4
                        iFilledRectangle(pos1x+wx1,pos1y+hy1 ,wx2  ,hy2 );
 
                                iSetColor(0,0,0);              // no.6
                        iFilledRectangle(pos1x+wx1,pos1y+hy1+hy2+hy1 ,wx2  ,hy2 );
                }
 
                if( a == 5 )
                {
                        //iClear();
                                iSetColor(0,0,0);              // no.1
                        iFilledRectangle(pos1x,pos1y ,wx1  ,hy1 );
                       
                                iSetColor(0,255,0);              // no.3
                        iFilledRectangle(pos1x+wx1+wx2 ,pos1y ,wx1  ,hy1 );
 
                                iSetColor(0,255,0);              // no.5
                        iFilledRectangle(pos1x,pos1y+hy1+hy2 ,wx1  ,hy1 );
 
                                iSetColor(0,0,0);              // no.7
                        iFilledRectangle(pos1x+wx1+wx2,pos1y+hy1+hy2 , wx1 , hy1);
 
                       
                       
                       
                                iSetColor(0,255,0);              // no.2
                        iFilledRectangle(pos1x+wx1  ,pos1y-hy2 ,wx2  ,hy2 );
 
                                iSetColor(0,255,0);              // no.4
                        iFilledRectangle(pos1x+wx1,pos1y+hy1 ,wx2  ,hy2 );
 
                                iSetColor(0,255,0);              // no.6
                        iFilledRectangle(pos1x+wx1,pos1y+hy1+hy2+hy1 ,wx2  ,hy2 );
                }
 
                if( a == 6 )
                {
                        //iClear();
                                iSetColor(0,255,0);              // no.1
                        iFilledRectangle(pos1x,pos1y ,wx1  ,hy1 );
                       
                                iSetColor(0,255,0);              // no.3
                        iFilledRectangle(pos1x+wx1+wx2 ,pos1y ,wx1  ,hy1 );
 
                                iSetColor(0,255,0);              // no.5
                        iFilledRectangle(pos1x,pos1y+hy1+hy2 ,wx1  ,hy1 );
 
                                iSetColor(0,0,0);              // no.7
                        iFilledRectangle(pos1x+wx1+wx2,pos1y+hy1+hy2 , wx1 , hy1);
 
                       
                       
                       
                                iSetColor(0,255,0);              // no.2
                        iFilledRectangle(pos1x+wx1  ,pos1y-hy2 ,wx2  ,hy2 );
 
                                iSetColor(0,255,0);              // no.4
                        iFilledRectangle(pos1x+wx1,pos1y+hy1 ,wx2  ,hy2 );
 
                                iSetColor(0,255,0);              // no.6
                        iFilledRectangle(pos1x+wx1,pos1y+hy1+hy2+hy1 ,wx2  ,hy2 );
                }
 
                if( a == 7 )
                {
                        //iClear();
                                iSetColor(0,0,0);              // no.1
                        iFilledRectangle(pos1x,pos1y ,wx1  ,hy1 );
                       
                                iSetColor(0,255,0);              // no.3
                        iFilledRectangle(pos1x+wx1+wx2 ,pos1y ,wx1  ,hy1 );
 
                                iSetColor(0,0,0);              // no.5
                        iFilledRectangle(pos1x,pos1y+hy1+hy2 ,wx1  ,hy1 );
 
                                iSetColor(0,255,0);              // no.7
                        iFilledRectangle(pos1x+wx1+wx2,pos1y+hy1+hy2 , wx1 , hy1);
 
                       
                       
                       
                                iSetColor(0,0,0);              // no.2
                        iFilledRectangle(pos1x+wx1  ,pos1y-hy2 ,wx2  ,hy2 );
 
                                iSetColor(0,0,0);              // no.4
                        iFilledRectangle(pos1x+wx1,pos1y+hy1 ,wx2  ,hy2 );
 
                                iSetColor(0,255,0);              // no.6
                        iFilledRectangle(pos1x+wx1,pos1y+hy1+hy2+hy1 ,wx2  ,hy2 );
                }
 
                if( a == 8 )
                {
                        //iClear();
                                iSetColor(0,255,0);              // no.1
                        iFilledRectangle(pos1x,pos1y ,wx1  ,hy1 ) ;
                       
                                iSetColor(0,255,0);              // no.3
                        iFilledRectangle(pos1x+wx1+wx2 ,pos1y ,wx1  ,hy1 );
 
                                iSetColor(0,255,0);              // no.5
                        iFilledRectangle(pos1x,pos1y+hy1+hy2 ,wx1  ,hy1 );
 
                                iSetColor(0,255,0);              // no.7
                        iFilledRectangle(pos1x+wx1+wx2,pos1y+hy1+hy2 , wx1 , hy1);
 
                       
                       
                       
                                iSetColor(0,255,0);              // no.2
                        iFilledRectangle(pos1x+wx1  ,pos1y-hy2 ,wx2  ,hy2 );
 
                                iSetColor(0,255,0);              // no.4
                        iFilledRectangle(pos1x+wx1,pos1y+hy1 ,wx2  ,hy2 );
 
                                iSetColor(0,255,0);              // no.6
                        iFilledRectangle(pos1x+wx1,pos1y+hy1+hy2+hy1 ,wx2  ,hy2 );
                }
 
                if( a == 9 )
                {
                        //iClear();
                                iSetColor(0,0,0);              // no.1
                        iFilledRectangle(pos1x,pos1y ,wx1  ,hy1 );
                       
                                iSetColor(0,255,0);              // no.3
                        iFilledRectangle(pos1x+wx1+wx2 ,pos1y ,wx1  ,hy1 );
 
                                iSetColor(0,255,0);              // no.5
                        iFilledRectangle(pos1x,pos1y+hy1+hy2 ,wx1  ,hy1 );
 
                                iSetColor(0,255,0);              // no.7
                        iFilledRectangle(pos1x+wx1+wx2,pos1y+hy1+hy2 , wx1 , hy1);
 
                       
                       
                       
                                iSetColor(0,255,0);              // no.2
                        iFilledRectangle(pos1x+wx1  ,pos1y-hy2 ,wx2  ,hy2 );
 
                                iSetColor(0,255,0);              // no.4
                        iFilledRectangle(pos1x+wx1,pos1y+hy1 ,wx2  ,hy2 );
 
                                iSetColor(0,255,0);              // no.6
                        iFilledRectangle(pos1x+wx1,pos1y+hy1+hy2+hy1 ,wx2  ,hy2 );
                }
 
 
 
               
 
}
 
 
void iDraw()
{
        if(ch=='A' || ch == 'a')
        {
                iClear();
                        iSetColor(10,10,10);
                iFilledCircle(500,360,300);//Large
                   iSetColor(0,255,0);
                   iCircle(500,360,305);//out
                iSetColor(0,0,255);
                iCircle(500,360,275);//nextout
                iSetColor(255,0,0);
                for (i=1,o=(6/57.29);i<=60;i++,o+=(6/57.29))
                {   if(i%5!=0)
                                iFilledCircle(500+295*cos(o),360+295*sin(o),4);
                        if (i%5==0)
                                iFilledCircle(0,0,0);
                }
 
 
                iSetColor(255,0,0);
                iLine(500,360,x,y);///second
                iSetColor(0,120,120);
                iLine(500,360,xm,ym);///minit
                iSetColor(20,200,40);
                iLine(500,360,xh,yh);//HR
                iSetColor(255,0,0);
                iText(500+244,360-150,"IV");//4(500+259,360-150)point
                iText(500+145,360-256,"V");//   iFilledCircle(500+150,360-260,5);//60
                iText(495,60,"VI");//iFilledCircle(500,65,5);//lower
                iText(500-155,360-257,"VII");//iFilledCircle(500-150,360-260,5);//120
                iText(200,360,"IX");//iFilledCircle(205,360,5);//left
                iText(500-255,360+145,"X");//iFilledCircle(500-260,360+150,5);//150
                iText(500+240,360+150,"II");//iFilledCircle(500+259,360+150,5);//330
                iText(500+140,360+252,"I");//   iFilledCircle(500+150,360+260,5);//300
                iText(490,650,"XII");// iFilledCircle(500,655,5);//upper
                iText(777,360,"III");// iFilledCircle(795,360,5);//right
                iText(500-150,360+250,"XI");//  iFilledCircle(500-150,360+260,5);//240
                iText(500-260,360-150,"VIII");//        iFilledCircle(500-260,360-150,5);//210
                iSetColor(20,50,210);
                iFilledCircle(500,360,20);//small
        }
        else if(ch=='D' || ch=='d')
        {
               
               
 
                int intx=270 , inty=300;
 
               
                iClear();
               
                idigit(intx,300,H/10) ;
                idigit(intx+50,300,H%10) ;
 
                idigit(intx+50+100,300,(int)M/10);
                idigit(intx+100+100,300,(int)M%10);
 
                idigit(intx+50+100+50+100,300,(int)(S-3)/10);
                idigit(intx+50+100+50+100+50,300,(int)(S-3)%10);
               
               
                        iSetColor(0,255,0);
                        iFilledRectangle(intx+wx1+wx2+wx1+75 , inty +hy1 /2 , wx1 ,hy2 );
 
                        iSetColor(0,255,0);
                        iFilledRectangle(intx+wx1+wx2+wx1+75 , inty+hy1 +hy1 /2 , wx1 ,hy2 );
 
                        iSetColor(0,255,0);
                        iFilledRectangle(intx+wx1+wx2+wx1+75 +wx1+wx1+wx2+110 , inty +hy1 /2 , wx1 ,hy2  );
 
                        iSetColor(0,255,0);
                        iFilledRectangle(intx+wx1+wx2+wx1+75 +wx1+wx1+wx2+110 , inty +hy1 +hy1 /2 , wx1 , hy2 );
               
 
                 
               
 
 
               
               
 
 
        }
       
 
}
 
 
void iMouseMove(int mx, int my)
{
       
}
 
 
void iMouse(int button, int state, int mx, int my)
{
        if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
        {
                       
        }
        if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
        {
               
        }
}
 
 
void iKeyboard(unsigned char key)
{
        if(key == 'q')
        {
               
        }
       
}
 
 
void iSpecialKeyboard(unsigned char key)
{
 
        if(key == GLUT_KEY_END)
        {
                exit(0);       
        }
}
 
void second()
 
{
          sx=250*cos(p/57.29);
          sy=250*sin(p/57.29);
          x=500+sx;
          y=360+sy;
      p=p-6;
}
void minute()
{
      mx=220*cos(pm/57.29);
          my=220*sin(pm/57.29);
          xm=500+mx;
          ym=360+my;
          pm=pm-.1;
}
void hour()
{
        hx=200*cos(ph/57.29);
        hy=200*sin(ph/57.29);
        xh=500+hx;
        yh=360+hy;
        ph=ph-1/600;
}
int main()
{
        do
        {
                cin>>ch;
        }
        while(ch!='A' && ch != 'a' && ch != 'D' && ch != 'd');
        time_t rawtime;
    tm * ptm;
 
    time ( &rawtime );
 
    ptm = gmtime ( &rawtime );   //getting time from bios
 
    H=(ptm->tm_hour+6)%24;
        M=ptm->tm_min;
        S=(ptm->tm_sec)+2;
       
 
        ph =(3-H)*30.0-30*M/60.0-30*S/3600.0+.1/600+270+90;
     
        pm= (15-M)*6.0-S/60.0+.1+270+90;
 
        p = (15-S)*6.0+6+270+90;
 
    second();
    minute();
    hour();
 
   
        iSetTimer(1000,gettime);
        iSetTimer(500,contrlblip);
    iSetTimer(1000,second);
        iSetTimer(1000,minute);
        iSetTimer(1000,hour);
        iInitialize(1000, 720, "WATCH");
        return 0;
}*/