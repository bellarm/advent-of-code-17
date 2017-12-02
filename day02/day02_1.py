#!/usr/bin/python3.5

import sys
import math

answer = 0

for line in sys.stdin:
    hi = 0
    lo = math.inf
    for x in line.split():
        x = int(x)
        if x > hi: hi = x
        elif x < lo: lo = x
    answer += hi - lo

print(answer)

