#include <stdio.h>
int main(){
	int a = 6;
	int n; 
	int y=0;       
	printf("nhap vao n=");
	scanf("%d",&n);

    while(a<n){
		// yes 
		printf("%d chia het cho 2 va 3\n",a);
		y++;
		a += 6;
	}
	// no
	printf("a=%d",a);
}
