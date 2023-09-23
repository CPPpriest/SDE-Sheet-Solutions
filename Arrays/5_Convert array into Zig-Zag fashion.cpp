class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        //Elements are distinct -->> No equal case
        
        /*
        for(int i=0; i<n; ++i)
        {
            if( ((i%2) == 0) && (arr[i] > arr[i+1]) )
            {
                swap(arr[i], arr[i+1]);
            }
            
            if( ((i%2) == 1) && (arr[i] < arr[i+1]) )
            {
                swap(arr[i], arr[i+1]);
            }
            
        }
        */
        
        for(int i=1; i<n; i+=2)
        {
            if(arr[i-1] > arr[i])
                swap(arr[i-1] , arr[i] );
            
            if( (i == n-1) )
                return;
                
            if(arr[i+1] > arr[i])
                swap(arr[i+1] , arr[i] );
        }
        
    }
};
