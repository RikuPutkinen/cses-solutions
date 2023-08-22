def main(left, right):
    if ((left > 2 * right) or (right > 2 * left)):
        print("NO")
    elif ((left + right) % 3 == 0):
        print("YES")
    else:
        print("NO")
    
t = int(input())
numArr = []

for i in range(t):
    nums = input()
    nums = nums.split(" ")
    nums = [int(num) for num in nums]
    numArr.append(nums)

for nums in numArr:
    [left, right] = nums
    main(left, right)