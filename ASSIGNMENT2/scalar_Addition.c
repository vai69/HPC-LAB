#include <omp.h>
#include <stdio.h>

void main()
{
    printf("Adding Vector into Scalar\n");
    int a1[] = {11, 12, 13, 14, 15};
    int answer = 0;
	int i;
    #pragma omp parallel for
    for (i = 0; i < 5; i++)
    {
        answer += a1[i];
    }
    printf("Answer %d ", answer);
    return ;
    
}

