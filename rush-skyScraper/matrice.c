#include <stdlib.h>

int **transposer(int **mat,  int len_i, int len_j)
{
    int i;
    int j;
    int **mat_transposer;

    i = 0;
    j = 0;

    mat_transposer = malloc(len_j * sizeof(int*));

    if (mat_transposer == NULL)
        return NULL; 

    while (j < len_j)
    {
        mat_transposer[j] = malloc(len_j * sizeof(int));
        mat_transposer[j][i] = mat[i][j];
        j++;
    }
    j = 0;

    while (i < len_i)
    {
        while (j < len_j)
        {
            mat_transposer[j][i] = mat[i][j];
            j++;
        }
        j = 0;
        i++;
    }
    
    return mat_transposer;
}