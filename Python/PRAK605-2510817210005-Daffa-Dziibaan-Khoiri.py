ordo_matriks = int(input())
matriks_A = []
matriks_B = []

print("Matriks A")
for i in range(ordo_matriks):
    baris = list(map(int, input().split()))
    matriks_A.append(baris)

print("Matriks B")
for i in range(ordo_matriks):
    baris = list(map(int, input().split()))
    matriks_B.append(baris)

print("\n\nMatriks AXB")
matriks_hasil = []

for i in range(ordo_matriks):
    baris_hasil = []
    for j in range(ordo_matriks):
        tambah = 0
        for k in range(ordo_matriks):
            hasil = matriks_A[i][k] * matriks_B[k][j]
            tambah = tambah + hasil
        baris_hasil.append(tambah)
    matriks_hasil.append(baris_hasil)

for i in range(ordo_matriks):
    for j in range(ordo_matriks):
        print(matriks_hasil[i][j], end=' ')
    print()