#include<stdio.h>
#include<string.h>
int main(){
	char string[] = {"Hello my gmail is test123@gmail.com"};
	char chuCai[] = {"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"};
	char chuSo[] = {"1234567890"};
	int number = 0;
	int count = 0;
	int character = 0;
	int length1, length2, length3;
	length1 = strlen(string);
	length2 = strlen(chuCai);
	length3 = strlen(chuSo);
	for(int i=0; i<length1; i++){
		for(int j=0; j<length2; j++){
			if(string[i] == chuCai[j]){
				count++;
			}
			}
	}
	printf("\nSo luong chu cai trong chuoi la: %d", count);
	for(int i=0; i<length1; i++){
		for(int j=0; j<length3; j++){
			if(string[i] == chuSo[j]){
				number++;
			}
		}
	}
	printf("\nSo luong chu so trong chuoi la: %d", number);
	character = length1 - count - number;
	printf("\nSo luong ki tu trong chuoi la: %d", character);
	return 0;
}
