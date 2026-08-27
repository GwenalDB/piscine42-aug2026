
int verification(int **mat)
{

}

void generation(int mat[4][4], int ***tenseur, int a, int b)
{
    if (mat[a][b] > 4)
    {
        if (a >= 4) {
            b += 1;
        }
        else
        {
            a += 1;
        }
    }
    
    if (a != 4 && b != 4)
        mat[a][b] += 1;
}

void resolution(int *input)
{
    int ***tenseurs;
    tenseurs = malloc(sizeof(int **) * 4294967296);

    generation({
        {1,1,1,1},
        {1,1,1,1},
        {1,1,1,1},
        {1,1,1,1}
    }, tenseurs);
}