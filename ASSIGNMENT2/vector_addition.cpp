#include <omp.h>
#include <stdio.h>

int main()
{
    printf("Adding Two Arrays\n");
    int a1[] = {11, 12, 13, 14, 15};
    int a2[] = {21, 22, 23, 24, 25};
    int a3[5];
	int i;
	#pragma omp parallel for
    for (i = 0; i < 5; i++)
    {
        a3[i] = a1[i] + a2[i];
        printf("THREAD NO: %d\n", omp_get_thread_num());
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a3[i]);
    }
    return 0;
}

