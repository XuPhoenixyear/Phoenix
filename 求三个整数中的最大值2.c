#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int MAX(int x,int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	int a, b, c;
	scanf(" %d %d %d", &a, &b, &c);
	int one,two;
	one = MAX(a, b);
	two = MAX(a, c);
	if (one > two)
	{
		printf("%d", one);
	}
	else
	{
		printf("%d", two);
	}
	
	return 0;
}
