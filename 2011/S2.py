q = int(input())
counter = 0
list_inp = []
list_ans = []
for i in range(0,q):
    inp = input()
    list_inp.append(inp)
for j in range(0,q):
    ans = input()
    list_ans.append(ans)
for k in range(0,len(list_inp)):
    if list_inp[k] == list_ans[k]:
        counter = counter + 1
print(counter)
