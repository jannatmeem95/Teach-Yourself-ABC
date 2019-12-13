/*# include "iGraphics.h"
#include<math.h>
#include<time.h>

double o, x = 500, y = 360 + 250, sx, sy, p;
double xm = 500, ym = 360 + 220, mx, my, pm;
double xh = 500, yh = 360 + 200, hx, hy, ph, H, M, S;
int i, distance, dim, dis, dih;
char ch='d';


void iDigit(int a)
{
	iSetColor(300,200,100);
	iFilledRectangle(140 + distance, 310, 12, 90);
	iFilledRectangle(140 + distance, 200, 12, 90);
	iFilledRectangle(40 + distance, 310, 12, 90);
	iFilledRectangle(40 + distance, 200, 12, 90);
	iFilledRectangle(55 + distance, 400, 80, 12);
	iFilledRectangle(55 + distance, 300, 80, 12);
	iFilledRectangle(55 + distance, 190, 80,12);

	iSetColor(0, 0, 0);
	if (a == 5 || a == 6) iFilledRectangle(140 + distance, 310, 12, 90);
	if (a == 2) iFilledRectangle(140 + distance, 200, 12, 90);
	if (a == 1 || a == 2 || a == 3 || a == 7) iFilledRectangle(40 + distance, 310, 12, 90);
	if (a == 1 || a == 3 || a == 4 || a == 5 || a == 7 || a == 9) iFilledRectangle(40 + distance, 200, 12, 90);
	if (a == 1 || a == 4) iFilledRectangle(55 + distance, 400, 80, 12);
	if (a == 1 || a == 7 || a == 0) iFilledRectangle(55 + distance, 300, 80, 12);
	if (a == 1 || a == 4 || a == 7) iFilledRectangle(55 + distance, 190, 80, 12);

}

void iDraw()
{
	iClear();
	if (ch == 'a' || ch == 'A'){

		iSetColor(0, 255, 0);
		iCircle(500, 360, 305);
		iSetColor(0, 0, 255);
		iCircle(500, 360, 275);
		iSetColor(255, 0, 0);
		for (i = 1, o = (6 / 57.29); i <= 60; i++, o += (6 / 57.29))
		{
			if (i % 5 != 0)
				iFilledCircle(500 + 295 * cos(o), 360 + 295 * sin(o), 4);

		}


		iSetColor(255, 0, 0);
		iLine(500, 360, x, y);
		iSetColor(0, 120, 120);
		iLine(500, 360, xm, ym);
		iSetColor(20, 200, 40);
		iLine(500, 360, xh, yh);
		iSetColor(255, 0, 0);
		iText(500 + 244, 360 - 150, "IV");
		iText(500 + 145, 360 - 256, "V");
		iText(495, 60, "VI");//iFilledCircle(500,65,5);
		iText(500 - 155, 360 - 257, "VII");
		iText(200, 360, "IX");//iFilledCircle(205,360,5);
		iText(500 - 255, 360 + 145, "X");
		iText(500 + 240, 360 + 150, "II");
		iText(500 + 140, 360 + 252, "I");
		iText(490, 650, "XII");
		iText(777, 360, "III");
		iText(500 - 150, 360 + 250, "XI");
		iText(500 - 260, 360 - 150, "VIII");
		iSetColor(20, 50, 210);
		iFilledCircle(500, 360, 20);

	}
	else if (ch == 'D' || ch == 'd'){
		iSetColor(300,200, 100);
		iFilledCircle(350, 365, 10);
		iFilledCircle(350, 265, 10);
		iFilledCircle(665, 365, 10);
		iFilledCircle(665, 265, 10);

		distance = 50;
		iDigit(dih / 10);
		distance = 170;
		iDigit(dih % 10);
		distance = 350;
		iDigit(dim / 10);
		distance = 470;
		iDigit(dim % 10);
		distance = 650;
		iDigit(dis / 10);
		distance = 770;
		iDigit(dis % 10);

	}
}


void iMouseMove(int mx, int my)
{

}


void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}
}


void iKeyboard(unsigned char key)
{
	ch = key;
}


void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
}

void second()

{

	sx = 250 * cos(p / 57.29);
	sy = 250 * sin(p / 57.29);
	x = 500 + sx;
	y = 360 + sy;
	p = p - 6;

	dis = (dis + 1) % 60;


}
void minute()
{
	mx = 220 * cos(pm / 57.29);
	my = 220 * sin(pm / 57.29);
	xm = 500 + mx;
	ym = 360 + my;
	pm = pm - .1;
	if (dis == 59) dim = (dim + 1)%60;

}
void hour()
{
	hx = 200 * cos(ph / 57.29);
	hy = 200 * sin(ph / 57.29);
	xh = 500 + hx;
	yh = 360 + hy;
	ph = ph - 1 / 600;
	if (dim == 59 && dis == 59){
		if (dih == 11) dis = 12;
		else dih = (dih + 1) % 12;
	}
}
int main()
{
	time_t rawtime;
	tm * ptm;

	time(&rawtime);

	ptm = gmtime(&rawtime);   //getting time from bios

	H = (ptm->tm_hour + 6) % 24;
	M = ptm->tm_min;
	S = (ptm->tm_sec) + 2;


	ph = (3 - H)*30.0 - 30 * M / 60.0 - 30 * S / 3600.0 + .1 / 600 + 270 + 90;

	pm = (15 - M)*6.0 - S / 60.0 + .1 + 270 + 90;

	p = (15 - S)*6.0 + 6 + 270 + 90;

	dih = H;
	dim = M;
	dis = S;

	second();
	minute();
	hour();

	iSetTimer(1000, second);
	iSetTimer(1000, minute);
	iSetTimer(1000, hour);
	iInitialize(1000, 720, "Analogue-Digital Clock");
	return 0;
}*/





