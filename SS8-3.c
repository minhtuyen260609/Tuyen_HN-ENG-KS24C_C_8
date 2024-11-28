#include<stdio.h>
int main(){
	int n,i,j;
	printf("moi nhap vao mot so nguyen: ");
	scanf("%d", &n);
	int numbers[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			numbers[i][i]=n;
			printf("%3d", numbers[i][i]);	
		} 
		printf("\n"); 
	}
	return 0; 
} 
