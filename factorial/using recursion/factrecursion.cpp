#include<stdio.h>
#include<conio.h>
int fact(int n){
     if(n>0){
	return n*fact(n-1);
     }
     else{
      return 1;
     }
}
void main(){
	int no;
	clrscr();
	printf("Enter no:");
	scanf("%d",&no);
	if(no>=0){
		printf("factorial is %d",fact(no));
	}
	else{
		printf("wrong input");
	}
	getch();
}
