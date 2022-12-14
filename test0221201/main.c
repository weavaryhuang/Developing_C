// test0221201.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"
#define MAXOP 3
#define NUMBER '0'
#define MAXLINE 1000
#define SIZE 10


int main(int argc, char *argv[]) {

	char line[MAXLINE];
	int found = 0;

	if (argc != 2)
		printf("Usage: find pattern\n");
	else
		while(getline(line, MAXLINE) > 0)
			if (strstr(line, argv[1]) != NULL) {
				printf("%s", line);
				found++;
			}

	return found;


	/*char amessage[] = { 'a', 'b' };
	char *pmessage[] = { 'a', 'b' };
	
	int i;
	
	for( i = 0; i <= 1; i++)
		printf("%c\n", pmessage[i]);*/

	//int n, i, j, c, * p;
	//char array[SIZE];

	//i = 0;
	//j = 0;
	//n = 0;

	//while ((c = getchar()) != EOF) {
	//	if (c != ' ' || c != '\n' || c != '\t')
	//		array[i++] = c;
	//		if (i >= SIZE)
	//			break;
	//	/*printf("\t%d\n", i);*/
	//}

	//array[i] = '\0';

	//if (i >= SIZE) {
	//	printf("\nExceed the maximun array range\n");
	//	return -1;
	//}


	//printf("\n%s\n", array);

	

	/*for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
		;*/
	/*for (i = 0; i < SIZE; i++)
		printf("%d\t", array[i]);*/


	
	/*int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF){
		switch (type){
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if (op2 != 0.0)
				push(pop() / op2);
			else
				printf("error: zero divisor\n");
			break;
		case '\n':
			printf("\t%.8g\n", pop());
			break;
		default:
			printf("error: unknown command %s\n", s);
			break;
		}
	}*/

	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
