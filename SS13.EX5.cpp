#include<stdio.h>
#include<string.h>
int main(){
	char string[50];
	int length;
	int count = 0;
	printf("Nhap ki tu vao chuoi: ");
	fgets(string, 50, stdin);
	length = strlen(string);
	for(int i=0; i<length; i++){
		if((string[i-1] == ' ' && string[i] != ' ' ) || (string[i] != ' '  && string[i-1] == '\0')){
			count++;
		}
	}
	printf("So tu trong chuoi la: %d", count);
	return 0;
}
