n = int(input())
gold = 0
goldTeam = ""
for a in range(0,n):
    x = int(input())
    y = int(input())
    score = 5*x - y*3
    if score > 40:
        gold = gold+1 
if gold == n:
    goldTeam = "+"

print(str(gold)+goldTeam)
