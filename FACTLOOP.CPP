#include<stdio.h>
#include<conio.h>
void main(){
 int no,fact=1;
 clrscr();
 printf("Enter no.");
 scanf("%d",&no);
 if(no<0){
  printf("wrong input");
 }
 else{
  while(no>0){
     fact=fact*no--;
  }
 printf("factorial is %d",fact);
 }
 getch();
}