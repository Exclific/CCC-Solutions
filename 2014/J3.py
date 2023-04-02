antonia = 100
david = 100
rounds = int(input())
for i in range(0,rounds):
    x,y = map(int,input().split())
    if x > y:
        david = david - x
    if x < y:
        antonia = antonia - y
    if x == y:
        continue
print(antonia)
print(david)
