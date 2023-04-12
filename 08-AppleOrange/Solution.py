def ApplesOranges(s, t, a, b, apples, oranges):
    jml_apl, jml_jrk = 0, 0
    apl = [a+d for d in apples]
    jrk = [b+d for d in oranges]

    for d_baru in apl:
        if s<=d_baru<=t:
            jml_apl += 1
    for d_baru in jrk:
        if s<=d_baru<=t:
            jml_jrk += 1

    print(f"\nJumlah apel yang jatuh di jangkauan s dan t adalah  : {jml_apl}")
    print(f"Jumlah jeruk yang jatuh di jangkauan s dan t adalah : {jml_jrk}\n")

if __name__ == '__main__':
    st = input("Masukkan posisi rumah (s t) : ").split()
    s = int(st[0])
    t = int(st[1])
    
    ab = input("Masukkan posisi pohon apel dan jeruk (a b) : ").split()
    a = int(ab[0])
    b = int(ab[1])
    
    mn = input("Masukkan jumlah total apel dan jeruk : ").split()
    m = int(mn[0])
    n = int(mn[1])

    apples = list(map(int, input("Masukkan lokasi jatuhnya buah apel : ").rstrip().split()))
    oranges = list(map(int, input("Masukkan lokasi jatuhnya buah jeruk : ").rstrip().split()))
    ApplesOranges(s, t, a, b, apples, oranges)

