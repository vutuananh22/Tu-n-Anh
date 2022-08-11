#include <stdio.h>

#include <math.h>

int main() {
	int n , tong = 0;

		printf("Nhap n: ");
		scanf("%d", &n);
		
		
	for( int i= 1;i<=n;i++)
	
	if( n % i == 0){
	
	printf("\n%d",i);
	
	tong = tong + i;
	
}

  printf("\n  tong cua ca uoc %d la : %d",n,tong);
    

}

	
	
