#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
int a;
cout<<"penggunaan manipulator setw"<<"/n/n";
cout<<"___________________________"<<"/n";
for (a=1;a<=15;a++)
{
cout<<setw(a)<<a<<endl;
}
cout<<"___________________________"<<"/n";
getch();
}