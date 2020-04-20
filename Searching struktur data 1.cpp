#include <iostream>
#include  <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
menu:
    int data;
    int i;
    char pil;
    int cari,ketemu=0;
    int X[100];
    cout<<"\t Program searching"<<endl;
    cout<<"======================================="<<endl;
    cout<<"Masukkan banyak data: ";
    cin>>data;
    cout<<endl;


for (i=1;i<=data;i++)
{

        cout<<"Masukka data ke-: "<<i<<" : ";
        cin>>X[i];
}
        cout<<endl;
        cout<<"Input bilangan yang dicari: ";
        cin>>cari;
        cout<<"====================================="<<endl<<endl;

    for (i=0;i<=data;i++)
    {
        if (X[i]==cari)
        {
            ketemu=1;
            cout<<"Data ditemukan pada indeks ke-"<<i <<endl;
        }
    }
        if (ketemu==0)
        {
            cout<<"Data tidak ditemukan"<<endl;
        }

        cout<<endl<<"Apakah anda ingin mengulang (Y/N)";
        cin>>pil;
        if (pil=='y'||  pil=='Y')
            goto menu;

}