# include "iGraphics.h"
#include<iostream>
#include<math.h>
#include<time.h>
#include<string.h>
using namespace std;
int Gstate[25][25];
int Nowx=-1,Nowy=-1;
bool UserPlayed=0,CompPlayed=0,UserWinCalclulated=0,UserWon=0,CompWon=0,CompWinCalclulated=0;
bool WinMap[25][25];
int StepNo=0;
char opponenetNames[][10]= {"Null","MONKEY","SUNNY","YAAD","NASHIR"};
bool flMainMenu=1,flMainGame,flChooseOpponent,flBack2MainMenu,flInstructions,flHighScore,flDraw;
int OpponentValue=0;
char OpponentMessageWin[][100]= {"NULL","CHI CHI CHA CHA ..CHI CHI ... CHA  CHA .. CHA CHI CHA!!",
                                 "Congratulation !!! You have played really Well ..... !!","Nice Game!!!  But I'll  surely beat you next time ...!!",
                                 "Congrats!! Guess I wasnt as good as i thought :( ... !!"
                                };
 
char OpponentMessageLose[][100]= {"NULL","CHA CHA CHA CHI ..CHI CHI ... CHACHA  CHA . CHI CHI CHI",
                                  "Well! Dont worry !! You'll play better next time...!!","BAAAAAAAAAAL ta khelo mea ..... ... Abar ashche   !!!",
                                  "You lost !! But i can see that youre getting better !"
                                 };
