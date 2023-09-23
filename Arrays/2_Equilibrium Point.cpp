class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        
        if(n == 0)  return -1;
        if(n == 1)  return 1;
        
        int diff = 0;
        int pos;
        
        for(int i=0, j=n-1; i < j; )
        {
            // i - j is diff
            
            if(diff < 0)
            {
                diff += a[i];
                ++i;
            }
            else if(diff > 0)
            {
                diff -= a[j];
                --j;
            }
            else
            {
                diff = a[i] - a[j];
                ++i;
                --j;
            }
            
            pos = i;
        }
    
        if( diff == 0  )
            return pos + 1; //1 based indexing
        else
            return -1;
        
    }
    
};
