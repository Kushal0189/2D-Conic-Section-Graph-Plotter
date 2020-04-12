#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#include<dos.h>
class Draw_Conics
{
	int x1,x2,y1,y2,h,k,r,x,y,a,yr,xr,midx,midy;
	void axes()
	{
		int gd=DETECT,gm;
		initgraph(&gd,&gm,"c:\\turboc3\\bgi");
		midx=(getmaxx()/2)+350;
		midy=(getmaxy()/2)+350;
		setcolor(getmaxcolor());
		line(midx,250,0,250);
		line(325,0,325,midy);
	}
public:
	void straight_line() ;
	void Circle();
	void parabola();
	void ellipse();
	void hyperbola();
};
int main()
{
	int choice;
	Draw_Conics obj;
	clrscr();
	while(1)
	{
		clrscr();
		cout<<"Enter the choice\n"<<
		"Enter 1 to draw a line"<<endl<<
		"Enter 2 to parabola"<<endl<<
		"Enter 3 to draw circle"<<endl<<
		"Enter 4 to draw ellipse"<<endl<<
		"Enter 5 to draw hyperbola"<<endl;
		cout<<"Enter your choice:"
		cin>>choice;
		clrscr();
		switch(choice)
		{
			case 1 :
				obj.straight_line();
				break;
			case 2:
				obj.parabola();
				break;
			case 3:
				obj.Circle();
				break;
			case 4:
                obj.ellipse();
				break;
			case 5:
				obj.hyperbola();
				break;
			default:
				exit(0);
				break;
		}
	}
	cout<<"\n\n\t\tThank You\n\t\tBy Pritul Dave ,Kushal Master,Rutvik Shyani\n";
	delay(5000);
	return 0;
}
void Draw_Conics::straight_line()
{
	int gd = DETECT, gm;
	cout<<"Enter the value of x1:";
	cin>>x1;
	cout<<"Enter the value of x2:";
	cin>>x2;
	cout<<"Enter the value of y1:";
	cin>>y1;
	cout<<"Enter the value of y2:";
	cin>>y2;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	axes();
	line(x1+399 ,y1,x2+199,y2);
	getch();
	closegraph();
}
void Draw_Conics::Circle()
{
	int gd = DETECT, gm;
	cout<<"Enter value of x coordinate: ";
	cin>>h;
	cout<<"Enter value of y coordinate: ";
	cin>>k;
	cout<<"Enter the radius: ";
	cin>>r;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi")
	axes();
	circle(h+399,k+199,r);
	getch();
	closegraph();
}
void Draw_Conics::parabola()
{
	int gd = DETECT, gm;
	int ch;
	cout<<"Enter 1 to draw parabola symmetric about x axis \n"<<
	"Enter 2 to draw parabola symmetric about y axis"<<endl;
	cout<<"Enter your choice:";
	cin>>ch;
	clrscr();
	if(ch==1)
	{
		cout<<"Enter 1 to draw parabola symmetric about +ve x axis \n"<<
		"Enter 2 to draw parabola symmetric about -ve x axis"<<endl;
		cout<<"Enter your choice:";
		cin>>ch;
		clrscr();
		if(ch==1)
		{	cout<<"enter the value of foci:"<<endl;
			cin>>a;
			initgraph(&gd, &gm, "c:\\turboc3\\bgi");
			axes();
			for(x=1;x<300;x++)
			{
				y=2*sqrt(a*x);
				putpixel(x+325,250-y,WHITE);
				putpixel(x+325,250+y,WHITE);
			}
		}
		else
		{
			cout<<"Enter the value of foci:"<<endl;
			cin>>a;
			initgraph(&gd, &gm, "c:\\turboc3\\bgi");
			axes();
			for(x=1;x<300;x++)
			{
			       y=2*sqrt(a*x);
			       putpixel(325-x,250-y,WHITE);
			       putpixel(325-x,250+y,WHITE);
			}
		}
		getch();
		closegraph();
	}
	else
	{
            cout<<"Enter 1 to draw parabola symmetric about +ve y axis \n"<<
			"Enter 2 to draw parabola symmetric about -ve y axis"<<endl;
			cout<<"Enter the choice:";
			cin>>ch;
			clrscr();
            if(ch==1)
            {
                cout<<"Enter the value of foci:"<<endl;
                cin>>a;
                initgraph(&gd, &gm, "c:\\turboc3\\bgi");
                axes();
                for(y=1;y<300;y++)
                {
                    x=2*sqrt(a*y);
                    putpixel(325+x,250-y,WHITE);
                    putpixel(325-x,250-y,WHITE);
                }
            }
            else
            {
                cout<<"Enter the value of foci:"<<endl;
                cin>>a;
                initgraph(&gd, &gm, "c:\\turboc3\\bgi");
                axes();
                for(y=1;y<300;y++)
                {
			       x=2*sqrt(a*y);
                    putpixel(325+x,250+y,WHITE);
                    putpixel(325-x,250+y,WHITE);
                }
		}
		getch();
		closegraph();
	}

}
void Draw_Conics::ellipse()
{
    int gd = DETECT, gm;
	cout<<"Enter value of x coordinate: ";
	cin>>h;
	cout<<"Enter value of y coordinate: ";
	cin>>k;
	cout<<"Enter the value of x-radius: ";
	cin>>xr;
	cout<<"Enter the value of y-radius: ";
	cin>>yr;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi")
	axes();
	ellipse(x+399,y+199,10,360,xr+60,yr+60);
	getch();
	closegraph();
}
void Draw_Conics::hyperbola()
{
	int gd=DETECT,gm,;
	cout<<"Enter the value of radius:";
	cin>>radius;
	if(radius>=100||radius<=0)
	{
		cout<<"out of range";
		getch();
		return;

	}
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	axes();
	midx=getmaxx()/2;
	midy=getmaxy()/2+50;
	arc(midx, midy, 45, 135, radius+50);
	arc( midx, midy-220, 225, 315, radius+50);
	getch();
	closegraph();
}


