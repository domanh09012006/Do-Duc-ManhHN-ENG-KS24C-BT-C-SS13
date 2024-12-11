#include<stdio.h>
#include<string.h>
int main(){
	char string[50];
	int length;
	printf("Nhap ki tu vao chuoi: ");
	fgets(string, 50, stdin);
	length = strlen(string);
	for(int i=0; i< length/2; i++){
		char temp = string[length - i - 1];
		string[length - i - 1] = string[i];
		string[i] = temp;
	}
	printf("Chuoi sau khi dao nguoc la: ");
	for(int i=0; i<length; i++){
		printf("%c", string[i]);
	}
	return 0;
	
}
	
	
	
	
	
	
	
	
	
	
	
