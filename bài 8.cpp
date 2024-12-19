#include <stdio.h>

int main() {
	int n,sum,x=0;
	int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	printf("ma tran la: \n");
		for (int i=0;i<3;i++){
			for (int j=0;j<3;j++) {
				printf("%d ",matrix[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	printf("cac phan tu tren duong cheo chinh la: \n");
		for (int i=0;i<3;i++){
			for (int j=0;j<3;j++) {			
				if( i+j ==2) {
					printf("%d ",matrix[i][j]);
						sum+=matrix[i][j];
				}else {
					printf("  ");
				}
			}		
			printf("\n");
	}
	printf("tong cac so nam tren duong cheo chinh: %d",sum);
	return 0;
}
	
