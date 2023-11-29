#include<stdio.h>
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int hieu(int *a, int *b){
	int result = *a - *b;
	return result;
}
int main(){
	int n1=20;
	int n2=10;
	printf("Hieu truoc khi doi cho la: %d\n",hieu(&n1,&n2));
	swap(&n1,&n2);
	printf("Hieu sau khi doi cho la: %d",hieu(&n1,&n2));
	return 0;
}