void DrawExtra()
{
    iSetColor(200,200,200);
    iLine(18*4,70*4,18*4,100*4);
    iText(2*4,85*4,"_MOVES_");
    char nums[10];
    sprintf(nums,"%d",StepNo);
    iSetColor(0,200,0);
    iText(6*4,81*4,nums);
 
    iSetColor(0,200,0);
    iText(135*4,85*4,"USER");
    iSetColor(200,200,200);
    iText(137*4,79*4,"VS");
    iSetColor(200,0,0);
    iText(135*4,73*4,opponenetNames[OpponentValue]);
}
void DrawUpMessage()
{
    if(UserWon)
    {
        iSetColor(0,200,0);
        iFilledRectangle(63*4,143*4,25*4,6*4);
        iSetColor(200,200,200);
        iText(65*4,145*4,"YOU WIN :) ");
 
        iSetColor(200,200,200);
        iText(49*4,138*4,"You Took: ");
        char nums[10];
        sprintf(nums,"%d",StepNo);
        iSetColor(0,200,0);
        iText(69*4,138*4,nums);
        iSetColor(200,200,200);
        iText(77*4,138*4,"Moves!!!");
 
        iSetColor(200,200,200);
        iText(5*4,132*4,opponenetNames[OpponentValue]);
        iText(19.5*4,132*4,"said :");
        iSetColor(50,150,200);
        iText(33*4,132*4,OpponentMessageWin[OpponentValue]);
    }
    else if(CompWon)
    {
        iSetColor(200,0,0);
        iFilledRectangle(63*4,143*4,25*4,6*4);
        iSetColor(200,200,200);
        iText(65*4,145*4,"YOU LOST :( ");
 
        iSetColor(200,200,200);
        iText(5*4,136*4,opponenetNames[OpponentValue]);
        iText(19.5*4,136*4,"said :");
        iSetColor(50,150,200);
        iText(33*4,136*4,OpponentMessageLose[OpponentValue]);
    }
	else
	{
		iSetColor(200,200,200);
        iFilledRectangle(63*4,143*4,25*4,6*4);
        iSetColor(0,200,0);
        iText(65*4,145*4,"ITS DRAW :|");
	}
}
void DrawBack2MainMenu()
{
    iSetColor(200,200,200);
    iRectangle(53*4,5*4,40*4,10*4);
    iText(55*4,9*4,"Back To MAIN MENU");
}
void DrawGrid()
{
    DrawExtra();
    int rootx=20*4;
    int rooty=20*4;
    for(int i=0; i<22; i++)
    {
        for(int j=0; j<22; j++)
        {
            int curx=rootx+i*5*4;
            int cury=rooty+j*5*4;
            iSetColor(200,200,200);
            if(i==Nowx && j==Nowy) iFilledRectangle(curx,cury,5*4,5*4);
            else if(WinMap[i][j])
            {
                iSetColor(50,100,175);
                iFilledRectangle(curx,cury,5*4,5*4);
            }
            else iRectangle(curx,cury,5*4,5*4);
            if(Gstate[i][j])
            {
                if(Gstate[i][j]==1) iSetColor(200,0,0);
                else iSetColor(0,200,0);
                iFilledCircle(curx+2.5*4,cury+2.5*4,2.25*4);
            }
        }
    }
}
void DrawMainMenu()
{
    iSetColor(0,0,150);
    iRectangle(30*4,30*4,90*4,90*4);
 
    iSetColor(0,200,0);
    iRectangle(50*4,35*4,50*4,17*4);
    iRectangle(50*4,56*4,50*4,17*4);
    iRectangle(50*4,77*4,50*4,17*4);
    iRectangle(50*4,98*4,50*4,17*4);
 
    iSetColor(200,0,0);
    iText(63*4,105*4,"PLAY NOW");
    iText(60*4,84*4,"INSTRUCTIONS");
    iText(61*4,63*4,"HIGHSCORES");
    iText(66*4,42*4,"EXIT");
}
void DrawChooseOpponent()
{
    iSetColor(200,200,200);
    iRectangle(56*4,127*4,36*4,7*4);
    iText(56*4,129*4,"CHOOSE AN OPPONENT");
 
    iRectangle(25*4,25*4,95*4,100*4);
 
    iSetColor(0,200,0);
    iEllipse(73*4,40*4,45*4,10*4,10);
    iEllipse(73*4,64*4,45*4,10*4,10);
    iEllipse(73*4,88*4,45*4,10*4,10);
    iEllipse(73*4,112*4,45*4,10*4,10);
 
    iSetColor(200,0,0);
    iText(62*4,38*4,"NASHIR");
    iText(64*4,62*4,"YAAD");
    iText(64*4,86*4,"SUNNY");
    iText(64*4,110*4,"MONKEY");
}
void DrawInstructions()
{
    iClear();
    iEllipse(75*4,80*4,70*4,50*4,8);
    iSetColor(0,200,0);
    iText(40*4,115*4,"Five Stone is a very Popluar Game !");
    iText(31*4,112*4,"Its origin is probably japan and its japanese");
    iText(25*4,109*4,"name is Gomuku.The game is played between two ");
    iText(21*4,106*4,"players and each player plays in turns. The player who");
    iText(20*4,103*4,"can put 5 stones in a line first wins the game!!");
 
    iText(20*4,95*4,"In this game,The user will have the opportunity to make ");
    iText(21*4,92*4,"the first move And nothing but just mouse click is needed");
    iText(20*4,89*4,"to operate! Four AI has been Provided for this game.");
 
    iText(65*4,82*4,"1.Monekey");
    iText(65*4,79*4,"2.Sunny");
    iText(65*4,76*4,"3.Yaad");
    iText(65*4,73*4,"4.Nashir");
 
    iText(16*4,66*4,"As you have already guessed, Monkey is the most noob player!");
    iText(19*4,63*4,"However sunny is an expert player But Yaad is a pro! ");
    iText(27*4,60*4,"But you better watch out for his mouth :P ");
 
    iText(50*4,55*4,"And YES youre right !!");
    iText(32*4,50*4,"NASHIR is the grandmaster in this game !! :P");
 
    iText(59*4,45*4,"That'd be all !");
    iText(65*4,38*4,"HAVE FUN!");
 
}
void initialize()
{
	flMainMenu=1,flMainGame=0,flChooseOpponent=0,flBack2MainMenu=0,flInstructions;
     OpponentValue=0;
	 memset(Gstate,0,sizeof Gstate);
    Nowx=-1,Nowy=-1;
    UserPlayed=0,CompPlayed=0,UserWinCalclulated=0,UserWon=0,CompWon=0,CompWinCalclulated=0;
    memset(WinMap,0,sizeof WinMap);
    StepNo=0;
	flDraw=0;
	//flHighScore=0;
}
void DrawHighScore()
{
	    iSetColor(0,200,0);
        iFilledRectangle(50*4,143*4,45*4,20*4);
        iSetColor(200,200,200);
        iText(52*4,145*4,"NOT AVAILABLE YET :(");
}
void iDraw()
{
    iClear();
	iSetColor(200,200,200);
	iRectangle(115,-1,315,15);
	iSetColor(0,200,0);
	iText(120,2,"Devloped and Designed By: Nashir Ahmed");
	if(flHighScore) DrawHighScore();
	if(StepNo>=242 && CompPlayed && !UserWon && !CompWon) flDraw=1;
    if(UserWon || CompWon || flDraw) 	DrawUpMessage();
    if(flMainMenu)
	{
		initialize();
		DrawMainMenu();
	}
    else if(flChooseOpponent) DrawChooseOpponent();
    else if (flMainGame) DrawGrid();
    else if(flInstructions) DrawInstructions();
 
    if(flBack2MainMenu) DrawBack2MainMenu();
}
 
