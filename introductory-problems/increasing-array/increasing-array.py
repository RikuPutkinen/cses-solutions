def main(length, numbers):
    numbers = numbers.split(" ")
    numbers = [int(number) for number in numbers]
    
    moves = 0

    for i in range(1, len(numbers)):
        if (numbers[i - 1] > numbers[i]):
            diff = numbers[i - 1] - numbers[i]
            numbers[i] += diff
            moves += diff
    
    print(moves)

length = input()
numbers = input()

main(length, numbers)