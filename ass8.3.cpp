#include <stdio.h>
int tongcacchuso(int b){
	int sum=0;
	int a;
	while(b!=0){
		
		a= b%10;
		b=b/10;
sum = sum+a;
	}
	return sum;
}
int main(){
	int n;
	int sum;
	printf("nhap so nguyen n =");
	scanf("%d",&n);
	sum = tongcacchuso(n);
	printf("\ntong cac chu so la %d",sum,n);
}
