#include <stdio.h>
int main(){
	int i , n , a;
	do{
	
	printf("\nnhap vao so nguyen n > 0 :");
	scanf("%d",&n);
	if(n <= 0){
		printf("so n > 0 , vui long nhap lai:");
	}
	}while(n<=0);
	i = n;
	do{
	
	a = i % 10;
}while(i/=10);
printf("chu so dau tien cua %d la: %d",n,a);
}


