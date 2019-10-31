/* Design a class ‘Complex ‘with data members for real and imaginary part. Provide default and parameterized constructors. 
Write a program to perform arithmetic operations of two complex numbers using operator overloading. 
 i. Addition and subtraction using friend functions ii. Multiplication and division using member functions. */

#include<iostream>
#include<stdlib.h>
using namespace std;
class complex
{
 float r,i;
 public:
complex()
{
 r=0;i=0;
}
complex(int a,int b)
{
 r=a;
 i=b;
}
 void disp()
{
 if(i<0)
 cout<<r<<"+"<<i<<"i"<<endl;
 else if(i=0)
 cout<<"INVALID";
 else
 cout<<r<<"+"<<i<<"i"<<endl;
}
 void get()
{
 cout<<"Enter the Real no.=";
 cin>>r;
 cout<<"Enter the Imag no.=";
 cin>>i;
}
complex operator * (complex);
complex operator / (complex);
friend complex operator + (complex,complex);
friend complex operator - (complex,complex);
};
complex operator +(complex(c1),complex(c2))
{
 complex c;
 c.r=c1.r+c2.r;
 c.i=c1.i+c2.i;
 return c;
}
complex operator -(complex t1,complex t2)
{
 complex t;
t.r=t1.r-t2.r;
t.i=t1.i-t2.i;
return t;
}
complex complex::operator *(complex t1)
{
 complex c;
 c.r=r*t1.r-i*t1.i;
 c.i=r*t1.i+i*t1.r;
 return(c);
}
complex complex::operator/(complex t1)
{ 
 complex t;
if(t1.r==0 && t1.i==0)
{ cout<<"INVALID"<<endl;
exit(0);
 }
 else
 {
t.r=((r*t1.r)+(i*t1.i))/((t1.r*t1.r)+(t1.i*t1.i));
t.i=(-(r*t1.r)+(i*t1.i))/((t1.r*t1.r)+(t1.i*t1.i));
 return t;
 }
}
int main()
{
 complex a,b,c;
a.get();
b.get();
a.disp();
b.disp();
 c=a+b;
 c.disp();
 c=a-b;
 c.disp();
 c=a*b;
 c.disp();
 c=a/b;
 c.disp();
}
