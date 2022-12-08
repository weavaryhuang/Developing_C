// test0221201.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <ctype.h>
#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);
int atoi(char s[]);
int lower(int c);
unsigned getbits(unsigned x, int p, int n);
int bitcount(unsigned x);
int binsearch(int x, int v[], int n);

int main() {
	int len;
	int max;
	int c;
	int i, j;
	int ctoi;
	int n;
	int v[10] = {1,2,3,4,5,6,7,8,9};
	char s[MAXLINE];
	char line[MAXLINE];
	char longest[MAXLINE];

	n = sizeof(s);

	for (i = 0; (c = getchar()) != EOF && i < n; i++)
	{
		s[i] = c;
	}

	printf("%d", atoi(s));

	

	/*max = 0;

	while ((len = getline(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
	{
		printf("%s", longest);
	}*/
	
	return 0;
}

int getline(char s[], int lim) {
	int c, i;
	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
	{
		s[i] = c;
		
	}
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
	{
		++i;
	}
}

int atoi(char s[]) {
	int i, n, sign;

	for (i = 0; isspace(s[i]); i++);

	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for ( n = 0; isdigit(s[i]); i++)
	{
		n = 10 * n + (s[i] - '0');
	}
	//return sign * n;
	return n;
}

int lower(int c) {
	if (c >= 'A' && c <= 'z')
		return c + 'a' - 'A';
	else
		return c;
}

unsigned getbits(unsigned x, int p, int n) {
	return (x >> (p + 1 - n)) & ~(~0 << n);
}

int bitcount(unsigned x) {
	int b;
	for (b = 0; x != 0; x >>= 1)
	{
		if (x & 01)
			b++;
	}
	return b;
}

int binsearch(int x, int v[], int n) {
	int low, mid, high;
		low = 0;
		high = n - 1;
		while (low <= high)
		{
			mid = (low + high) / 2;
			if (x < v[mid])
				high = mid - 1;
			else if (x > v[mid])
				low = mid + 1;
			else
				return mid;
		}
		return -1;

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
