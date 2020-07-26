W, H, x, y, r = [int(i) for i in input().split(" ")]
if (r <= x) and (r <= y) and (W - r >= x) and (H - r >= y):
	print("Yes")
else:
	print("No")