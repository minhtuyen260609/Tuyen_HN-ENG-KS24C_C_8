#include<stdio.h>
int main(){
	int numbers[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i, sum=0;
	printf("cac phan tu tren duong cheo chinh la: ");
	for(i=0;i<3;i++){
		sum+=numbers[i][i];
		printf(" %d ", numbers[i][i]);
	}
	printf("\ntong cac phan tu tren duong cheo chinh la: %d", sum);
	return 0;
}

