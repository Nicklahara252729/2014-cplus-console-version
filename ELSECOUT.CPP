#include<conio.h>
#include<iostream.h>
void main()
{
int nilai;
clrscr();
cout<<"Input Nilai Anda = ";
cin>>"%d",&nilai;
if (nilai>=80)
{
    cout<<"\nSelamat!!! Anda Lulus\n";
    cout<<"Makan-Makannya Mana??\n";
}
if (nilai>=79)
{
    cout<<"\nAnda Lulus, Tapi Masih Dalam Percobaan";
    cout<<"\nJgn Senang Dulu Ya,Belajar Lebih Giat";
}
if (nilai>=59)
{
    cout<<"\nMaaf Anda Tidak Lulus, Tingkatkan Belajarmu!!!";
}
getch();
}
