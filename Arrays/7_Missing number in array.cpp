class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        
        int main = n-1;
        
        
        int ret = array[n-2];
        for(int i=1; i < n-1 ; ++i)
        {
            ret = ret ^ array[i-1];
            main = main ^ i;
        }
        
        main = main ^ n;
        
        
        return  (int)(ret ^ main);
        
        
    }
};
