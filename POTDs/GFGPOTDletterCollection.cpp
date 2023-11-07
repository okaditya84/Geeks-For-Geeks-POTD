class Solution {
    
    public:
    
    bool isValid(int row , int col , int n , int m)
    {
        if(row < 0 || row >= n || col < 0 || col >= m)
            return false ;
            
        return true ;
    }
    
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[]) {
        
        int dx1[] = {-1 , -1 , -1 , 0 , 1 , 1 , 1 , 0} ;
        int dy1[] = {-1 , 0 , 1 , 1 , 1 , 0 , -1 , -1} ;
        
        int dx2[] = {-2 , -2 , -2 , -2 , -2 , -1 , 0 , 1 , 2 , 2 , 2 , 2 , 2 , 1 , 0 , -1} ;
        int dy2[] = {-2 , -1 , 0 , 1 , 2 , 2 , 2 , 2 , 2 , 1 , 0 , -1 , -2 , -2 , -2 , -2} ;
        
        vector<int> ans ;
        
        for(int i = 0 ; i < q ; i++)
        {
            int sum = 0 , row = queries[i][1] , col = queries[i][2] ;
            
            if(queries[i][0] == 1)
            {
                for(int j = 0 ; j < 8 ; j++)
                {
                    int rowIndex = row + dx1[j] ;
                    int colIndex = col + dy1[j] ;
                    
                    if(isValid(rowIndex , colIndex , n , m))
                        sum += mat[rowIndex][colIndex] ;
                }
            }
            else
            {
                for(int j = 0 ; j < 16 ; j++)
                {
                    int rowIndex = row + dx2[j] ;
                    int colIndex = col + dy2[j] ;
                    
                    if(isValid(rowIndex , colIndex , n , m))
                        sum += mat[rowIndex][colIndex] ;
                }
            }
            
            ans.push_back(sum) ;
        }
        
        return ans ;
        
    }
};