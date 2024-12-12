#include<stdio.h>
int main(){
	char word[100]="Hello my gmail is test1234@gmail.com";
	int length=strlen(word);
	int count=0,number=0; 
	for(int i=0;i<length;i++){
		if(word[i]>='0'&&word[i]<='9'){
			number++; 
		} 
		if((word[i]>='a'&& word[i]<='z')||(word[i]>='A' && word[i]<='Z')){
			count++; 
		} 
	}
	int special= length - count - number; 
	printf("chuoi co %d chu cai\n",count);
	printf("chuoi co %d so\n",number);
	printf("chuoi co %d ky tu dac biet",special) ;
	return 0; 
		
} 
