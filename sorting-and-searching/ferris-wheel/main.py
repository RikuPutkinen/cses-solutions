s = input()
[n, x] = [int(n) for n in s.split(" ")]

p = input()
p = [int(n) for n in p.split(" ")]
p.sort()

start = 0
end = len(p) - 1
count = 0

while (start < end):
    if (p[start] + p[end] > x):
        end -= 1
    else:
        start += 1
        end -= 1
    count += 1

if (start == end):
    count += 1

print(count)