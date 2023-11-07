class Solution:
    
    #Function to return sum of upper and lower triangles of a matrix.
    def sumTriangles(self,matrix, n):
        upper_sum = 0
        lower_sum = 0
        
        #iterating through the matrix.
        for i in range(n):
            for j in range(n):
                
                #condition to check upper triangle.
                if i <= j:
                    upper_sum += matrix[i][j]
                
                #condition to check lower triangle.
                if i >= j:
                    lower_sum += matrix[i][j]
        
        #returning the list of sums.
        return [upper_sum, lower_sum]
