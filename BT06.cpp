#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	char *ptr= str;
	char str2[100];
	char *ptr2=str2;
	char str3[100];
	char *ptr3=str3;
	char str4[100];
	char *ptr4=str4;
	int result;
	int choice;
	do
	{
		printf("\n********MENU********");
		printf("\n1. Nh?p vào chu?i");
		printf("\n2. In ra chu?i");
		printf("\n3. Sao chép chu?i vào m?t chu?i khác");
		printf("\n4. Nh?p vào chu?i khác, ti?n hành thêm chu?i dó vào chu?i ban d?u");
		printf("\n5. Nh?p vào chu?i khác, so sánh chu?i dó v?i chu?i ban d?u");
		printf("\n6. In ra chu?i d?o ngu?c");
		printf("\n7. Thoát");
		printf("\nNhap lua chon cua ban: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
                printf("Nhap 1 chuoi: ");
                scanf("%s",&str);
                break;
            case 2:
                printf("%s",str);
                break;
            case 3:
				for (int i = 0; i < 5; i++) {
                    *(ptr2 + i) = *(ptr + i);
                }
                printf("%s",str2);
                break;
            case 4: 
            	printf("Nhap vao chuoi moi: ");
            	scanf("%s", &str3);
            	strcat(str,str3);
            	printf("\nChuoi sau khi them la: %s",str);
            	break;
            case 5:
                printf("\nhap vao chuoi moi: ");
                scanf("%s",&str4);
                result = strcmp(str2, str4);
    			if (result == 0) {
        			printf("Hai chuoi bang nhau.\n");
    			} else if (result < 0) {
        			printf("Chuoi thu nhat lon chuoi thu hai.\n");
    			} else {
        			printf("Chuoi thu hai be hon chuoi thu nhat.\n");
    			}
    			break;
    		case 6:
    			for(int i=strlen(str);i>=0;i--){
    				printf("%c",str[i]);
				}
            case 7:
                printf("\nThoat\n");
                break;
            default:
                printf("Lua chon khong hop ly\n");   
		}
	}while(1==1);
}
