#include<iostream>
#include<string>
#include<string.h>
using namespace std;

class AddString
{
 public:
 char str[100];
 AddString() {}

//Parametrized constructor to initialize class variable
//str=str will give ambiguity error.this->str or (*this).str will make it possible to initialize a class variable

AddString(char str[])
{
 strcpy(this->str,str);
}

AddString operator+(AddString& s2)
{
 AddString s3;
 strcat(this->str,s2.str);
 strcpy(s3.str,this->str);
 return s3;
}
};

int main()
{
 char str1[]="Geeks";
 char str2[]="ForGeeks";
 
 //Declaring and initializing the class with above two strings
 AddString a1(str1);
 AddString a2(str2);
 AddString a3;

 //Call the operator function
 a3=a1+a2;
 cout<<" Concatenation: "<<a3.str;
}
 
