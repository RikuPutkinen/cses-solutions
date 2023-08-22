def count_letters(s):
    letters = {}
    for i in range(len(s)):
        if (s[i] in letters):
            letters[s[i]] += 1
        else:
            letters[s[i]] = 1
    
    return letters

def one_odd(d):
    found = False
    for key in d:
        if (d[key] % 2 == 1):
            if (found == False):
                found = True
            else:
                return False
            
    return found

def all_even(d):
    for key in d:
        if (d[key] % 2 == 1):
            return False
    
    return True

def main(s):
    letters = count_letters(s)
    if (len(s) % 2 == 0):
        if (all_even(letters) == False):
            print("NO SOLUTION")
            return
        else:
            half = ""
            for key, value in letters.items():
                half += key * int(value / 2)
            full = half + half[::-1]
            print(full)
            return
    else:
        if (one_odd(letters) == False):
            print("NO SOLUTION")
            return
        else:
            half = ""
            odd = ""
            for key, value in letters.items():
                half += key * int(value / 2)
                if (value % 2 == 1):
                    odd = key
            full = half + odd + half[::-1]
            print(full)
            return
        
s = input()
main(s)