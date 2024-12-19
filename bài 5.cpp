#include <stdio.h>

int main() {
	int m,n;
	printf("nhap so hang: ");
	scanf("%d",&m);
	printf("nhap so cot: ");
	scanf("%d",&n);
	int matrix[m][n];
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++) {
			printf("nhap gia tri matrix[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("ma tran la: \n");
		for (int i=0;i<m;i++){
			for (int j=0;j<n;j++) {
				printf("%d ",matrix[i][j]);
			}
			printf("\n");
		}
	
	return 0;
}

