S = int(input())
h, S = divmod(S, 3600)
m, S = divmod(S, 60)
s    = str(S)
print(h, m, s)