class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        
        
        if( k == 1)
        {
            
            if(n==0) return arr2[0];
            if(m==0) return arr1[0];
            
            return (arr1[0] > arr2[0]) ? arr2[0] : arr1[0];
        }
        
        if(n <= 0)
            return kthElement(arr1, arr2+1, n,m-1,k-1);
        if(m <= 0)
            return kthElement(arr1+1, arr2, n-1,m,k-1);
            
        else{
            if(arr1[0] > arr2[0])
                return kthElement(arr1, arr2+1, n,m-1,k-1);
            else
                return kthElement(arr1+1, arr2, n-1,m,k-1);
        }    
        
    }
};
