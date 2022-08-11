#include <stdio.h>
int main(){
	int n ;                // n la so nguyen
	printf("nhap so nguyen n=");
	scanf("%d",&n);
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	printf(" tong cac so cua n : %d\n ",sum);
	return 0;
}
