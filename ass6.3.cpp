#include <stdio.h>
int main(){         //nhap
	int n;
	int ary[n];
	printf("nhap n:");
	scanf("%d",&n);
	for(int i=0; i < n ;i++){
		printf("nhap phan tu tu %d =",i);
		scanf("%d",&ary[i]);
		
}
		 printf("noi dung cua mang la= \n ");
        for(int i=0;i<n;i++){
      
        printf("%d", ary[i]);
      printf("\n");
  }
	 	  int i,x,sl=0;
        printf("nhap x\n");
        scanf("%d",&x);
      for(i=0;i<n;i++){
      
                if(ary[i]== x){
				
                    printf("vi tri can tim %d \n",i);
              sl++;
          }
      }
      if(sl==0)
      	printf("khong co phan tu nao\n");
	  }
	 
	
	


