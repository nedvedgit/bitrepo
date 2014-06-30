#include "funcs.h"
// XOR operation on cc1 and cc2 seqeunce on characters
char * xorOperation(char *cc1, char *cc2) {

	int lengthCC = strlen(cc1);
	char *result = (char *)malloc(sizeof(char)*lengthCC);

	for(int i = 0; i < lengthCC; i++) {
		if(cc1[i] == cc2[i]) {
			result[i] = '0';
		}
		else {
			result[i] = '1';
		}
	}

	return result;
}
