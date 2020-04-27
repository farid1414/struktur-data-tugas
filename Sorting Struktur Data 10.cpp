#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>


using namespace std;

int main()
{
    int i,j,a,k,m,x;
    char nm[5][20], temp [40];

    cout<<"\t Program Mengurutkan Karakter"<<endl;
    cout<<"================================================"<<endl<<endl;;
    cout<<"Masukkan Banyak bilangan: ";
    cin>>x;


    for (i=1;i<=x;i++)
    {
        cout<<endl<<"Input nama ke-"<<i<<"= "; cin>>(nm[i]);
        if (i>1)
        {
            for (j=1;j<=(i-1);j++)
            {
                a=(strcmp(nm[i],nm[j]));
        if (a<=0)
        {
            strcpy (temp,nm[i]);

            for (k=(i-1);k>=j;k--)
            {
                m=(k+1);
                 strcpy (nm[m],nm[k]);
            }
            strcpy (nm[j],temp);
        }
            }
        }
    }
    cout<<"/n Hasil Pengurutannya adalah: \n";
    for(i=1;i<=x;i++)
    {
        cout<<"\n"<<nm[i];
    }
 getch(); }
