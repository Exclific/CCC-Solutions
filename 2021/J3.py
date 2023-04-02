lineList = []
xl = []
yl = []
stepsl = []
for i in range(999):
    line = str(input())
    if line == "99999":
        break
    lineList.append(line)
    steps = line[2:5]
    x = int(line[0:1])
    y = int(line[1:2])
    stepsl.append(steps)
    xl.append(x)
    yl.append(y)
for i in range(0,len(lineList)):
    if xl[i]+yl[i] > 0 and (xl[i]+yl[i])%2 == 0:
        out = "right "
        print(out + str(stepsl[i]))
    if xl[i]+yl[i] > 0 and (xl[i]+yl[i])%2 != 0:
        out = "left "
        print(out + str(stepsl[i]))
    if xl[i]+yl[i] == 0:
        print(out + str(stepsl[i]))
