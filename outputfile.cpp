Write a C++ program that creates an output file, writes few records into it, closes the file and open it again as an input file and read the information from the file. */ 

#include <fstream>
#include <iostream>
#include<string>
using namespace std; 
int main()
{
string str;
//Creates an instance of ofstream, and opens example.txt ofstream a_file ( "example.txt" );
// Outputs to example.txt through a_file a_file<<"My name is Amruta will now be inside of example.txt";
// Close the file stream explicitly a_file.close();
//Opens for reading the file ifstream b_file ( "example.txt" );
//Reads one string from the file if (b_file.is_open())
{
while ( getline (b_file,str) )
{
cout << str <<'\n';
}
b_file.close();
}
cin.get(); // wait for a keypress
// b_file is closed implicitly here
}
