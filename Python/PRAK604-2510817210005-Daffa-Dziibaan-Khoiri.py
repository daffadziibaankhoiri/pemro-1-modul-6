kode = input()
pesan = input()

bintang = 0
pagar = 0

if len(kode) == len(pesan):
    # Bandingkan karakter per karakter
    for i in range(len(kode)):
        if kode[i] == pesan[i]:
            if kode[i] == ' ':
                print(" ", end='')
            else:
                bintang += 1
                print("*", end='')
        else:
            pagar += 1
            print("#", end='')
    
    # Output hasil
    print()
    print(f"* = {bintang}")
    print(f"# = {pagar}")
    
    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
else:
    print("Panjang kalimat berbeda, pesan palsu")