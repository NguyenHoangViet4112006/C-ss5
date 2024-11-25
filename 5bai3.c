#include <stdio.h>
int main(){
	
	int num, sum = 0, i;
	printf("nhap mot so nguyen duong ");
	scanf("%d", &num);
	if(num>0){
		for (i = 1; i <= num; i++){
			sum = (num * (num + 1)) / 2; 	
		}
		printf("tong cacs so tu mot den %d la %d", num, sum);
	}else{
		printf("khong phai so nguyen duong");
	}
	
	return 0;
}
