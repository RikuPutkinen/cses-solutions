def main(n, start, middle, end):
    if (n == 1):
        print(start, end)
    else:
        main(n - 1, start, end, middle)
        print(start, end)
        main(n - 1, middle, start, end)

n = int(input())

print((2 ** n) - 1)
main(n, 1, 2, 3)