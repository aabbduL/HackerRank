# Input ==>  a = 4,2,9
#            b = 1,7,5
#
# Output ==> a = 2 ( (4>1), (9>5) )
#            b = 1 (7>2)
# Buat program seperti itu

def Func(a, b):
    hasil_a = 0
    hasil_b = 0

    for i in range(len(a)):
        if a[i] > b[i]:
            print(f"{a[i]} > {b[i]}")
            hasil_a += 1
        elif a[i] < b[i]:
            hasil_b += 1
    print(f"\nList a = {a}")
    print(f"List b = {b}")

    print(f"\nHasil a = {hasil_a}")
    print(f"Hasil b = {hasil_b}\n")

if __name__ == '__main__':
    x = list(map(int, input("Masukkan angka a: ").rstrip().split()))
    y = list(map(int, input("Masukkan angka b: ").rstrip().split()))

    Func(x, y)

