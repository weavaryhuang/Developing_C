#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

void swap(int *px, int *py) {
	
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;

}

int strlen(char* s) {
	int n;
	for (n = 0; *s != '\0'; s++)
		n++;
	return n;
}

int fff(int *p) {
	int i;

	for (i = 0; i <= 3; i++)
		p++;

	return *p;
}