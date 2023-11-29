#include<stdio.h>
int main(){
	int numbers[100]={5,4,3,2,1};
	int *ptr = numbers;
	printf("Day so tang dan: \n");
	for(int i=0; i<5;i++){
		for(int j=i+1;j<5;j++){
			if(*(ptr+i)>*(ptr+j)){
				int temp = *(ptr+i);
				 *(ptr+i)=*(ptr+j);
				 *(ptr+j)=temp;
			}
		}
	}
	printf("\n");
	printf("Day so giam dan: \n");
	for(int i=0; i<5;i++){
		for(int j=i+1;j<5;j++){
			if(*(ptr+i)<*(ptr+j)){
				int temp = *(ptr+i);
				 *(ptr+i)=*(ptr+j);
				 *(ptr+j)=temp;
			}
		}
	}
	for(int i=0; i<5;i++){
		printf("%d\n",numbers[i]);
	}
}
