#include <stdio.h>

int main(){

    int ordo_matriks;

    scanf("%d", &ordo_matriks);
    int matriks_A[ordo_matriks][ordo_matriks];
    int matriks_B[ordo_matriks][ordo_matriks];
    int matriks_hasil[ordo_matriks][ordo_matriks];
    printf("Matriks A\n");
    for(int i = 0; i < ordo_matriks;i++){
        int nilai;
        for (int j = 0; j < ordo_matriks; j++)
        {
            scanf("%d", &nilai);
            matriks_A[i][j] = nilai;
        }
        printf("");
    }
   
    printf("Matriks B\n");

    for(int i = 0; i < ordo_matriks;i++){
          int nilai;
         for (int j = 0; j < ordo_matriks; j++)
        {
            scanf("%d", &nilai);
            matriks_B[i][j] = nilai;
        }
        printf("");
    }

    printf("\n\nMatriks AXB\n");
    for (int i=0;i<ordo_matriks;i++){
        for(int j = 0; j < ordo_matriks; j++){
            int tambah = 0;
            for (int k=0;k<ordo_matriks;k++){
                int hasil = (matriks_A[i][k] * matriks_B[k][j]);
                tambah = tambah + hasil;
            }
             matriks_hasil[i][j] = tambah;
        }
    }

     for(int i = 0; i < ordo_matriks;i++){
          int nilai;
         for (int j = 0; j < ordo_matriks; j++)
        {
            printf("%d ",matriks_hasil[i][j]);
        }
        printf("\n");
    }
}