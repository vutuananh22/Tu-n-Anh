#include <stdio.h>
int main(){
	int n, dem= 1;
	int sum = 0;
	int tbl;
		printf("nhap n so nguyen :");
	scanf("%d",&n);
	int ary[n];
	
	for(int i=0; i<n;i++){
	
		printf("ary[%d]=",i);
		scanf("%d",&ary[i]);
	
	   sum= sum + ary[i];
		dem++;
		
	tbl= sum /dem;

}
		printf("TBC so le= %d\n",tbl);
}
	
