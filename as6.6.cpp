#include <stdio.h>
int main(){
	int n ;
	int dem = 0;
     int s = 0;
     int j= 0;
	printf("nhap so nguyen duong n = ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
		for(int i=0; i<n; i++){
	
		 	dem ++;
		 	s+=a[i];
	i = j;
}
	printf("\nso duong lien tiep nhieu nhat la : %d",s);
}


