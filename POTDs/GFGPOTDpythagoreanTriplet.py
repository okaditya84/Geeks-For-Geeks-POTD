class Solution:
    def checkTriplet(self,arr, n):
        st=set([x*x for x in arr])
        mx=max(st)
        for i in st:
            for j in st:
                if i==j or i+j>mx:
                    continue
                if i+j in st:
                    return True
        return False