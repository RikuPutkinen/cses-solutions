def main(seq):
    longest = 0
    current = 1
    for i in range(1, len(seq)):
        if (seq[i] == seq[i - 1]):
            current += 1
        else:
            longest = max(longest, current)
            current = 1
    longest = max(longest, current)
    print(longest)

seq = input()

main(seq)