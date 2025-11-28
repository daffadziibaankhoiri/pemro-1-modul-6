jumlah_ruangan = int(input())

list_zetsu = list(map(int, input().split()))

for j in range(jumlah_ruangan):
    list_zetsu[j] = list_zetsu[j] * (j + 1)
    print(list_zetsu[j], end=' ')