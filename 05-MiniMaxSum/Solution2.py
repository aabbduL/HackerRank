def miniMaxSum(arr):
    arr.sort()

    res1 = sum(arr[:-1])
    res2 = sum(arr[1:])
    print(f"\nNilai minimum dari jumlah deret tersebut adalah : {res1}")
    print(f"Nilai maximum dari jumlah deret tersebut adalah : {res2}\n")

    # sortedArr = sorted(arr)
    # print(sum(sortedArr[:-1]), sum(sortedArr[1:]))

if __name__ == '__main__':   
    arr = list(map(int, input("Masukan deret angka : ").rstrip().split()))
        
    miniMaxSum(arr)

