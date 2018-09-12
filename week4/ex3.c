#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char command[10];
	while (1) {
		scanf("%s", command);
		system(command);
	}
	return EXIT_SUCCESS;
}