#include<iostream.h>
#include<conio.h>
class A
{
	int x;
	float y;
     public:
	A(int a,float b);
	A(const A&obj);
	void disp();
};
A::A(int a,float b)
{
	x=a;
	y=b;
}
A::A(const A &obj)
{
	obj.x;
	obj.y;
}
void A:: disp()
{
	cout<<x<<y;
}
void main()
{
	clrscr();
	A obj1(12,12.5f);
	A obj2(A);
	getch();
}
