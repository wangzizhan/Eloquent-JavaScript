#include<stdio.h>
int main(void) {
	int i,j;
	
	for(i = 0; i < 8; i++) {
		if(i % 2 == 1) {
			for(j = 0; j < 8; j++) {
				if(j % 2 == 1) {
					printf("#");
				} else {
					printf(" ");
				}
			}
			printf("\n");
		}
		else {
			for(j = 0; j < 8; j++) {
				if(j % 2 == 1) {
					printf(" ");
				} else {
					printf("#");
				}
			}
			printf("\n");
		}
	}

	return 0;
}
