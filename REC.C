
#include<stdio.h>
#include<conio.h>

void main(){
int widht;
int height;
int area;
clrscr();
printf("Enter the value of widht: ");
scanf("%d",&widht);
printf("Enter the value of height: ");
scanf("%d",&height);
area=widht*height;
printf("\nArea of rectangle is :%d",area);
getch();
}