#include<stdio.h>
int sum(int *a,int *b){
	int summer = 0;
	for(int i = *a; i <= *b; i++){
		summer+=i;
	}
	return summer;
}
int main() {
	int start;
	printf("Nhap so bat dau: ");
	scanf("%d", &start);
	int end;
	printf("Nhap so ket thuc: ");
	scanf("%d", &end);
	printf("tong cac gia tri bang: %d",sum(&start, &end));
	
}
