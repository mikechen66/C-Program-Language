#include <stdio.h>

void shellsort(int [], int);
void printArr(int [], int);

main()
{
    int len = 12;
    int v[] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    printArr(v, len);
    shellsort(v, len);
    printArr(v, len);
}

// sort v[0]...v[n-1] into increasing order
void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for (gap = n / 2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && v[j] > v [j + gap]; j -= gap) {
                printf("gap: %d, i: %d, j: %d, j+gap: %d\n", gap, i, j, j+gap);
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}

void printArr(int v[], int len)
{
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", v[i]);
    printf("\n");
}



/*
 * Output
 * 
 * 11 10 9 8 7 6 5 4 3 2 1 0 
 * gap: 6, i: 6, j: 0, j+gap: 6
 * gap: 6, i: 7, j: 1, j+gap: 7
 * gap: 6, i: 8, j: 2, j+gap: 8
 * gap: 6, i: 9, j: 3, j+gap: 9
 * gap: 6, i: 10, j: 4, j+gap: 10
 * gap: 6, i: 11, j: 5, j+gap: 11
 * gap: 3, i: 3, j: 0, j+gap: 3
 * gap: 3, i: 4, j: 1, j+gap: 4
 * gap: 3, i: 5, j: 2, j+gap: 5
 * gap: 3, i: 9, j: 6, j+gap: 9
 * gap: 3, i: 10, j: 7, j+gap: 10
 * gap: 3, i: 11, j: 8, j+gap: 11
 * gap: 1, i: 1, j: 0, j+gap: 1
 * gap: 1, i: 2, j: 1, j+gap: 2
 * gap: 1, i: 2, j: 0, j+gap: 1
 * gap: 1, i: 4, j: 3, j+gap: 4
 * gap: 1, i: 5, j: 4, j+gap: 5
 * gap: 1, i: 5, j: 3, j+gap: 4
 * gap: 1, i: 7, j: 6, j+gap: 7
 * gap: 1, i: 8, j: 7, j+gap: 8
 * gap: 1, i: 8, j: 6, j+gap: 7
 * gap: 1, i: 10, j: 9, j+gap: 10
 * gap: 1, i: 11, j: 10, j+gap: 11
 * gap: 1, i: 11, j: 9, j+gap: 10
 * 0 1 2 3 4 5 6 7 8 9 10 11 
 */