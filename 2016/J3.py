inp = str(input())
def find_palindromes(s):
    palindromes = []
    n = len(s)
    for i in range(n):
        for j in range(i+1,n+1):
            word = s[i:j]
            if word == word[::-1]:
                palindromes.append(word)          
    return palindromes
p = find_palindromes(inp)

max_len = -1
for ele in p:
    if len(ele) > max_len:
        max_len = len(ele)
        res = ele

print(len(res))
