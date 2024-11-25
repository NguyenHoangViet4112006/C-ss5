#include <stdio.h>

int main() {
    int num;
    printf("nhap mot so nguyen duong tu 1 den 10 ");
    scanf("%d", &num);
    if (num >= 1 && num <= 10){
        printf("bang cu chuong la", num);
        for (int i = 1; i <= 10; i++){
            printf("%d x %d = %d", num, i, num * i);
       }
    } else {
        printf("so khong hop le");
    }

    return 0;
}

