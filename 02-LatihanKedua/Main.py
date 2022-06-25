# Input ==>  a = 4,2,9
#            b = 1,7,5
#
# Output ==> a = 2 ( (4>1), (9>5) )
#            b = 1 (7>2)
# Buat program seperti itu

a = []
b = []

x = input("Masukkan angka a: ").split()
y = input("Masukkan angka b: ").split()
i = list(map(int, x))
j = list(map(int, y))

a.extend(i)
b.extend(j)

print(f"List a = {a}")
print(f"List b = {b}")
print(" ")

hasil_a = 0
hasil_b = 0

for i in range(len(a)):
    if a[i] > b[i]:
        print(f"{a[i]} > {b[i]}")
        hasil_a += 1
    elif a[i] < b[i]:
        hasil_b += 1


print(f"\nHasil a = {hasil_a}")
print(f"Hasil b = {hasil_b}\n")

