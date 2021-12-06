#include bitsstdc++.h
#include graphics.h
#include dos.h
#include conio.h
using namespace std;

int round(float a, float m)
{
    int b = a + m;
    return b;
}

int main()
{
    int gd = DETECT, gm;
    int x1, x2, y1, y2, steps, k;
    float x, y, xincr, yincr, dx, dy, m;
    cout  Enter x1, y1 ;
    cin x1  y1;
    cout  Enter x2, y2 ;
    cin x2  y2;

    initgraph(&gd, &gm, (char));
    dx = x2 - x1;
    dy = y2 - y1;
    steps = max(abs(dx), abs(dy));
    m = dydx;

    xincr = dxsteps;
    yincr = dysteps;
    x = x1, y = y1;
    for(k = 1; k=steps; k++){
        delay(80);
        x += xincr;
        y += yincr;
        putpixel(round(x, m), round(y, m), WHITE);   prints pixel (line)
    }

    outtextxy(150, 10, Digital Differential Analyzer (DDA));
    outtextxy(x1+10, y1-10, (x1, y1));
    outtextxy(x2+5, y2, (x2, y2));

    getch();
    closegraph();
    return 0;
}





