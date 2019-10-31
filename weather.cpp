/*1.  Create a class named weather report that holds a daily weather report with data members day_of_month, 
hightemp, lowtemp,a mount_rain and amount_snow.  Use different types of constructors to initialize the objects. 
Also include a function that prompts the user and sets values for each field so that you can override the default values.  
Write a menu driven program in C++ with options to enter data and generate monthly report that displays average of each attribute. */


#include<iostream>
using namespace std;
int day_week;
class weather
{
private:
int htemp,ltemp,amt_rain,amt_snow;
static int hsum,lsum,rsum,ssum;
static float havg,lavg,ravg;
static float snavg;
public:
weather()
{
htemp=0;
ltemp=0;
amt_rain=0;
amt_snow=0;
}
void getdata()
{
cout<<"Enter high temperature:";
cin>>htemp;
cout<<"Enter low temperature:";
cin>>ltemp;
cout<<"Enter amount of rainfall:";
cin>>amt_rain;
cout<<"Enter amount of snow:";
cin>>amt_snow;
hsum+=htemp;
lsum+=ltemp;
rsum+=amt_rain;
ssum+=amt_snow;
}

static void average()
{
havg=hsum/7;
lavg=lsum/7;
ravg=rsum/7;
snavg=ssum/7;
}
static void display()
{
cout<<"\nAverage High temperature: "<<havg;
cout<<"\nAverage Low temperature: "<<lavg;
cout<<"\nAverage Amount of rainfall: "<<ravg;
cout<<"\nAverage Amount of snowfall: "<<snavg;
}
};

int weather::hsum;
int weather::lsum;
int weather::rsum;
int weather::ssum;
float weather::havg;
float weather::lavg;
float weather::ravg;
float weather::snavg;
int main()
{
int ch,i;
weather w[7];
do
{
cout<<"\n1.Read Data \n2.Display Data \n3.Exit";
cout<<"\nEnter choice";
cin>>ch;
switch(ch)
{
case 1:           //get data
for(i=0;i<7;i++)
{
day_week=day_week+1;
cout<<"For day"<<day_week<<"\n";
w[i].getdata();
weather::average();
}
cout<<"\n";
break;
case 2:         //Display
weather::display();
break;
case 3: 	  cout<<"Exit";
break;
}
}while(ch<3);
}
