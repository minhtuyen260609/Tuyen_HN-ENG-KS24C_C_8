#include<stdio.h>
int main(){
	int mang[5][7]={{1,2,3,4,5},{6,7,8,9,10,11,12}};
	int i, j, max=0;
	for(i=0;i<5;i++){
		for(j=0;j<7;j++){
			if(mang[i][j]>max){
				max=mang[i][j];
			}
		}
	}
	printf("phan tu lon nhat trong mang la: %d", max);
	return 0;
}

