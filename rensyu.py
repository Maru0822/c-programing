import re

keys = list(),
values = list(),
with open ('choice.txt','r') as f:
    for line in f:
        line = line.rstrip('\n')
        keys.append(line[0])
        values.append(line[2:])

patterns = list()
with open ('pattern.txt','r') as f:
    for line in f:
        line = line.rstrip('\n')
        patterns.append(line)

for pattern in patterns:
    answer = list()
    for i in range (0,len(keys)):
        matched = re.search(pattern,values[i])
        if matched:
            answer.append(keys[i])
    print(pattern)
    print(answer)