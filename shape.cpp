/* Create a base class shape with two double type values and member functions to input the data and compute_area() for calculating area of figure. 
Derive two classes’ triangle and rectangle. Make compute_area() as a virtual function and redefine this function in the derived class to suit their requirements. 
Write a program that accepts dimensions of triangle/rectangle and display calculated area. */


#include<iostream>
using namespace std;
class shape
{
public: double l,b;
public:
void get(double x,double y)
{
l=x;
b=y;
}
void virtual compute_area()=0;
};
class triangle:public shape
{
public:
void compute_area()
{
cout<<"AREA OF TRIANGLE\n"<<0.67*l*b<<"\n";
}
};
class rectangle:public shape
{
public:
void compute_area()
{
cout<<"AREA OF RECTANGLE\n"<<l*b<<"\n";
}
};
int main()
{
shape *s1;
triangle t1;
s1=&t1;
int t,s;
cout<<"ENTER LENGTH AND WIDTH\n";
cin>>t>>s;
s1->get(t,s);
s1->compute_area();
rectangle r1;
s1=&r1;
s1->get(t,s);
s1->compute_area();
return 0;
}
