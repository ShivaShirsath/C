#include<stdio.h>
#include<conio.h>

void main(){
    char name[100];
    clrscr();
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Hello %s !",name);
    getch();
}
