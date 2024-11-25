#include <stdio.h>

int main() {
    int num1, num2, choice;
    float result;

    while (1) {
        printf("1. tong 2 so\n");
        printf("2. hieu 2 so\n");
        printf("3. tich 2 so\n");
        printf("4. thuong 2 so\n");
        printf("5. thoat\n");
        printf("lua chon cua ban ");
        scanf("%d", &choice);
        if (choice == 5) {
            printf("chuong trinh ket thuc");
            break;
        }
        printf("nhap so thu nhat ");
        scanf("%d", &num1);
        printf("nhap so thu hai ");
        scanf("%d", &num2);
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("tong cua %d va %d la %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("hieu cua %d va %d la %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("tich cua %d va %d la %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = (float)num1 / num2;
                    printf("thuong cua %d va %d la %.2f\n", num1, num2, result);
                } else {
                    printf("khonh hop le");
                }
                break;
            default:
                printf("khong hop le");
                break;
        }
    }

    return 0;
}

