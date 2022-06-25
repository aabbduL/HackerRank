# Khusus Matrix 3x3

arr = []

x = input("Masukkan Angka Baris Pertama : ").split()
y = input("Masukkan Angka Baris Kedua   : ").split()
z = input("Masukkan Angka Baris Ketiga  : ").split()

i = list(map(int, x))
j = list(map(int, y))
k = list(map(int, z))

arr.append(i)
arr.append(j)
arr.append(k)

print(f"\nMatrix arr = {arr}")

d1,d2 = 0, 0
n = len(arr)

for i in range(n):
    d1 += arr[i][i]
    d2 += arr [i][n-i-1]

print("")
print(f"Output => {abs(d1-d2)}\n")

