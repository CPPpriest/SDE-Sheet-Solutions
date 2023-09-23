class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> ret;
        
        if(n!=0)
        {
            ret.push_back(a[n-1]);
            for(int i=n-2; i>=0 ; --i)
            {
                if(a[i] >= ret.back())
                    ret.push_back(a[i]);
            }
            
        }
        reverse(ret.begin(),ret.end());
        return ret;
        
    }
};
