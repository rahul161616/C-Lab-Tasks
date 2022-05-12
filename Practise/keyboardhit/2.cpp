#include<iostream>
#include<conio.h>
#include<ctime>
#include<windows.h>
#include<cstdlib>

using namespace std;

int main()
{
    for (int i=0;i<10;i++){
        if (kbhit())
        {
            system("pause");
        }
        cout<<"\r "<<i;
        system("cls");
        Sleep(100);
    }
}