#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int t;
	printf("nhap t=");
    scanf("%d",&t);
	switch(t){
		case 1:t=0;break;
		case 2:t=31;break;
		case 3:t=59;break;
		case 4:t=90;break;
		case 5:t=120;break;
		case 6:t=151;break;
		case 7:t=181;break;
		case 8:t=212;break;
		case 9:t=242;break;
		case 10:t=273;break;
		case 11:t=303;break;
	    case 12:t=334;break;}
	    int b=n+t;
	    printf("so ngay trong nam la %d",b);
       switch(b%7){
     
    	case 1:n=2;
    		printf("\nNay la ngay thu hai");break;
    	case 2:n=3;
    		printf("\nNay la thu ba");break;
    	case 3:n=4;
		    printf("\nNay la thu tu");break;
		case 4:n=5;
			printf("\nnay la thu nam");break;
		case 5:n=6;
			printf("\nnay la thu sau");break;
		case 6:n=7;
			printf(" \nnay la thu bay ");break;
		case 7:n=1;
			printf(" \nnay la chu nhat");break;}
    	int a=n;
    	if (a==1){
		
	
    		printf(" hom nay la thu hai",n);}	
	
}

// n la nay // t la thang
// b la tong so ngay cong voi thang
// a=n la so ngay trong tuan
// b%7 tong so ngay trong nam bang 7 ngay trong mot tuan 
// a==1 la 1 ngay trong tuan bang thu may









	


