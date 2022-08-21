#include <stdio.h>
#include <math.h>
float ucln(int e, int f){            // tinh uoc chung lon nhat
	if(e==f){              // dieu kien kiem tra e hay f lon hon
		return e;
	}else{
		return f;
	}
	while(e!=f){             // dung vong lap while                       
		if(e>f){
			e=e-f;
		}else{                 // if dung thi la e 
			f=f-e;             // sai thi la f
		}return f;
	}
}
int main(){                      // nhap va in 
	int e,f;
	printf("nhap e =");
	scanf("%d",&e);
	printf("nhap f =");
	scanf("%d",&f);
	int a=ucln(e,f);             // a la ket qua ucln
	printf("\nuoc chung lon nhat %d,%d la : %d",e,f,a);
}

