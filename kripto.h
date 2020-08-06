#ifndef kripto_h
#define kripto_h

void input_word(char *arr);
void input_key(char *arr);
int new_char(int word_letter,int key_letter);
int lowercase(char *arr);
void word_edit(int len_word,int len_key,char *new_key,char *key,char *word);
void print_and_encryption(char *pass,char *word,char *new_key);

#endif
