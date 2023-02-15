#include<stdio.h>
check[10001];
void fct(int N) {
	int N2=N;
	int R = 0;
	while (1)
	{
		
		R = N % 10;
		N = N / 10;
		N2 += R;
		if (N == 0)
			break;
	}
	check[N2] = 1;
}
int main()
{
	for (int i = 1; i < 10001; i++)
			fct(i);
	for (int i = 1; i < 10001; i++)
		if (check[i] == 0)
			printf("%d\n", i);
}