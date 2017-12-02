#!/usr/bin/python3.5

import sys

answer = 0

for line in sys.stdin:
    num = [int(x) for x in line.split()]
    flag = False
    for x in range(0, len(num)-1):
        i = num[x]
        for y in range(x+1, len(num)):
            j = num[y]
            if i % j == 0:
                answer += i // j
                flag = True
                break
            if j % i == 0:
                answer += j // i
                flag = True
                break
        if flag: break

print(answer)

