s = input()
[n, m, k] = [int(n) for n in s.split(" ")]

desired = input()
desired = [int(s) for s in desired.split(" ")]
desired.sort()

sizes = input()
sizes = [int(s) for s in sizes.split(" ")]
sizes.sort()

found = 0
j = 0
for i in range(len(desired)):
    while (j < len(sizes) and sizes[j] < desired[i] - k):
        j += 1
    if (j < len(sizes) and sizes[j] <= desired[i] + k):
        found += 1
        j += 1

print(found)