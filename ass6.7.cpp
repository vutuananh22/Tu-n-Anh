#include <stdio.h>
int main(){
	int n; 
	int dem = 0;
	int sum=0;
	printf("nhap vao so nguyen n= ");
	scanf("%d",&n);
	int a[n];
	for(int i =0; i<n; i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(int i =0;i<n; i++){
		dem= dem+i;
		sum= dem +a[i];
	}
	printf("\nchuoi so duong co tong lon nhat la : %d",sum);
}
