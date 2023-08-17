def missing_number():
    length = input()
    numbers = input()

    numbers = numbers.split(" ")
    numbers = [int(number) for number in numbers]
    numbers.sort()

    if (length == "2"):
        if (numbers[0] == 1):
            print(2)
            return
        else:
            print(1)
            return

    for i in range(1, len(numbers)):
        diff = int(numbers[i - 1]) - int(numbers[i])
        if (diff < -1):
            print(int(numbers[i]) - 1)
            return
    print(length)

missing_number()
