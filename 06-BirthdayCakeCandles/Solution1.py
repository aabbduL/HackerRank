def birthdayCakeCandles(ar):
    total = 0
    highest = max(ar)

    for candles in ar:
        if candles == highest:
            total += 1
    
    return total

if __name__ == '__main__':

    count = int(input("\nMasukkan jumlah lilin yang tersedia : "))
    ar = list(map(int, input("Masukan tinggi dari setiap lilin yang tersedia : ").rstrip().split()[:count]))
    
    result = birthdayCakeCandles(ar)
    print(f"\nTotal lilin yang tertiup ada : {result} buah lilin\n")

