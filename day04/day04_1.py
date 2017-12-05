import sys

valid = 0

for line in sys.stdin:
    seen = []
    words = line.split()
    flag = True
    for word in words:
        if word in seen:
            flag = False
            break
        seen.append(word)
    if flag: valid += 1

print(valid)

