#include <stdio.h>

int main(){
	
		int num, i;
    printf("cac bang cuu chuong tu 1 den 9\n");
    
    for(num =1; num <= 9; num++){
    	printf("bang cuu chuong %d\n", num);
        for (i = 1; i <= 10; i++) 
            printf("%d x %d = %d\n", num, i, num * i);
	}
	
	return 0;
}



