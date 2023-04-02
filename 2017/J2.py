n = int(input())
k = int(input())
shiftList = []
shiftList.append(n)
for i in range(1,k+1):
    k = n*(10**i)
    shiftList.append(k)
print(sum(shiftList))
