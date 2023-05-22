
#include<stdio.h>
#include<conio.h>

void main(){
int amount;
int rate;
int time;
int area;
clrscr();
printf("Enter the value of amount: ");
scanf("%d",&amount);
printf("Enter the value of rate: ");
scanf("%d",&rate);
printf("Enter the value of time: ");
scanf("%d",&time);
area=amount*rate*time/100;
printf("\nArea of triangle is :%d",area);
getch();
}