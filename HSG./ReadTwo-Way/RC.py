import re

def aio(file_name: str) -> list:
	with open (file_name, "r") as f:
		row, column = map(int, f.readline().split())
		lst: list = []
		for i in range(column):
			lst.append(list(map(int, re.findall(r"-?\d+", f.readline())))[:row])

	def sumrc(arr: list, row: int, column: int) -> int:
		s: int = 0
		for i in range(row):
			for j in range(i, column):
				s += arr[j][i]
		return s

	def findmm(arr: list) -> list:
		for i in range (len(arr)):
			arr[i] = [max(arr[i], min(arr[i]))]
		return min(arr), max(arr)

	def totalrow(arr: list, row: int) -> int:
		return sum(arr[row - 1])

	def even(arr: list) -> list:
		levent = []
		for i in arr:
			for j in i:
				if j%2 == 0: levent.append(j)
		return levent

	def sortcolumn(arr: list, column: int) -> list:
		ec = []
		for i in arr:
			ec.append(i[column - 1])
		ec.sort()
		index = 0
		for i in arr:
			i[column - 1] = ec[index]
			index += 1
		return arr

	def midplus(arr: list) -> int:
		lindex = []
		lvalue = []
		for row in arr:
			lvalue.append(sum(row))
			lindex.append(len(row))

		return sum(lvalue)//sum(lindex)

	def cross(arr: list, row: int) -> list:
		tcross = [[], []]
		start: int = 0
		end: int = row - 1
		for item in arr:
			tcross[0].append(item[start])
			tcross[1].append(item[end - start])
			start += 1

		return tcross

	return []

def printable(ssl: list):
	for row in ssl:
		print("|", end="")
		for i in row:
			if len(str(i)) == 1:
				print(f"{i}  |", end="")
			else: print(f"{i} |", end="")
		print("\n--------------------------")

print(aio("RCI.txt"))