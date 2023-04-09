def birthdayCakeCandles(ar):
    highest = max(ar)
    return len([candles for candles in ar if candles == highest])

if __name__ == '__main__':

    count = int(input("\nMasukkan jumlah lilin yang tersedia : "))
    ar = list(map(int, input("Masukan tinggi dari setiap lilin yang tersedia : ").rstrip().split()[:count]))
    
    result = birthdayCakeCandles(ar)
    print(f"\nTotal lilin yang tertiup ada : {result} buah lilin\n")

