#include <stdio.h>
int main(){
	int i, n, t;
	int max = 0;
	do{
		printf("nhap vao so nguyen duong n = ");
		scanf("%d",&n);
		
	}while(n < 0);
	t = n ;
	if(n == 0);
	max = 0;
	do{
		i = n % 10;
		if(i > max){
			max = i;
		}	

  }	while(n/=10);
	printf("\n la chu so lon nhat trong %d la: %d",t,max);
}
