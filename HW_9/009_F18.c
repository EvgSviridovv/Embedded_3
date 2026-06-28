#include <stdio.h>

int trace(int n, int mat[][10]) 
{
    int sum = 0, max;
    for (int i = 0; i < n; i++) 
		{
			max = mat[i][0];
			for (int j = 0; j < n; j++) 
				{
				if (mat[i][j] > max)
					max = mat[i][j];
				}
			sum += max;
		}		
    return sum;
}

int main() 
{
    const int N = 10;
    int mat[N][N];

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("%d\n", trace(N, mat));
    return 0;
}
