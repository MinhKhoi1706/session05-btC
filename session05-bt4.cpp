#include <stdio.h>

int main() {
    int n;

    printf("Nhap vao mot so nguyen duong tu 1 den 10: ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("Bang cuu chuong cua 1:\n");
            for (int i = 1; i <= 10; i++) {
                printf("1 x %d = %d\n", i, 1 * i);
            }
            break;
        case 2:
            printf("Bang cuu chuong cua 2:\n");
            for (int i = 1; i <= 10; i++) {
                printf("2 x %d = %d\n", i, 2 * i);
            }
            break;
        case 3:
            printf("Bang cuu chuong cua 3:\n");
            for (int i = 1; i <= 10; i++) {
                printf("3 x %d = %d\n", i, 3 * i);
            }
            break;
        case 4:
            printf("Bang cuu chuong cua 4:\n");
            for (int i = 1; i <= 10; i++) {
                printf("4 x %d = %d\n", i, 4 * i);
            }
            break;
        case 5:
            printf("Bang cuu chuong cua 5:\n");
            for (int i = 1; i <= 10; i++) {
                printf("5 x %d = %d\n", i, 5 * i);
            }
            break;
        case 6:
            printf("Bang cuu chuong cua 6:\n");
            for (int i = 1; i <= 10; i++) {
                printf("6 x %d = %d\n", i, 6 * i);
            }
            break;
        case 7:
            printf("Bang cuu chuong cua 7:\n");
            for (int i = 1; i <= 10; i++) {
                printf("7 x %d = %d\n", i, 7 * i);
            }
            break;
        case 8:
            printf("Bang cuu chuong cua 8:\n");
            for (int i = 1; i <= 10; i++) {
                printf("8 x %d = %d\n", i, 8 * i);
            }
            break;
        case 9:
            printf("Bang cuu chuong cua 9:\n");
            for (int i = 1; i <= 10; i++) {
                printf("9 x %d = %d\n", i, 9 * i);
            }
            break;
        case 10:
            printf("Bang cuu chuong cua 10:\n");
            for (int i = 1; i <= 10; i++) {
                printf("10 x %d = %d\n", i, 10 * i);
            }
            break;
        default:
            printf("So nhap vao khong hop le.\n");
            break;
    }

    return 0;
}

