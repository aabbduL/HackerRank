# Sample input => 1,2,3,4,10,11
# Output => 31
# Explain => 1+2+3+4+10+11 = 31
# Buatlah program seperti itu

arr = []
x = input("Masukkan angka: ").split()
y = list(map(int, x))

arr.extend(y)

# SOLUSI 1
hasil = 0
for i in range(len(arr)):
    hasil += arr[i]

print(f"\nHasil Pertama: {hasil}")

# SOLUSI 2
hasil2 = 0
for i in arr:
    hasil2 += i
print(f"Hasil Kedua: {hasil2}")

# SOLUSI 3
print(f"Hasil Ketiga: {sum(arr)}\n")

