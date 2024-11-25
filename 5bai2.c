#include <stdio.h>

int main() {
    int num = 2;
    int num1;
    do {
        printf("nhap mot so bat ky ");
        scanf("%d", &num1);

        if (num1 != num) {
            printf("so nhap khong dung.\n");
        }
    } while (num != num1);

    printf("ban da nhap dung so.\n", num);

    return 0;
}

