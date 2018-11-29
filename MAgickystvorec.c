#include <stdio.h>
//int fill(int **a[][], int n) 
//{
//	
//
//}
//
//
//

int magicky(int a[][10], int n) {
	int riadok,stlpec,uhl;
	int N,M;
	int i, j;
	
	N = n;
	M = n;
	for (i=0;i<N;i++)
	{
			for (j = 0; j < M; j++)
			{
				printf("Vloz na [%d][%d]: ", i, j);
				scanf("%d", &a[i][j]);


			}
	}
	
	//for (i = 0; i < N; i++)
	//{
	//	for (j = 0; j < M; j++)
	//	{
	//		


	//	}
	//}
	//
	//
	//
	
	
	
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");

	}

	return 0;
}

int main() {
	int a[10][10];
	int n;
	scanf("%d", &n);
	
	if (n > 10) { exit(0);}
	if (n < 10) {
		magicky(a, n);
	}
	

	return 0;
}