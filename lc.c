#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
	if (argc < 3) {
		printf("Invalid parameter input, requires 2 or more parameters\n");
		return 1;
	}
	char* w = argv[1];
	int len = strlen(w);
	int pos;
	for (pos = 2; pos < argc; pos++) {
		int loc = atoi(argv[pos]) - 1;
		if (loc >= len) {
			printf("Invalid position %d\n", loc + 1);
			return 1;
		}
		printf("%c ", w[loc]);
	}
	printf("\n");
	return 0;
}
