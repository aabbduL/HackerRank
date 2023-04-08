def plusMinus(arr):
    n = len(arr)
    positive, negative, zero = 0, 0, 0

    print(f"\nArray = {arr}")

    for bil in arr:
        if(bil>0):
            positive += 1
        elif(bil<0):
            negative += 1
        else:
            zero += 1
    
    print(f"\nKemungkinan munculnya bilangan positive adalah : {positive/n}")
    print(f"Kemungkinan munculnya bilangan negative adalah : {negative/n}")
    print(f"Kemungkinan munculnya bilangan nol adalah      : {zero/n}\n")


if __name__ == '__main__':
    n = int(input("Masukan berapa banyak bilangan bulat yang diinginkan : "))
   
    arr = list(map(int, input(f"\nMasukkan deret bilangan tersebut ({n}) : ").rstrip().split()))
    
    plusMinus(arr)

