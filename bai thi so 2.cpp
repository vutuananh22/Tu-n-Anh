#include <stdio.h>
 
int main(){
    int n, a;
    printf("nhap vao n=");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n;i++){
    	printf("ary[%d] = ",i);
		scanf("%d",&arr[i]);
     }
     // gia tri duoc dao nguoc
     for(int i=n-1; i>=0;i--){       
     	printf("Cac gia tri dao nguoc la : %d ",arr[i]);
	 }
	 return 0;
}

