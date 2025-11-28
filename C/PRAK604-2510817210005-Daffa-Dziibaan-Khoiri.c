#include <stdio.h>
#include <string.h>

int main(){

    char kode[100];
    char pesan[100];
    int bintang = 0;
    int pagar = 0;
    fgets(kode, sizeof(kode), stdin);
    fgets(pesan, sizeof(pesan), stdin);

    if(strlen(kode) == strlen(pesan)){
        for (int i=0;i < strlen(kode) - 1;i++){
            if(kode[i] == pesan[i]){
                if (kode[i] == ' '){
                    printf(" ");
                }else{
                    bintang++;
                    printf("*");
                }
              
            }else{
                pagar++;
                printf("#");
            }
        }
        printf("\n* = %d",bintang);
        printf("\n# = %d",pagar);
        if(bintang >= pagar){
            printf("\nPesan Asli");
        }else{
            printf("\nPesan Palsu");
        }

    }else{
        printf("Panjang kalimat berbeda, pesan palsu");
    }

    return 0;
}





