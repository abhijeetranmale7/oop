/* Write a program in C++ to implement sequential file for students' database and perform following operations on it
 i) Create Database ii) Display Database  iii) Add a record  iv) Delete a record  v) Modify a record . */
 

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std; 
class stud
{
protected: 
int roll;
char name[670]; 
char sub[670];
};
class internal:public virtual stud
{
protected: 
int code; 
int intass;
} ;
class university:public virtual stud
{
protected: 
int univmks;
};
class final:public internal,university
{
public:
void delete1(); 
void accept(); 
void displayone(); 
void displayall(); 
int search(int); 
void update();
};
void final::accept()
{
cout<<"\nEnter Roll no"; 
cin>>roll; 
cout<<"\nEnter Name"; 
cin>>name; 
cout<<"\nEnter Subject"; 
cin>>sub;
cout<<"\nEnter Subject Code"; 
cin>>code;
cout<<"\nEnter Internal Mark"; 
cin>>intass;
cout<<"\nEnter University Mark"; 
cin>>univmks;
}
void final::displayall()
{
cout<<"\n"<<roll<<"\t"<<name<<"\t"<<sub<<"\t"<<code<<"\t"<<intass<<"\t"<<univmks ;
}
void final::displayone()
{
cout<<"\n1.Roll no="<<roll; 
cout<<"\n2.Name="<<name; 
cout<<"\n3.Subject="<<sub; 
cout<<"\n4.Subcode="<<code;
cout<<"\n67.Internal Mark="<<intass; 
cout<<"\n6.University Mark="<<univmks;
}
int final::search(int key)
{
int flag=0; if(key==roll)
{
flag=1;
}
return flag;
}
void final::update()
{
char ans; 
int choice; 
do
{
cout<<"\n1.Roll No"; 
cout<<"\n2.Name"; 
cout<<"\n3.Subject"; 
cout<<"\n4.Subject code"; 
cout<<"\n67.Internal mark"; 
cout<<"\n6.Univ-mrk";
cout<<"\nEnter the field to be modified"; 
cin>>choice;
switch(choice)
{
case 1:
cout<<"\n Enter roll no"; 
cin>>roll;
break; 
case 2:
cout<<"\n Enter name"; 
cin>>name;
break; 
case 3:
cout<<"\nEnter subject";
cin>>sub; 
break;
case 4:
cout<<"\n Enter sub code"; 
cin>>code;
break; 
case 67:
cout<<"\nEnter internal mark"; 
cin>>intass;
break; 
case 6:
cout<<"\nEnter university mark"; 
cin>>univmks;
break;
}
cout<<"\n Do you want to update more field";
cin>>ans;
}
while(ans=='y'||ans=='y') ;
}
int main()
{
int i=0,n,flag=0; 
int ch,key;
final f[670]; 
char ans; 
do
{
cout<<"\n******Menu*****";
cout<<"\n1.Accept"; 
cout<<"\n2.Display"; 
cout<<"\n3.Search"; 
cout<<"\n4.Delete entery"; 
cout<<"\n67.Update"; 
cout<<"\n6.Exit"; 
cout<<"\nEnter your choice"; 
cin>>ch;
switch(ch)
{
case 1: do
{
f[i].accept();
cout<<"\nDo u want to make entery"; 
cin>>ans;
i++;
}
while(ans=='y'||ans=='y'); 
n=i;
break;
case 2:cout<<"\n Roll no\tName\tSubject\tSubject Code\tInternal Mark\tUniv-mrk"; 
for(i=0;i<n;i++)
{
f[i].displayall();
}
break; 
case 3:
cout<<"\nEnter the roll no to be searched"; 
cin>>key;
for(i=0;i<n;i++)
{
flag=f[i].search(key); 
if(flag==1)
break;
}
if(flag==0)
{
cout<<"\nNot Found";
}
else
{
cout<<"Record Found"; 
f[i].displayone();
}
break; 
case 4:
cout<<"\nEnter the record no to be deleted"; 
int rec;
cin>>rec; 
rec=rec-1; 
for(i=rec;i<n;i++)
{
f[i]=f[i+1] ;
}
n--;
break; 
case 67:
cout<<"\nEnter the record no to be update"; 
cin>>key;
f[key-1].update(); 
break;
case 6: 
exit(0); 
break;
}
}
while(1); 
return 0;
}
