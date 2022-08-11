#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	printf("nhap a , b > 0 =");
	scanf("%d%d",&a,&b);
	
	if(a>=0 && b>=0){
		if(a==0 && b==0){
			printf(" khong ton tai UCLN,BCNN\n");
		}else if( a == 0 || b == 0 ){
			printf(" khong có UCLN,BCNN= %d",(a==0)? b:a);
		}else{    // a , b > 0
		int boichung = a*b;          
		while(a != 0) {
				int x = a;
				a = b % a;
				b = x;
			}
			
			printf("UCLN = %d\n", b);
			printf("BCNN = %d\n", boichung / b);
		
		}
	}else{
	printf(" nhap a, b >0");
		
		
	}
	return 0;
}
