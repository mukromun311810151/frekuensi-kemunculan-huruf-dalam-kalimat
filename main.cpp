#include <stdio.h>
#include <conio.h>
using namespace std;

int main ()
{
    char kalimat [50];
    int i, temu=0;
    char cari;

    printf ("Masukkan kalimat (50 char) : ");
    scanf ("%[^\n]",kalimat);
    printf ("Masukkan huruf yang dicari : ");
    scanf ("%s",&cari);
    for (i=0;kalimat[i]!='0';i++){
        if(cari==kalimat[i])temu++;
    }
    if(temu!=0)
        printf("\nTerdapat sebanyak %d huruf '%c' dari kalimat tersebut",temu,cari);
    else
        printf("\nHuruf yang diminta tidak ditemukan dalam kalimat tersebut");
    getch();
}
