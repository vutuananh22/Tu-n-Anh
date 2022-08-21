#include <stdio.h>
#include <math.h>
int  chuvitamgiac(int a,int b,int c){
	int x;     // x la chu vi
	x=a+b+c;
	return x;
}
  float dientichtamgiac(int a,int b,int c){      // tinh dien tich tam giac
	float x =(float) chuvitamgiac(a,b,c)/2.0;
      float d = sqrt(x*(x - a)*(x - b)*(x - c));     
return d;       // d la dien tich 
}
int main(){
	int a,b,c;
      printf("nhap a =");
      scanf("%d",&a);
      printf("nhap b =");
      scanf("%d",&b);
      printf("nhap c =");
      scanf("%d",&c); 
      float s = dientichtamgiac(a,b,c);        // s la dien tich 
      printf("\ndien tich tam giac la: %f",s);
}
