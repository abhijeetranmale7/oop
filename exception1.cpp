/* Write a program in C++ which includes the code for following operations : i. A function to read two double type numbers from keyboard 
ii. A function to calculate the division of these two numbers iii. A try block to detect and throw an exception if the condition “divide-by-zero”  occurs 
iv. Appropriate catch block to handle the exceptions thrown.*/

#include<iostream>
#include<exception>
using namespace std;
class exception1
{
private: double t,s;
public:
void read_double();
void divide();
};
void exception1::read_double()
{
try
{
cout<<"\n enter value of t="; cin>>t;
if(cin.fail())
{
throw 't';
}
cout<<"\nenter value of s="; cin>>s;
if(cin.fail())
{
throw 's';
}
}
catch(char c)
{
cout<<"\n exception caught\n"; cout<<"\n invalid value of 't'&'s'\n";
}
}
void exception1::divide()
{
try{
if(s==0)
{
throw 1;
}
else
{
cout<<"\n division="<<t/s<<"\n";
}
}
catch(int m)
{
cout<<"\n divide by zero error\n";
}
}
int main()
{
exception1 e; 
e.read_double();
e.divide();
return 0;
}
