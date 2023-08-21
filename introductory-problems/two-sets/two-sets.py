def main(n):
    arr = list(range(int(n), 0, -1))
    target = sum(arr) / 2
    result1 = []
    result2 = []
    r1sum = 0
    r2sum = 0

    if (target % 1 != 0):
        print("NO")
        return

    for num in arr:
        if (target - r1sum >= num):
            result1.append(num)
            r1sum += num
        elif (target - r2sum >= num):
            result2.append(num)
            r2sum += num
        else:
            print("NO")
            return
        
    result1 = [str(num) for num in result1]
    result2 = [str(num) for num in result2]
    
    print("YES")
    print(len(result1))
    print(" ".join(result1))
    print(len(result2))
    print(" ".join(result2))

n = input()
main(n)