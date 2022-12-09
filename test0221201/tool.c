#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

void swap(int *px, int *py) {
	
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;

}