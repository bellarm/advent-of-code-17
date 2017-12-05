import sys

instr = [int(line) for line in sys.stdin]
step = 0
i = 0
size = len(instr)

while True:
    if i >= size:
        break
    elif i >= 0:
        instr[i] += 1
        i += instr[i] - 1
    else:
        i += instr[i]
    step += 1

print(step)

