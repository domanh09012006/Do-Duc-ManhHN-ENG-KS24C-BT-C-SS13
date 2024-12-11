#include<stdio.h>
#include<string.h>
int main(){
	char string[50];
	int length;
	printf("Nhap ki tu vao chuoi: ");
	fgets(string, 50, stdin);
	printf("Chuoi ki tu vua nhap la: %s", string);
	length = strlen(string);
	printf("Chuoi ki tu vua nhap co do dai la: %d", length);
	return 0;
	
}
