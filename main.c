#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "gotoxy.h"


int main()
{
    char c=0;
    int x=0;
    int y=0;

    hidecursor(0);
    color(30);
    gotoxy(x,y);
    printf("%c",219);

    do{
        c=getch();
        switch(c){
            case 27:
                gotoxy(30,10);
                color(30);
                printf("Bye Bye!!!!");
                gotoxy(30,12);
                color(0);
                break;
            case 72:
                y=(y>0)?y-1:0;
                gotoxy(x,y);
                printf("%c",219);
                break;
            case 75:
                if(x>0){
                    x--;
                    gotoxy(x,y);
                    printf("%c",219);
                }
                break;
            case 77:
                if(x<79){
                    x++;
                    gotoxy(x,y);
                    printf("%c",219);
                }
                break;
            case 80:
                if(y<23){
                    y++;
                    gotoxy(x,y);
                    printf("%c",219);
                }
                break;
        }
    }
    while(c!=27);
    return 0;
}
