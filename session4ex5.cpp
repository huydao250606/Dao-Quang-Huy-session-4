#include<stdio.h>

int main(){
	int num1, num2, num3;
	printf("nhap 3 so nguyen: ");
	scanf("%d %d %d",&num1,&num2,&num3);
	if((num3>num1 && num3<num2) || (num3>num2 && num3<num1)){
		printf("so %d nam trong khoang giua %d va %d\n",num3, num1, num2);
	}else{
		printf("so %d khong nam trong khoang giua %d va %d\n", num3, num1,num2);
	}
	return 0;
	
}
