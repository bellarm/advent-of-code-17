import sys

instr = [int(line) for line in sys.stdin]
step = 0
i = 0
size = len(instr)

while True:
    if i >= size:
        break
    instr[i] += 1
    i += instr[i] - 1
    step += 1

print(step)

