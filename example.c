#include <stdio.h>
#include <stdlib.h>

#include <brotherBox/vigenere.h>

/*
 * Supposed to test the vigenere.h header file
 * Not sure how well it will go...oh well
*/

int main(int argc, char **argv){

	int i;
	FILE *f;
	char *ciphertext, *reversed_key, *new_pl;
	
	char plaintext[] = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
	char keyfile  [] = {"EICTDGYIYZKTHNSIRFXYCPFUEOCKRN"};

	ciphertext = vig_encrypt(plaintext, keyfile);
	reversed_key = vig_reverse_key(keyfile);
	new_pl = vig_decrypt(ciphertext, reversed_key);

	printf("The plaintext is:  \"%s\"\n", plaintext);
	printf("The ciphertext is: \"%s\"\n", ciphertext);
	printf("The rev_key is   : \"%s\"\n", reversed_key);
	printf("The new_pl var is: \"%s\"\n", new_pl);

	return EXIT_SUCCESS;
}
