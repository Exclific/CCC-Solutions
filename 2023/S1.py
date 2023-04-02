c = int(input())
top = list(input().split())
bot = list(input().split())
tapeTop = top.count('1') * 3
tapeBot = bot.count('1') * 3
totalTape = tapeTop + tapeBot
for i in range(0,c-1):
    if top[i] == '1' and top[i+1] == '1':
        totalTape = totalTape - 2
    if bot[i] == '1' and bot[i+1] == '1':
        totalTape = totalTape - 2
for i in range (0,c):
    if i % 2 > 0:
        continue
    if top[i] == '1' and bot[i] == '1':
        totalTape = totalTape - 2
print(totalTape)
