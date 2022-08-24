#include <stdio.h>
int main(){
	int n;
	float sum = 0;
	do{
		
	printf("nhap vao n=");
	scanf("%d",&n);
	if(n<1){
		printf("so nhap vao khong hop le vui long nhap lai!");
	}
    }while(n<1);
        for(int i=1;i<=n;i++){
        	sum=sum+1.0/i;
		}
		printf("\nS = 1 + 2 + 1/3 +....+1/%d la : %.2f",n,sum);
	
     return 0;
}
