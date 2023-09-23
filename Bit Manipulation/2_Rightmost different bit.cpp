class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        if(m == n)return -1;
       
        int dif = m^n;
        
        int counter = 1;   
        
        while(dif >= 0)
        {
            if(dif % 2 == 1)
                return counter;
            counter++;
            dif /= 2;
        }
        
    }
};
