#include<stdio.h>
#include<string.h>
int main(){
	char string[50] = {"Hom nay la ngay 11/12/2024"};
	char chuCai[100] = {"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPLKJHGFDSAZXCVBNM"};
	int length, length2;
	int count = 0;
	length = strlen(string);
	length2 = strlen(chuCai);
	for(int i=0; i<length; i++){
		for(int j=0; j<length2; j++){
			if(string[i] == chuCai[j]){
				count++;
			}
		}
	
	}
	printf("Chuoi ki tu co so ki tu chu cai la: %d", count);
	return 0;
	
}