void iMouseMove(int mx, int my)
{
    //
}
 
void iMouse(int button, int state, int mx, int my)
{
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
		if(flBack2MainMenu)
		{
			flHighScore=0;
			iRectangle(53*4,5*4,40*4,10*4);
			if(mx>=53*4 && mx<=53*4+40*4 && my>=5*4 && my <= 5*4+10*4)
			{
				flBack2MainMenu=0;
				flMainMenu=1;
				flInstructions=0;
				flMainGame=0;
				flChooseOpponent=0;
				flHighScore=0;
			}
		}
        if(flMainMenu)
        {
            if(mx>=50*4 && mx<=50*4+50*4 && my>=98*4 && my<=98*4+17*4)
            {
                flMainMenu=0;
                flChooseOpponent=1;
				flHighScore=0;
                flBack2MainMenu=1;
            }
            else if(mx>=50*4 && mx<=50*4+50*4 && my>=77*4 && my<=77*4+17*4)
            {
                flMainMenu=0;
                flInstructions=1;
                flBack2MainMenu=1;
            }
			else if(mx>=50*4 && mx<=50*4+50*4 && my>=56*4 && my<=56*4+17*4)
			{
				flHighScore=1;
				//cout<<"Waka"<<endl;
			}
			else if(mx>=50*4 && mx<=50*4+50*4 && my>=35*4 && my<=35*4+17*4)
			{
				exit(0);
			}
        }
        else if(flChooseOpponent)
        {
			flHighScore=0;
            double val=( ((mx-73*4)*(mx-73*4))/(double)(45*4*4*45) )+( ((my-112*4)*(my-112*4))/(double)(10*10*4*4) )-1;
            if(val<=0)
            {
                OpponentValue=1;
            }
            val=( ((mx-73*4)*(mx-73*4))/(double)(45*4*4*45) )+( ((my-88*4)*(my-88*4))/(double)(10*10*4*4) )-1;
            if(val<=0)
            {
                OpponentValue=2;
            }
            val=( ((mx-73*4)*(mx-73*4))/(double)(45*4*4*45) )+( ((my-64*4)*(my-64*4))/(double)(10*10*4*4) )-1;
            if(val<=0)
            {
                OpponentValue=3;
            }
            val=( ((mx-73*4)*(mx-73*4))/(double)(45*4*4*45) )+( ((my-45*4)*(my-45*4))/(double)(10*10*4*4) )-1;
            if(val<=0)
            {
                OpponentValue=4;
            }
            if(OpponentValue>0)
            {
                flChooseOpponent=0;
                flMainGame=1;
                flBack2MainMenu=1;
            }
        }
        else if(flMainGame)
        {
			flHighScore=0;
            if(!UserWon && !CompWon && !UserPlayed)
            {
                int rootx=20*4;
                int rooty=20*4;
                for(int i=0; i<22; i++)
                {
                    for(int j=0; j<22; j++)
                    {
                        int curx=rootx+i*5*4;
                        int cury=rooty+j*5*4;
                        int upx=curx+5*4;
                        int upy=cury+5*4;
                        if(mx>=curx && mx<=upx && my>=cury && my<=upy)
                        {
                            if(Gstate[i][j]) return;
                            Gstate[i][j]=2;
                            Nowx=i;
                            Nowy=j;
                            UserPlayed=1;
                            StepNo++;
                            CompPlayed=UserWinCalclulated=0;
                            return;
                        }
                    }
                }
            }
        }
    }
    if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
 
    }
}
 
