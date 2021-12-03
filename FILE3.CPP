#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
void main()
{
const float phi=3.141592;
float jarijari,keliling,luas;
jarijari=7.2;
luas=phi*jarijari*jarijari;
keliling=2*phi*jarijari;
cout<<setprecision(15);
cout<<"luas lingkaran adalah"<<luas<<"satuan luas\n";
cout<<"keliling lingkaran adalah"<<keliling<<"satuan panjang\n";
getch();
}