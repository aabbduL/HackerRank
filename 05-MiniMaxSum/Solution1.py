def miniMaxSum(arr):
    minimum, maximum = arr[0], arr[0]
    for bil in arr[1:]:
        if bil<minimum:
            minimum = bil
        if bil>maximum:
            maximum = bil

    res1 = sum(arr)-maximum
    res2 = sum(arr)-minimum

    print(f"\nNilai minimum dari jumlah deret tersebut adalah : {res1}")
    print(f"Nilai maximum dari jumlah deret tersebut adalah : {res2}\n")


if __name__ == '__main__':   
    arr = list(map(int, input("Masukan deret angka : ").rstrip().split()))
    
    miniMaxSum(arr)

