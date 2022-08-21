#include <stdio.h>
int ucln(int e, int f){              // uoc chung lon nhat
	if(e==f){
		return e;                  // dieu kien kiem tra
	}else{
		return f;
	}
	while(e!=f){                   // dung vong lap while
		if(e>f){                   // dung thi e lon
			e=e-f;                 // sai thi f lon
		}else{
			f=f-e;
		}return f;
	}
}
int bcnn(int e,int f ){          // tinh bcnn
	int b= e*f;
	int nhonhat= b/ucln(e,f);           
	return nhonhat;
}
int main(){
	int e,f;
	printf("nhap e =");
	scanf("%d",&e);
	printf("nhap f =");
	scanf("%d",&f);
	int a=bcnn(e,f);                          
	printf("\nboi chung nho nhat %d,%d la : %d",e,f,a);
}
