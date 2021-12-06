#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void flood4(int,int,int,int);
void flood8(int,int,int,int);

main()
{
	int gd,gm=DETECT;

	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	rectangle(50,50,100,100);
	flood4(55,55,9,0);

	rectangle(150,150,300,300);
	flood8(250,250,5,0);

	circle(400,400,50);
	flood4(400,400,7,0);
	getch();
}

void flood4(int x,int y, int fill_col, int old_col)
{
	if(getpixel(x,y)==old_col)
	{
		delay(1);
		putpixel(x,y,fill_col);
		flood4(x+1,y,fill_col,old_col);
		flood4(x-1,y,fill_col,old_col);
		flood4(x,y+1,fill_col,old_col);
		flood4(x,y-1,fill_col,old_col);
	}
}

void flood8(int x,int y, int fill_col, int old_col)
{
	if(getpixel(x,y)==old_col)
	{
		delay(1);
		putpixel(x,y,fill_col);
		flood8(x+1,y,fill_col,old_col);
		flood8(x-1,y,fill_col,old_col);
		flood8(x,y+1,fill_col,old_col);
		flood8(x,y-1,fill_col,old_col);
		flood8(x + 1, y - 1, fill_col, old_col);
		flood8(x + 1, y + 1, fill_col, old_col);
		flood8(x - 1, y - 1, fill_col, old_col);
		flood8(x - 1, y + 1, fill_col, old_col);
	}
}
