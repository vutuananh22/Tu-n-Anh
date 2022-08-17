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
		
	}
	for (int i=n-1; i<n;i--){
		if(ary[i]%2!=0){
			return ary[i];
			break;
		}
		printf("so le cuoi cung la:%d\n ",i);
	}
	return -1;
}
