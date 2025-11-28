baris, kolom = map(int, input().split())
angka = list(map(int, input().split()))
list_nilai = []
index = 0
for i in range(baris):
    baris_data = []
    for j in range(kolom):
        baris_data.append(angka[index])
        index += 1
    list_nilai.append(baris_data)

print()
for row in list_nilai:
    print(' '.join(map(str, row)))