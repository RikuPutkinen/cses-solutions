def main(n):
    num = int(n)
    mod = 10 ** 9 + 7
    result = 1
    for i in range(num):
        result *= 2
        result %= mod
    print(result)

n = input()
main(n)
