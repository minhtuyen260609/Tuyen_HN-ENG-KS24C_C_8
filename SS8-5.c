#include<stdio.h>
int main(){
	int cows, cols, i, j, sum=0;
	printf("moi ban nhap so hang: ");
	scanf("%d", &cows);
	printf("moi ban nhap so cot: ");
	scanf("%d", &cols);
	int numbers[cows][cols];
	for(i=0;i<cows;i++){
		for(j=0;j<cols;j++){
			printf("numbers[%d][%d]=", i,j);
			scanf("%d", &numbers[i][j]);
		}
	}
	for(j=0;j<cols;j++){
		sum+=numbers[0][j];
	}
	for(j=0;j<cols;j++){
		sum+=numbers[cows-1][j];
	}
	for(i=1;i<cows-1;i++){
		sum+=numbers[i][0];
	}
	for(i=1;i<cows-1;i++){
		sum+=numbers[i][cols-1];
	}
	printf("tong cac phan tu duong bien la: %d ", sum);
	return 0;
}

