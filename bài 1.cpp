#include<stdio.h>

int main (){
	int array[3][2]={{1,2},{3,4},{5,6}};
	printf ("cac phan tu trong mang\n");
		for (int i = 2;i >= 0;i--){
		for (int j = 1;j >= 0;j--){
		printf ("%d  ",array[i][j]);
		}
	}
	return 0;
}
