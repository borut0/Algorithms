#include<stdio.h>
#include<conio.h>
void main(){
	int a[50],no;
	clrscr();
	printf("Enter range:");
	scanf("%d",&no);
	a[0]=0;a[1]=1;
	printf("%d %d ",a[0],a[1]);
	for(int i=2;i<no;i++){
		a[i]=a[i-2]+a[i-1];
		printf("%d ",a[i]);
	}
	getch();
}
