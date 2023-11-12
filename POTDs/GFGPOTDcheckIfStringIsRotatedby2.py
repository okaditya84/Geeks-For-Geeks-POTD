class Solution:
    #Function to check if a string can be obtained by rotating
    #another string by exactly 2 places.
    def isRotated(self,a,b):
        if b==a[2:]+a[:2] or b==a[-2]+a[-1]+a[:-2]:
            return True
        else:
            return False
