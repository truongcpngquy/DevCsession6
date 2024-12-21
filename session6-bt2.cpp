#include<stdio.h>

int main(){
	int n,soChan=0,soLe=0 ;
	printf("nhap vao 5 so nguyen n\n");
	
	for(int i=0;i<5;i++){
		scanf("%d",&n);
		
			if(n%2==0){
			soChan++;
		}else{
			soLe++; 
		} 
	}
	
		printf("So luong so chan la: %d\n",soChan); 
		printf("So luong so le la: %d\n",soLe);
	return 0;
}
