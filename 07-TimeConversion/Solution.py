def timeConversion(s):
    jam = int(s[:2])
    if s[-2:]=='PM' and jam!=12 and jam>=1:
        jam += 12
    elif s[-2:]=='AM' and jam==12:
        jam = 0
    return f'{jam:02d}{s[2:-2]}'

if __name__ == '__main__':
    s = input()
    res = timeConversion(s)
    print(res)
