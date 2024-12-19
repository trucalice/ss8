#include <stdio.h>

int main() {
	int n,sum,x=0;
	int matrix[3][2]={{1,2},{3,4},{5,6}};	
	printf("ma tran la: \n");
		for (int i=0;i<3;i++){
			for (int j=0;j<2;j++) {
				printf("%d ",matrix[i][j]);
			}
			printf("\n");
		}
		printf("\n");	
		printf("cac phan tu tren duong cheo chinh la: \n");
		for (int i=0;i<3;i++){
			for (int j=0;j<2;j++) {			
				if( i==j) {
					printf("%d ",matrix[i][j]);
						x+=matrix[i][j];
				}else {
					printf("  ");
				}
			}		
			printf("\n");
	}
	printf("tong cac so nam tren duong cheo chinh: %d",x);
	return 0;
}
