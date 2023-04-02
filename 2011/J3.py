one = int(input())
two = int(input())
three = 1
out = 1
while three >= 0:
    three = one - two
    one = two
    two = three
    out = out + 1
print(out)
