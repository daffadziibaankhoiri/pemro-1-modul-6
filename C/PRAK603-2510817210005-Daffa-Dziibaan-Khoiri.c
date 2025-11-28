#include <stdio.h>

int main(){

    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int list_n1[n1];
    int list_n2[n2];
    int list_hasil[n1];
    if(n1 == n2){
        int nilai;
        for(int i = 0; i < n1; i++){
            scanf("%d", &nilai);
            list_n1[i] = nilai;   
        }

        for (int j = 0; j < n2;j++){
            scanf("%d",&nilai);
            list_n2[j] = nilai;
        }

        for(int k = 0;k <n1;k++){
            int hasil = list_n1[k] * list_n2[k];
            list_hasil[k] = hasil;
            printf("%d ", list_hasil[k]);
        }
    }else{
        printf("Jumlah tidak sama");
    }


    return 0;
}