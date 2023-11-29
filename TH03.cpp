#include<stdio.h>
#include<string.h>
int characters(char *string,int *b){
	int count = 0;
	for(int i=0; i<=*b; i++){
		count++;
	}
	return count;
}
int main(){
	char str[100];
	printf("Nhap 1 chuoi: ");
	scanf("%s", str);
	int length = strlen(str);
	printf("trong chuoi co %d ki tu ",characters(str,&length));	
}
