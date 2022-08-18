#include <stdio.h>
int main(){
	int n ;
	int min , max;
		printf("nhap n :");
	scanf("%d",&n);
	int ary[100];
	
	for(int i=0; i<n;i++){
	
		printf("ary[%d]=",i);
		scanf("%d",&ary[i]);
	}
		max =ary[0];
		for(int i=0; i<n;i++){
			if(ary[i]>max){
				max=ary[i];
			}	
       }
 printf("doan chua tat ca gia tri trong mang la:[-%d.%d]",max,max);
}
