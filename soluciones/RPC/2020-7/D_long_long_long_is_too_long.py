test = int(input())
while (test > 0):
	test -= 1
	songs, nseq = list(map(int, input().strip().split()))
	seq = list(map(int, input().strip().split()))
	pos = seq[0]
	btn = 0
	for track in seq[1:]:
		fwd = (track - pos - 1) if track > pos else (songs - pos + track - 1)
		bwd = (pos - track + 1) if track <= pos else (songs - track + pos + 1)
		btn += min(fwd, bwd)
		# print(pos, ">", track, ":", min(fwd,bwd), "-", btn, "(" + ("fwd)" if fwd < bwd else "bwd)"))
		pos = track
	print(btn)