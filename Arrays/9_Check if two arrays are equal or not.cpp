class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        while(N!=0)
        {
            --N;
            if(A[N] != B[N])
                return false;
        }
        return true;
    }
};
