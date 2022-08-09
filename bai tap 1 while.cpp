#include <stdio.h>
int main(){
	int a = 1;              // a la so nguyen
	int n;
	int y = 0;
	printf("nhap n=");
	scanf("%d",&n);
	while(a<n){
		// yes 
		printf("%d so le\n",a);
		a += 2;
		y++;
     }
        // no
        printf("a=%d",a);
}
