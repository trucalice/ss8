#include<stdio.h>

int main(){
	int m,n,sum=0;
	printf("Hay nhap so hang: ");
	scanf("%d",&m);
	printf("Hay nhap so cot: ");
	scanf("%d",&n);
	int matrix[m][n];
	for(int i = 0 ; i<m ; i++ ){
		for(int j = 0 ; j<n ; j++ ){
			printf("Nhap matrix[%d][%d] : ",i,j);
			scanf("%d", &matrix[i][j]);
		}	
	}
	for (int j = 0; j < n; j++) {
        sum += matrix[0][j];
    }
     if (m > 1) {
        for (int j = 0; j < n; j++) {
            sum += matrix[m - 1][j];
        }
    }
    for (int i = 1; i < m - 1; i++) {
        sum += matrix[i][0];
    }
    if (n > 1) {
        for (int i = 1; i < m - 1; i++) {
            sum += matrix[i][n - 1];
        }
    }
    printf("\nma tran vua nhap:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\ntong cac phan tu tren duong bien cua ma tran là: %d\n", sum);
	return 0;	
}
