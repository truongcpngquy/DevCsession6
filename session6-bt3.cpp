#include<stdio.h>

int main(){
	int matKhau=123456,n;
	printf("moi ban nhap mat khau: ");
	scanf("%d",&n);
	if(n==matKhau){
		printf("Mat khau dung");
	}else{
		printf("Mat khau sai");
	}
	return 0;
}
