amtOfVotes = int(input())
votes = str(input())
if votes.count('A') > votes.count('B'):
    print('A')
if votes.count('A') < votes.count('B'):
    print('B')
if votes.count('A') == votes.count('B'):
    print('Tie')
