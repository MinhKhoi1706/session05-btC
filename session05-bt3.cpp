#include<stdio.h>

int main(){

	int n = 0;
	int sum = 0;
	printf("nhap vao so nguyen duong n");
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++){
	sum += i;
	
}
	printf("tong cac so tu 1 den so duoc nhap la: %d", sum);
	
	return 0;
}
