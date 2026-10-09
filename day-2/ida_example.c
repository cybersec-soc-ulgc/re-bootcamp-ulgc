#include <stdio.h>

void flag();

int main() {
	int a = 12;
	int b = 15;

	if (b - a == 2) 
		flag();
	else
		printf("no flag oops :(\n");
}

void flag() {
	FILE *flagptr;
	char flag[60];
	flagptr = fopen("flag.txt", "r");

	fgets(flag, 60, flagptr);
	printf("%s", flag);
	fclose(flagptr);
}
