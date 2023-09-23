class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            //rows are sorted
            int cl = 0;
            
            
            while(cl < M)
            {
                for(int rw = 0; rw < N ; ++rw)
                {
                    if( Mat[rw][cl] == 1 )
                        return rw;
                }
                ++cl;
            }
            
        }
};
