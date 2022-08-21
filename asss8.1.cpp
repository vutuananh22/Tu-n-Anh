#include <stdio.h>
int chuvitamgiac(int a , int b,int c){ 
   return a+b+c;                  // tinh chu vi tam giac  p=a+b+c
}
int main(){                    
      int a,b,c;
      printf("nhap a =");
      scanf("%d",&a);
      printf("nhap b =");
      scanf("%d",&b);
      printf("nhap c =");
      scanf("%d",&c);
      int P= chuvitamgiac(a,b,c);      
      printf("\chu vi cua tam giac la: %d",P);
  }
  
