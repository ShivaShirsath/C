#include<stdio.h>
#include<conio.h>

void main(){
    char name[15];
    clrscr();
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Hello %s !",name);
    getch();
}
