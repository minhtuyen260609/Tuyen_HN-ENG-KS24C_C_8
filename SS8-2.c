#include<stdio.h>
int main(){
	int n[5]={1,2,3,4,5}, i, a;
	printf("moi nhap phan tu can tim: ");
	scanf("%d", &a);
	for(i=0; i<5;i++){
		if(n[i]==a){
			printf("vi tri phan tu trong mang la: %d", n[i]); 
		} 
	}
	if(a==4){
		printf("phan tu khong ton tai trong mang");
	} 
	 
	return 0; 
} 