void iKeyboard(unsigned char key)
{
    //
}
 
void iSpecialKeyboard(unsigned char key)
{
 
    if(key == GLUT_KEY_END)
    {
        exit(0);
    }
}
 
int dirx[]= {1,-1,0,0,1,-1,-1,1};
int diry[]= {0,0,1,-1,1,-1,1,-1};
int DfsUser(int x,int y,int dir,int markup=0)
{
    if(x<0 || y<0 || y>=22 || y>=22 || Gstate[x][y]<=1 ) return 0;
    if(markup>0) WinMap[x][y]=1,markup--;
    return 1+DfsUser(x+dirx[dir],y+diry[dir],dir,markup);
}
void UserWinCheck()
{
    if(UserPlayed==1 && !UserWinCalclulated)
    {
        for(int i=0; i<8; i+=2)
        {
            int mv1=DfsUser(Nowx+dirx[i],Nowy+diry[i],i);
            int mv2=DfsUser(Nowx+dirx[i+1],Nowy+diry[i+1],i+1);
            int tot=mv1+mv2+1;
            if(tot>=5)
            {
                UserWon=1;
                WinMap[Nowx][Nowy]=1;
                if(mv1>=mv2)
                {
                    DfsUser(Nowx+dirx[i],Nowy+diry[i],i,min(4,mv1)),
                            DfsUser(Nowx+dirx[i+1],Nowy+diry[i+1],i+1,4-min(4,mv1));
                }
                else
                {
                    DfsUser(Nowx+dirx[i+1],Nowy+diry[i+1],i+1,min(4,mv2));
                    DfsUser(Nowx+dirx[i],Nowy+diry[i],i,4-min(4,mv2));
                }
                break;
            }
        }
        UserWinCalclulated=1;
    }
 
}
int DfsComp(int x,int y,int dir ,int markup=0)
{
    if(x<0 || y<0 || y>=22 || y>=22 || Gstate[x][y]==0 || Gstate[x][y]==2 ) return 0;
    if(markup>0)  WinMap[x][y]=1,markup--;
    return 1+DfsComp(x+dirx[dir],y+diry[dir],dir,markup);
}
void CompWinCheck()
{
    if(CompPlayed==1 && !CompWinCalclulated)
    {
        for(int i=0; i<8; i+=2)
        {
            int mv1=DfsComp(Nowx+dirx[i],Nowy+diry[i],i);
            int mv2=DfsComp(Nowx+dirx[i+1],Nowy+diry[i+1],i+1);
            int tot=mv1+mv2+1;
            if(tot>=5)
            {
                CompWon=1;
                WinMap[Nowx][Nowy]=1;
                if(mv1>=mv2)
                {
                    DfsComp(Nowx+dirx[i],Nowy+diry[i],i,min(4,mv1)),
                            DfsComp(Nowx+dirx[i+1],Nowy+diry[i+1],i+1,4-min(4,mv1));
                }
                else
                {
                    DfsComp(Nowx+dirx[i+1],Nowy+diry[i+1],i+1,min(4,mv2));
                    DfsComp(Nowx+dirx[i],Nowy+diry[i],i,4-min(4,mv2));
                }
                break;
            }
        }
        CompWinCalclulated=1;
    }
}
 
