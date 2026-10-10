#include <stdio.h>
//ulgc{rev3rse_eng!n3ering_1s_fuN}
int encflag(char enc[], char flag[], int seed);

int main() {
	char enc_bytes[] = {'x', 'a', 'j', 'n', 'v', 0x7f, 'h', '{', '>', 0x7f, '~', 'h', 'R', 'h', 'c', 'j', ',', 'c', '>', 'h', 0x7f, 'd', 'c', 'j', 'R', '<', '~', 'R', 'k', 'x', 'C', 'p'};
	
	char flag_bytes[33];
	int seed = 13;
	
	printf("Enter the flag: ");
	fgets(flag_bytes, sizeof(flag_bytes), stdin);
	
	int result = encflag(enc_bytes, flag_bytes, seed);

	if (result) { 
		printf("You got it!\n");
		printf("Flag: %s\n", flag_bytes);
	}
	else
		printf("Oops that wasn't it ;)\n");
}


int encflag(char enc[], char flag[], int seed) {
	char result[32];
	for (int i = 0; i < sizeof(result); ++i) {
		result[i] = flag[i] ^ seed;
		if (result[i] != enc[i]) {
			return 0;
		}
	}

	return 1;
}

