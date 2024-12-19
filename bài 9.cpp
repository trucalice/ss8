#include <stdio.h>

int main() {
	int carray[9]={1,2,2,4,3,2,3,2,9};
	int n=9,check=0,save;
	printf("cac phan tu trong mang: \n");
		for (int i=0;i<9;i++){
				printf("%d ",carray[i]);
		}
		printf("\n");
		for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (carray[i] == carray[j]) {
                count++;
            }
        }
        if (count > check) {
            check= count;
            save = carray[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat la: %d\n", save);
	return 0;
}
		
