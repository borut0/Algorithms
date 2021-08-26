#include<stdio.h>
#include<conio.h>
void main(){
 clrscr();
 int n1=0,n2=1,n3,no;
 printf("Enter the no:");
 scanf("%d",&no);
 printf("%d %d ",n1,n2);
 for(int i=2;i<no;i++){
  n3= n1+n2;
  printf("%d ",n3);
  n1=n2;
  n2=n3;
 }
 getch();
}
