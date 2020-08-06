#include <stdio.h>
#include <string.h> // strlen fonksiyonu için kullandýk
#include "kripto.h"


int main(){
	char word[100],key[100],pass[100],new_key[100];
	
	
	input_word(word);
	input_key(key);
	lowercase(word);
	lowercase(key);

	word_edit(strlen(word),strlen(key),new_key,key,word);	
	print_and_encryption(pass,word,new_key);


	return 0;
}
