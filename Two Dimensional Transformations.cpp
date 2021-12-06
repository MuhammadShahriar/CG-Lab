#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;

main()
{
	int gd = DETECT, gm;
	float x1, x2, y1, y2, x3, y3, x4, y4;
	float tx, ty, sx, sy, angle, rad;

	cout<<"Enter co-ordinates of starting point:";
	cin>>x1>>y1;
	cout<<"Enter co-ordinates of ending point:";
	cin>>x2>>y2;

	cout<<"Enter translation distance(tx,ty):";
	cin>>tx>>ty;

	cout<<"Enter scaling factor(sx,sy):";
	cin>>sx>>sy;

	cout<<"Enter rotating angle:";
	cin>>angle;

	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	outtextxy(0,0,"Centre");

	setcolor(9);
	line(x1,y1,x2,y2);
	outtextxy(x2+1,y2+1,"Original Line");

	delay(1000);
	//translation
	x3 = x1+tx;
	y3 = y1+ty;
	x4 = x2+tx;
	y4 = y2+ty;

	setcolor(6);
	line( x3, y3, x4, y4);
	outtextxy(x4+1,y4+1,"Translated Line");

	delay(1000);
	//scaling
	x3 = x1*sx;
	y3 = y1*sy;
	x4 = x2*sx;
	y4 = y2*sy;

	setcolor(7);
	line( x3, y3, x4, y4);
	outtextxy(x4+1,y4+1,"Scaled Line");

	delay(1000);
	//rotation
	rad = angle * (3.14/180);
	x3 = (x1*cos(rad)) - (y1*sin(rad));
	y3 = (x1 * sin(rad)) + (y1*cos(rad));
	x4 = (x2*cos(rad)) - (y2*sin(rad));
	y4 = (x2 * sin(rad)) + (y2*cos(rad));

	cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;

	//setcolor(8);
	//line(x3,y3,x4,y4);
	//outtextxy(x4+1,y4+2,"Rotated Line");

	//testing
	float dx , dy;
	dx = x1-x3;
	dy = y1 - y3;
	x3 = x1;
	x4 = round(x4+ dx);
	y3 = y1;
	y4 = round(y4 + dy);
	setcolor(10);
	line(x3,y3,x4,y4);
	outtextxy(x4+2, y4+5,"Rotated test Line");
	getch();
	closegraph();
}
