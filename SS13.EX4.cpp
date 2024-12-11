#include<stdio.h>
#include<string.h>
int main(){
	char string[50] = {"Con ca vang boi trong be nuoc"};
	int length;
	int count = 0, KiTu = 0;
	printf("Nhap ki tu can tim: ");
	scanf("%c", &KiTu);
	length = strlen(string);
	for(int i=0; i<length; i++){
		if(string[i] == KiTu){
			count++;
		}
	}
	printf("So lan ki tu %c xuat hien trong chuoi la: %d", KiTu, count);
	return 0;
}
