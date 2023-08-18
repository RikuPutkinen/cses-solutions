def main(n):
    n = int(n)
    if (n < 4 and n != 1):
        print("NO SOLUTION")
    else:
        odds = []
        evens = []
        
        for i in range(n, 0, -1):
            if i % 2 == 0:
                evens.append(str(i))
            else:
                odds.append(str(i))
        
        arr = ' '.join(odds) + ' ' + ' '.join(evens)
        print(arr)


n = input()
main(n)