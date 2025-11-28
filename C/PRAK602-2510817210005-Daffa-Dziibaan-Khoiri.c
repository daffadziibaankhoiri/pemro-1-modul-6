#include <stdio.h>

int main(){


    int jumlah_ruangan;
    
    scanf("%d", &jumlah_ruangan);
    int list_zetsu[jumlah_ruangan];
    int zetsu;
    for(int i = 0;i < jumlah_ruangan; i++){
        scanf("%d", &zetsu);
        list_zetsu[i] = zetsu;
    }

    for (int j = 0; j < jumlah_ruangan; j++){
        list_zetsu[j] = list_zetsu[j] * (j + 1);
        printf("%d ", list_zetsu[j]);
    }

    return 0;
}