# Khusus Matrix 3x3

def Func(arr):
    d1, d2 = 0, 0
    n = len(arr)

    for i in range(n):
        d1 += arr[i][i]
        d2 += arr[i][n-i-1]

    print(f"\nMatrix arr = {arr}")
    print(f"Output => {abs(d1-d2)}\n")

if __name__ == '__main__':
    n = int(input("Masukkan jumlah baris matrix: ").strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input("Masukkan angka: ").rstrip().split())))
    
    Func(arr)

