#include<graphics.h>
#include<dos.h>

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");

// HOUSE

    line(150,50,200,100);
	line(150,50,80,120);
	line(80,120,100,120);
	line(150,50,350,50);
	line(350,50,400,100);
	line(100,100,100,200);
	line(100,200,200,200);
	line(200,100,200,200);
	line(400,200,400,100);
	line(200,200,400,200);
	line(200,100,400,100);
	rectangle(130,130,170,170);
	rectangle(250,130,320,200);
	line(320,130,305,140);
	line(305,140,305,200);
	line(250,130,265,140);
	line(265,140,265,200);
	line(100,200,90,210);
	line(90,210,190,210);
	line(190,210,200,200);
	line(190,210,410,210);
	line(400,200,410,210);

// HOUSE COLOR

setfillstyle(8,2);
floodfill(131,131,WHITE);
setfillstyle(11,7);
floodfill(101,101,WHITE);
setfillstyle(1,12);
floodfill(163,55,WHITE);
setfillstyle(1,12);
floodfill(82,119,WHITE);
setfillstyle(3,10);
floodfill(251,121,WHITE);
setfillstyle(1,6);
floodfill(150,205,WHITE);
setfillstyle(1,6);
floodfill(250,205,WHITE);
setfillstyle(5,12);
floodfill(310,145,WHITE);
setfillstyle(5,12);
floodfill(260,145,WHITE);

// TREE

line(505,130,505,200);
line(532,130,532,200);
line(505,200,531,200);
line(480,130,560,130);
line(480,130,500,100);
line(500,100,480,100);
line(480,100,500,70);
line(500,70,480,70);
line(480,70,520,40);
line(560,130,540,100);
line(540,100,560,100);
line(560,100,540,70);
line(540,70,560,70);
line(560,70,520,40);

// COLOR TREE
setfillstyle(6,6);
floodfill(506,131,WHITE);
setfillstyle(8,2);
floodfill(501,101,WHITE);

// ROAD

line(270,210,290,390);
line(315,210,360,390);
line(0,390,290,390);
line(360,390,639,390);
line(0,410,639,410);
line(0,390,0,410);
line(639,390,639,410);
setfillstyle(1,6);
floodfill(1,391,WHITE);

// MOUNTAIN

line(100,180,0,180);
line(400,180,505,180);
line(532,180,639,180);
line(100,150,50,110);
line(50,110,0,150);
line(400,150,450,110);
line(450,110,505,150);
line(532,150,590,110);
line(590,110,639,150);
setfillstyle(1,10);
floodfill(50,150,WHITE);
setfillstyle(1,10);
floodfill(401,150,WHITE);
setfillstyle(1,10);
floodfill(535,150,WHITE);
setfillstyle(1,9);

//SKY

floodfill(0,0,WHITE);
setfillstyle(1,9);
floodfill(504,148,WHITE);
setfillstyle(1,9);
floodfill(535,132,WHITE);

// POND

ellipse(550,300,0,360,80,50);
setfillstyle(9,3);
floodfill(550,300,WHITE);

// SUN

circle(70,50,40);
setfillstyle(8,14);
floodfill(71,51,WHITE);

// GRASS COLOR

setfillstyle(1,2);
floodfill(20,250,WHITE);
setfillstyle(1,2);
floodfill(350,230,WHITE);
getchar();
return(0);
}