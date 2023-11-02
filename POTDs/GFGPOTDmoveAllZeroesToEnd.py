class Solution:
	def pushZerosToEnd(self,arr, n):
    	# code here
        pop_zeroes=[]
        for i in range(n):
            if arr[i]==0:
                pop_zeroes.append(i)
        for i in pop_zeroes[::-1]:
            arr.pop(i)
        for i in range(len(pop_zeroes)):
            arr.append(0)
        return arr