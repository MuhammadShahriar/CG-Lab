#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void house(){
	setcolor(5);
	rectangle(60,80,150,200);
	delay(1000);
	rectangle(95,140,120,200);
	delay(1000);
	line(60,80,100,15);
	delay(1000);
	line(100,15,150,80);
	delay(1000);
	circle(100,60,10);
}

void car(){
	setcolor(6);
	line( 150, 100, 242, 100);
	delay(1000);
	ellipse(242, 105, 0, 90, 10, 5);
	delay(1000);
	line(150, 100, 120, 150);
	delay(1000);
	line(252, 105, 280, 150);
	delay(1000);
	line(100, 150, 320, 150);
	delay(1000);
	line(100, 150, 100, 200);
	delay(1000);
	line(320, 150, 320, 200);
	delay(1000);
	line(100, 200, 110, 200);
	delay(1000);
	line( 320, 200, 310, 200);
	delay(1000);
	arc(130, 200, 0, 180, 20);
	delay(1000);
	arc( 290, 200, 0, 180, 20);
	delay(1000);
	line( 270, 200, 150, 200);
	delay(1000);
	circle(130, 200, 17);
	delay(1000);
	circle(290, 200, 17);
}

void fish(){
	setcolor(7);
	ellipse(520,200,30,330,90,30);
	delay(1000);
	circle(450,193,3);
	delay(1000);
	line(430,200,450,200);
	delay(1000);
	line(597,185,630,170);
	delay(1000);
	line(597,215,630,227);
	delay(1000);
	line(630,170,630,227);
	delay(1000);
	line(597,200,630,200);
	delay(1000);
	line(597,192,630,187);
	delay(1000);
	line(597,207,630,213);
	delay(1000);
	line(500,190,540,150);
	delay(1000);
	line(530,190,540,150);

}

main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	house();
	delay(2000);
	cleardevice();

	car();
	delay(2000);
	cleardevice();

	fish();

	getch();
	closegraph();
}
