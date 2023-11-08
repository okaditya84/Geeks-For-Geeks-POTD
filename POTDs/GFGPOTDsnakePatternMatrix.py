class Solution:
    
    #Function to return list of integers visited in snake pattern in matrix.
    def snakePattern(self, matrix):
        res=[]
        row=len(matrix)
        col=len(matrix[0])
        for i in range(row):
            for j in range(col):
                if i%2==1:
                    j=col-1-j
                res.append(matrix[i][j])
        return res

