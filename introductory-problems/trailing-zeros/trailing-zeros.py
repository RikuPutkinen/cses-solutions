def main(n):
    divider = 5
    total = 0

    while (divider <= n):
        total += int(n / divider)
        divider *= 5
    
    print(total)

n = int(input())
main(n)