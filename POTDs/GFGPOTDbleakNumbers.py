from math import log2

class Solution:
    def is_bleak(self, n):
        bits = int(log2(n))+1
        
        for e in range(n-bits, n+1):
            if e + bin(e).count('1') == n:
                return 0
        return 1

class Solution:
	def is_bleak(self, n):
		# Code here
        def countSetBits(x):
            count =0
            while x:
                x &= (x-1)
                count+=1
            return count
        for i in range(n):
            if i+countSetBits(i)==n:
                return 0
        return 1
