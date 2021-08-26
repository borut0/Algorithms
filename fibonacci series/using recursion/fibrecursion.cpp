#include<stdio.h>
#include<conio.h>
int fib(int n){
    if(n==0 || n==1){
	return 1;
    }
    return (fib(n-2)+fib(n-1));
}
void main(){
	int no;
	clrscr();
	printf("Enter range:");
	scanf("%d",&no);
	for(int i=0;i<=no;i++){
	 printf("%d ",fib(i));
	}
	getch();
}
