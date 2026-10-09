#include <stdio.h>
#include <stdlib.h>

void flag();

int main() {
	int a = 4;
	
	if (a == 2) {
		flag();
	}
	else {
		printf("no flag :(\n");
	}
}

void flag() {
	FILE *flagptr;
	char flag[50];
	flagptr = fopen("flag.txt", "r");

	fgets(flag, 50, flagptr);
	printf("%s", flag);
	fclose(flagptr);
}

