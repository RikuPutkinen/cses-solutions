def main(y, x):
    if (x % 2 == 1) and (y <= x):
        print(x ** 2 - (y - 1))
    elif (x % 2 == 0) and (y <= x):
        print((x - 1) ** 2 + y)
    elif (y % 2 == 0) and (x <= y):
        print(y ** 2 - (x - 1))
    elif (y % 2 == 1) and (x <= y):
        print((y - 1) ** 2 + x)
    else:
        print("Error")

tests = int(input())
coords = []

for i in range(tests):
    coord = input()
    coords.append(coord)

for coord in coords:
    y, x = [int(num) for num in coord.split(' ')]
    main(y, x)