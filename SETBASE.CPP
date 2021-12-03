#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
int=250
cout<<"penggunan manipulator set base()"<<"/n/n";
cout<<"desimal octal hexadesimal"<<endl;
cout<<"-------------------------"<<"/n";
for(a=250; a<=260;a++)
{
cout<<setbase(10)<<a<<"   ";
cout<<setbase(8)<<a<<"   ";
cout<<setbase(16)<<a<<endl;
}
getch();
}