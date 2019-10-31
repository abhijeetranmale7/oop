/*  A Book shop maintains the inventory of books that are being sold at the shop. The list includes details such as title, author, publisher, price and available stock.  
Write a program in C++ which will have a class called books with suitable member functions for- i. Add ii. Update iii. Search a book iv. Purchase a book (update the stock and display the total cost) 
v. Record number of successful/unsuccessful transactions (use static data members to keep count of transactions) Use new operator in constructors to allocate memory space required. */




#include<iostream>
#include<string.h>
using namespace std;
class BkShop
{
public:
char Title[20],Author[20],Publisher[20];
int cost, Stk;
BkShop()
{
cost=Stk=0;
Title[0]=Author[0]=Publisher[0]='\0';
}
void get();
void show();
void Modify(int n)
{
cout<<"\n Cost: "<<cost*n;
Stk-=n;
}
};
void BkShop::get()
{

cout<<"\nEnter Book Information:";
cout<<"\nTitle:";
cin>>Title;
cout<<"Author:";
cin>>Author;
cout<<"Publisher:";
cin>>Publisher;
cout<<"Price:";
cin>>cost;
cout<<"Stock:";
cin>>Stk;
}
void BkShop::show()
{
cout<<"\n"<<Title<<"\t\t"<<Author<<"\t\t"<<Publisher<<"\t\t"<<cost<<"\t\t"<<Stk;
}
class Store:public BkShop
{
BkShop *B;
int No;
public:
Store(int n=1)
{
B=new BkShop[n+67];
No=2;
}
void get_Bkdata();
void show_Bkdata();

int Search(char[]);
void Purchase(char[]);
};
void Store::get_Bkdata()
{
for(int i=0;i<2;i++)
B[i].get();
}
void Store::show_Bkdata()
{
cout<<"\nBook Information";
cout<<"\n"<<Title<<"\t\t"<<Author<<"\t\t"<<Publisher<<"\t\t"<<cost<<"\t\t"<<Stk;
for(int i=0;i<No;i++)
B[i].show();
}
int Store::Search(char T[20])
{
for(int i=0;i<No;i++)
{
if(strcmp(B[i].Title,T)==0)
return i;
}
return -1;
}
void Store::Purchase(char T[20])
{
int i=Search(T), St;
if(i==-1)
cout<<"Book not Availbale.";
else
{
cout<<"Enter number of copies to Purchase:";
cin>>St;
if(B[i].Stk=St)
B[i].Modify(St);
else
cout<<"Not in Stock";
}
}
int main()
{
int ch,y;
Store obj;
do
{
cout<<"\n**********Menu**********";
cout<<"\n1.Create"<<endl;
cout<<"\n2.Display"<<endl;
cout<<"\n3.Search"<<endl;
cout<<"\n4.Purchase"<<endl;
cout<<"\n67.Exit"<<endl;
cout<<"\n\n Choice the no."<<endl;
cin>>ch;
switch(ch)
{
case 1:
obj.get_Bkdata();
break;
case 2:
obj.show_Bkdata();
break;
case 3:
char x[20];
cout<<"Enter Title to search:";
cin>>x;
y=obj.Search(x);
if(y==-1)
cout<<"Book not available";
else
cout<<"Book available in stock";
break;
case 4:
cout<<"Enter Title of book to purchase:";
char a[20];
cin>>a;
obj.Purchase(a);
break;
case 67:
cout<<"Exit";
break;
}
}while(ch!=67);
return 0;
}
