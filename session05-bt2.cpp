#include<stdio.h>

int main(){

	int number = 76;
	int input_number;
	
	printf("moi ban nhap vao 1 so");
	scanf("%d",&input_number);
	
	while (input_number != number) {
        
		printf("Sai so, hay nhap lai: ");
        scanf("%d", &input_number);  
    }
    
    printf("Ban da nhap dung so %d\n", number);
	
	return 0;
}
