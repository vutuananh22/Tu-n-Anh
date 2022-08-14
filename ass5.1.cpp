#include <stdio.h>
int main(){
	int n;
	float s = 0;
	do{
		
	printf("nhap vao n=");
	scanf("%d",&n);
    }while(n<1);
        for(int i=1;i<=n;i++){
        	s=s+1.0/i;
        	
		}
		printf("\ntong 1+ 1/2+....+1/%d la : %.2f",n,s);
	

}
