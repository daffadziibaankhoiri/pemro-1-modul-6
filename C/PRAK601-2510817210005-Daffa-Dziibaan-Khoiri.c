#include <stdio.h>

int main(){

    int baris, kolom;
  
    scanf("%d %d", &baris, &kolom);
    int list_nilai[baris][kolom];
     int nilai;
   
    for (int i=0;i < baris;i++){
        for(int j=0; j < kolom;j++){
            scanf("%d", &nilai);
            list_nilai[i][j] = nilai;
            
        }
    }

    printf("\n");
    for (int i=0;i < baris;i++){
        for(int j=0; j < kolom;j++){
            printf("%d ", list_nilai[i][j]);
            if(j == kolom -1){
                printf("\n");
            }
        }
    }

    
    
   
    return 0;
}

