class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        unsigned int ret = 0;
        
        while(n != 0)
        {
            ret++;
            if(n%2 == 1)
            {
                return ret;
            }
            else
            {
                n = n/2;
            }
        }
        return 0;
    }
        
};
