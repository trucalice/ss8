#include <stdio.h>

int i, j;

int main() {
    int array[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int n, tim_thay = 0;

    printf("hay nhap mot phan tu bat ky: \n");
    scanf("%d", &n);

    printf("cac phan tu trong mang");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", array[i][j]);
            if (array[i][j] == n) {
                printf("\nvi tri phan tu %d trong mang la dong %d, cot %d\n", n, i, j);
                tim_thay = 1; 
            }
        }
        printf("\n");
    }
    if (!tim_thay) {
        printf("phan tu %d khong ton tai trong mang\n", n);
    }
    return 0;
}

