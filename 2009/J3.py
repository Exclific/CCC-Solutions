time = int(input())
cities = ["in Ottawa", "in Victoria", "in Edmonton", "in Winnipeg", "in Toronto", "in Halifax", "in St. John's"]
timeZones = [0, -abs(300), -abs(200), -abs(100), 0, 100, 130]
for x in range(0,7):
    timeDiff = time + int(timeZones[x])
    if timeDiff >= 2400:
        timeDiff = timeDiff - 2400
    if timeDiff < 0:
        timeDiff = timeDiff + 2400
    if timeDiff == 275:
        timeDiff = 315
    print(timeDiff, cities[x])
