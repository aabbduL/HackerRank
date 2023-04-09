def plusMinus(arr):
    n = len(arr)
    positive = len(tuple(filter(lambda x:x>0, arr)))
    negative = len(tuple(filter(lambda x:x<0, arr)))
    zero = len(tuple(filter(lambda x:x==0, arr)))
    
    print(f"\nKemungkinan munculnya bilangan positive adalah : {positive/n}")
    print(f"Kemungkinan munculnya bilangan negative adalah : {negative/n}")
    print(f"Kemungkinan munculnya bilangan nol adalah      : {zero/n}\n")


if __name__ == '__main__':
    n = int(input("Masukan berapa banyak bilangan bulat yang diinginkan : "))
   
    arr = list(map(int, input(f"\nMasukkan deret bilangan tersebut ({n}) : ").rstrip().split()[:n]))
    
    plusMinus(arr)

