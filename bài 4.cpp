#include<stdio.h>

int main (){
	int array[3][2]={{1,2},{3,4},{5,6}};
	int max = array[0][0];
	printf ("cac phan tu trong mang\n");
		for (int i = 0;i < 3;i++){
	      for (int j = 0;j < 2;j++){
		    printf ("%d  \n",array[i][j]);	      	
			if (array[i][j] > max) {
                max = array[i][j];
            }
		}
	}
	 printf("phan tu lon nhat trong mang la: %d\n", max);
	return 0;
}
