class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        int col1 = 0;
        int coln = m-1;
        
        for(int i=0; i < n; ++i)    //rows
        {
            if(x > matrix[i][coln])
                continue;
            if(x < matrix[i][col1])
                return 0;
            
            for(int j=0; j < m; ++j)    //columns
            {
                if(x == matrix[i][j])
                    return true;
            }
        }
        
        return false;
        
    }
};
