class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        int i = 1;
        int c = 0;
        
        while(k != c)
        {
            n /= 2;
            ++c;
        }
        return (n%2 == 1);
        
    }
};
