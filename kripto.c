#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kripto.h"

void input_key(char *arr){ // þifreleyeceði kelimeyi alýr
	printf("Enter Key: ");
	scanf("%s",arr);
}
void input_word(char *arr){ // þifrelenecek kelimeyi alýr
	printf("Enter Word: ");
	scanf("%s",arr);
}
int new_char(int word_letter,int key_letter){ //  kelime ile þifrenin ilk harfini yeni bir harf olarak return eder
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
/* Kelimelerin boyutlarýný parametre olarak alýr. Eger aynýysa "key" i "new_key" e kopyalar
, ayný degilse kelimelerin uzunlugu esit olana kadar "key" i "new_key" e kopyalar.
 */
void word_edit(int len_word,int len_key,char *new_key,char *key,char *word){ 
	int i=0,j=0;
	int count = len_key;
	if(strlen(word)>strlen(key)){
		while(strlen(word)!=j){ // burasý kelime boyutu farklýysa çalýþýr
			if(i == strlen(key)){
			i=0;
			}
			new_key[j] = key[i];
			i++;
			j++;
		}
	}
	else{ // kelimelerin boyutu aynýysa çalýþýr
		i=0;
		while(count > 0){
			new_key[i]=key[i];
			i++;
			count--;
		}
	}
}
/*kelimenin þifrelenmiþ hali pass arrayine aktarýlýr*/
void print_and_encryption(char *pass,char *word,char *new_key){
	int i;
	for(i=0;i<strlen(word);i++){
		pass[i]=new_char(word[i]-65,new_key[i]-65); // kelimelerin ilk harfleri alýnarak new_char fonksiyonuna gönderilir
	}
	printf("Pass : %s\n",pass);	
}
