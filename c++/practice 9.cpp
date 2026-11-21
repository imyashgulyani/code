#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
int solve (int N, int* A) 
{
	int *B = (int *)malloc(sizeof(int)*(N));
	int i,count=0;

    for(i=0;i<N;i++)
    {
        B[i]=0;
    }
    
	for(i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(A[j]!=0)
			{
				count++;
				B[j]++;
			}
		}
	}
	// printf("\nCount = %d\n",count);
	// for(i=0;i<N;i++)
    // {
    // 	printf("%d\t",B[i]);
	// }
	if(count!=N)
		return -1; 
	else
		return count;
}

int main() {
    int T;
    scanf("%d", &T);
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        scanf("%d", &N);
        int i_A;
        int *A = (int *)malloc(sizeof(int)*(N));
        for(i_A = 0; i_A < N; i_A++)
        	scanf("%d", &A[i_A]);

        int out_ = solve(N, A);
        printf("%d", out_);
        printf("\n");
    }
}
