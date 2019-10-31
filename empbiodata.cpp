/* Create employee bio-data using following classes i) Personal record ii))Professional record
 iii) Academic record Assume appropriate data members and member function to accept required data & print bio-data.
 Create bio-data using multiple inheritance using C++ . */


#include<iostream>
using namespace std;
class confidential
{
protected:
char name[670];
char address[670];
char birthdate[670];
char gender;
public:
void get_confidential();
};
class executive
{
protected:
int noofyearsexp;
char orgname[670];
char projname[670];
char projdetails[670];
public:
void get_executive();
};
class scholastic
{
protected:
int year;
int marks;
int percentage;
char Class[670];
public:
void get_scholastic();
};
class biodata: public confidential, public executive, public scholastic
{
public:
void display();
};
void confidential::get_confidential()
{
cout<<"Enter name::";
cin>>name;
cout<<"Enter Address::";
cin>>address;
cout<<"Enter Birthdate(dd/mm/yyyy)::";
cin>>birthdate;
cout<<"Enter gender(M/F)::";
cin>>gender;
}
void executive::get_executive()
{
cout<<"Enter number of years of exp::";
cin>>noofyearsexp;
cout<<"Enter organization name::";
cin>>orgname;
cout<<"Enter project name::";
cin>>projname;
cout<<"Enter project Details::";
cin>>projdetails;
}
void scholastic::get_scholastic()
{
cout<<"Enter scholastic year::";
cin>>year;
cout<<"Enter total marks::";
cin>>marks;
cout<<"Enter percentage::";
cin>>percentage;
cout<<"Enter class::";
cin>>Class;
}
void biodata::display()
{
cout<<"\n ---------------------Employee Biodata--------------"<<endl;
cout<<"\n -----------------------------------------------------"<<endl;
cout<<"____________________Confidential Details__________________________"<<endl;
cout<<"Name::"<<name<<endl;
cout<<"address::"<<address<<endl;
cout<<"birthdate::"<<birthdate<<endl;
cout<<"Gender::"<<gender<<endl;
cout<<"--------------------------------------------------"<<endl;
cout<<"\n ________________Scholastic Details________________________"<<endl;
cout<<"scholstic Year "<<"marks "<<"percentage "<<"class "<<endl;
cout<<year<<"\t\t0"<<marks<<"\t"<<percentage<<"\t"<<Class<<endl;
cout<<"-------------------------------------------------------"<<endl;
cout<<"\n _______________Executive Details____________________"<<endl;
cout<<"\nOrganization Name::"<<orgname;
cout<<"\nYears of Experince::"<<noofyearsexp;
cout<<"\nProject Done::"<<projname;
cout<<"\nProject Details::"<<projdetails;
}
int main()
{
biodata b;
b.get_confidential();
b.get_executive();
b.get_scholastic();
b.display();
return 0;
}
