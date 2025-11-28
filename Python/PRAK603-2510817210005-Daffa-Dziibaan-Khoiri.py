n1, n2 = map(int, input().split())

if n1 == n2:
    list_n1 = list(map(int, input().split()))
    
    list_n2 = list(map(int, input().split()))
    
    list_hasil = []
    for k in range(n1):
        hasil = list_n1[k] * list_n2[k]
        list_hasil.append(hasil)
        print(hasil, end=' ')
else:
    print("Jumlah tidak sama")