#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kripto.h"

void input_key(char *arr){ // �ifreleyece�i kelimeyi al�r
	printf("Enter Key: ");
	scanf("%s",arr);
}
void input_word(char *arr){ // �ifrelenecek kelimeyi al�r
	printf("Enter Word: ");
	scanf("%s",arr);
}
int new_char(int word_letter,int key_letter){ //  kelime ile �ifrenin ilk harfini yeni bir harf olarak return eder
	return (word_letter+key_letter)%26 +65;
}
int lowercase(char *arr){ // kelimede kucuk harf varsa buyuk harfe cevirir
	int i;
	for(i=0;i<strlen(arr);i++){
		if(arr[i] > 90){  
			arr[i] = arr[i] - 32; // kucuk harfi buyuk harfe cevirir
		}
	}

}
/* Kelimelerin boyutlar�n� parametre olarak al�r. Eger ayn�ysa "key" i "new_key" e kopyalar
, ayn� degilse kelimelerin uzunlugu esit olana kadar "key" i "new_key" e kopyalar.
 */
void word_edit(int len_word,int len_key,char *new_key,char *key,char *word){ 
	int i=0,j=0;
	int count = len_key;
	if(strlen(word)>strlen(key)){
		while(strlen(word)!=j){ // buras� kelime boyutu farkl�ysa �al���r
			if(i == strlen(key)){
			i=0;
			}
			new_key[j] = key[i];
			i++;
			j++;
		}
	}
	else{ // kelimelerin boyutu ayn�ysa �al���r
		i=0;
		while(count > 0){
			new_key[i]=key[i];
			i++;
			count--;
		}
	}
}
/*kelimenin �ifrelenmi� hali pass arrayine aktar�l�r*/
void print_and_encryption(char *pass,char *word,char *new_key){
	int i;
	for(i=0;i<strlen(word);i++){
		pass[i]=new_char(word[i]-65,new_key[i]-65); // kelimelerin ilk harfleri al�narak new_char fonksiyonuna g�nderilir
	}
	printf("Pass : %s\n",pass);	
}
