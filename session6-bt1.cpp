#include<stdio.h>

int main(){
	int n,sum=0;
	printf("nhap vao 5 so nguyen n \n");
	
	for(int i = 0; i < 5; i++){
		scanf("%d",&n);
		
			if(n % 2 != 0){
			sum += n;
		}
	}
	
	printf("Tong cac so le la: %d",sum);
	return 0;
}
