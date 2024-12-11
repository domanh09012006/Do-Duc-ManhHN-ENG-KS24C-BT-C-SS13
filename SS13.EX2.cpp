#include<stdio.h>
#include<string.h>
int main(){
	char string[50];
	int length;
	printf("Nhap ki tu vao chuoi: ");
	fgets(string, 50, stdin);
	length = strlen(string);
	printf("Chuoi ki tu vua nhap la: ");
	for(int i=0; i<length; i++){
		printf("%c ", string[i]);
	}
	return 0;
	
}
