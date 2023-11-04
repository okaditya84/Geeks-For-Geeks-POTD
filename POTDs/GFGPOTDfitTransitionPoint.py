class Solution:
    def transitionPoint(self, arr, n): 
       flag=False
       for i in range(0,n):
           if arr[i]==1:
              return i
              flag=True
              break
           if flag==False and arr[i]==arr[len(arr)-1]:
              return -1