void CompRandMove()
{
    int opx[500],opy[500],ind=0;
    for(int i=0; i<22; i++)
    {
        for(int j=0; j<22; j++)
        {
            if(!Gstate[i][j])
            {
                opx[ind]=i;
                opy[ind]=j;
                ind++;
            }
        }
    }
    int choice=rand()%ind;
    Gstate[opx[choice]][opy[choice]]=1;
    Nowx=opx[choice];
    Nowy=opy[choice];
    CompPlayed=1;
    UserPlayed=CompWinCalclulated=0;
}
void CompMove()
{
    if(UserWon || CompWon) return;
    if(!UserPlayed) return;
    if(!UserWinCalclulated) return;
    if(OpponentValue==-1) return;
    if(OpponentValue==1)
    {
        CompRandMove();
        return;
    }
 
 
    int CompScorex[7][500],CompScorey[7][500],UserScoreBlockx[7][500],UserScoreBlocky[7][500];
    int CScnt[7],USBcnt[7];
    memset(CompScorex,0,sizeof CompScorex);
    memset(CompScorey,0,sizeof CompScorey);
    memset(UserScoreBlockx,0,sizeof UserScoreBlockx);
    memset(UserScoreBlocky,0,sizeof UserScoreBlocky);
    memset(CScnt,0,sizeof CScnt);
    memset(USBcnt,0,sizeof USBcnt);
 
    //For User Block
    for(int i=0; i<22; i++)
    {
        for(int j=0; j<22; j++)
        {
            if(Gstate[i][j]) continue;
            int mx=0;
            for(int k=0; k<8; k+=2)
            {
                int mv1=DfsUser(i+dirx[k],j+diry[k],k);
                int mv2=DfsUser(i+dirx[k+1],j+diry[k+1],k+1);
                int tot=mv1+mv2+1;
                mx=max(mx,tot);
 
            }
            if(mx>5) mx=5;
            UserScoreBlockx[mx][USBcnt[mx]]=i;
            UserScoreBlocky[mx][USBcnt[mx]]=j;
            USBcnt[mx]++;
        }
    }
 
    //For Comp Score
    for(int i=0; i<22; i++)
    {
        for(int j=0; j<22; j++)
        {
            if(Gstate[i][j]) continue;
            int mx=0;
            for(int k=0; k<8; k+=2)
            {
                int mv1=DfsComp(i+dirx[k],j+diry[k],k);
                int mv2=DfsComp(i+dirx[k+1],j+diry[k+1],k+1);
                int tot=mv1+mv2+1;
                mx=max(mx,tot);
            }
            if(mx>5) mx=5;
            CompScorex[mx][CScnt[mx]]=i;
            CompScorey[mx][CScnt[mx]]=j;
            CScnt[mx]++;
        }
    }
 
// Now the Move
    int lim=0;
    if(OpponentValue==3)
    {
        int rv=rand()%101;
        if(rv<=50) lim=3;
        else if(rv<=60) lim=2;
        else if(rv<=90) lim=1;
    }
    else if(OpponentValue==2)
    {
        int rv=rand()%100;
        if(rv<=10 && !CScnt[5] && !USBcnt[5] )
        {
            CompRandMove();
            return;
        }
        rv=rand()%101;
        if(rv<=90) lim=3;
        else if(rv<=80) lim=2;
        else if(rv<=60) lim=1;
    }
    bool success=0;
    for(int i=5; i>=1; i--)
    {
        if(CScnt[i])
        {
            int choice=rand()%CScnt[i];
            Gstate[CompScorex[i][choice]][CompScorey[i][choice]]=1;
            Nowx=CompScorex[i][choice],Nowy=CompScorey[i][choice];
            success=1;
            break;
        }
        if(USBcnt[i])
        {
            if(OpponentValue==2 && i<=lim) continue;
            if(OpponentValue==3 && i<=lim) continue;
            int choice=rand()%USBcnt[i];
            Gstate[UserScoreBlockx[i][choice]][UserScoreBlocky[i][choice]]=1;
            Nowx=UserScoreBlockx[i][choice],Nowy=UserScoreBlocky[i][choice];
            success=1;
            break;
        }
    }
 
    if(!success) CompRandMove();
    CompPlayed=1;
    UserPlayed=CompWinCalclulated=0;
    return;
}
int main()
{
    iSetTimer(25,UserWinCheck);
    iSetTimer(25,CompWinCheck);
 
    iSetTimer(300,CompMove);
    iInitialize(150*4,150*4,"Five Stone !");
    return 0;
}
 
