#includestdio.h
#includeconio.h
#includemath.h
#includeprocess.h
#includegraphics.h

int x1,x2,y1,y2,mx,my,depth;
void draw();
void trans();

int main()
{
    int gd=DETECT,gm,c;
    initgraph(&gd,&gm,CTurboC3BGI);
    printf(ntt3D Translationnn);
    printf(nEnter 1st top value(x1,y1));

    scanf(%d%d,&x1,&y1);
    printf(Enter right bottom value(x2,y2));
    scanf(%d%d,&x2,&y2);

    depth=(x2-x1)4;
    mx=(x1+x2)2;
    my=(y1+y2)2;

    draw();
    getch();
    cleardevice();

    trans();
    getch();
}

void draw()
{
    bar3d(x1,y1,x2,y2,depth,1);
}

void trans()
{
    int a1,a2,b1,b2,dep,x,y;
    printf(n Enter the Translation Distances);
    scanf(%d%d,&x,&y);

    a1=x1+x;
    a2=x2+x;
    b1=y1+y;
    b2=y2+y;

    dep=(a2-a1)4;
    bar3d(a1,b1,a2,b2,dep,1);

    setcolor(5);
    draw();
}
