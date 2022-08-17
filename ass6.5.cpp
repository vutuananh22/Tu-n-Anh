#include <stdio.h>
int main(){
	int n;
	
	int ary[n];
	int min=0;
	printf("nhap vao n = ");
	scanf("%d",&n);
	for(int i=0; i<n;i++){
		printf("ary[%d]= ",i);
		scanf("%d",&ary[i]);
		if(ary[i]>0){
			
	
		}
	}
	
	if(min!=0){
	
		for(int i = 0; i<n ;i++){
			if((ary[i]>0) && (min<ary[i])){
			min=ary[i];
			
		}
		}
	}
	
	printf("\nso duong nho nhat la :%d ",min,n);
	
     	
     }

