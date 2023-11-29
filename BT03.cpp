#include<stdio.h>
#include<string.h>

int main() {
    int str[100];
    int *ptr = str;
    int str2[100];
    int *ptr2 = str2;
    int str3[100];
    int *ptr3 = str3;
    int str4[100];
    int *ptr4 = str4;
     
    do {
        printf("\n*********MENU********\n");
        printf("1. Nh?p vào m?ng\n");
        printf("2. In ra m?ng\n");
        printf("3. Sao chép m?ng vào m?ng khác\n");
        printf("4. Nh?p vào m?ng khác, d?i ch? 2 m?ng v?i nhau\n");
        printf("5. Ð?o ngu?c m?ng\n");
        printf("6. Nh?p vào 1 ký t?, tìm ki?m ký t? dó trong m?ng\n");
        printf("7. Thoát\n");
        int choice;
        printf("\nNh?p l?a ch?n c?a b?n: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                for (int i = 0; i < 5; i++) {
                    printf("Nh?p ph?n t? th? [%d] c?a m?ng: ", i);
                    scanf("%d", &str[i]);
                }
                break;
            case 2:
                for (int i = 0; i < 5; i++) {
                    printf("%d\t", *(ptr + i));
                }
                break;
            case 3:
                for (int i = 0; i < 5; i++) {
                    *(ptr2 + i) = *(ptr + i);
                }
                for (int i = 0; i < 5; i++) {
                    printf("\n%d", *(ptr2 + i));
                }
                break;
            case 4: 
            	for (int i = 0; i < 5; i++) {
                    printf("Nh?p ph?n t? th? [%d] c?a m?ng: ", i);
                    scanf("%d", &str3[i]);
                }
                for (int i = 0; i < 5; i++) {
                    *(ptr4 + i) = *(ptr + i);
                }
                for (int i = 0; i < 5; i++) {
                    *(ptr + i) = *(ptr3 + i);
                }
                for (int i = 0; i < 5; i++) {
                    *(ptr3 + i) = *(ptr4 + i);
                }
                for(int i=0; i<5; i++){
                	printf("%d\n",str3[i]);
				}
				 for(int i=0; i<5; i++){
                	printf("%d\n",str[i]);
				}
                break;
            case 5: 
            	for(int i=4; i>=0;i--){
            		printf("%d\t",*ptr);
            		*(ptr--);
				}
            default:
                printf("L?a ch?n không h?p l?!\n");
                break;
        }
    } while (1 == 1);

    return 0;
}
