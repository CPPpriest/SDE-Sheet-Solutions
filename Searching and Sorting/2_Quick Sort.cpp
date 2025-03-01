class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(high > low)
        {
            int q = partition(arr,low,high);
            quickSort(arr, low, q-1);
            quickSort(arr, q+1, high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int x = arr[high];
        
        int i=low-1;
        int j = low;
        
        while(j < high)
        {
            if(arr[j] < x )
            {
                ++i;
                swap(arr[i],arr[j]);
            }
            ++j;
        }
        
        swap(arr[i+1], arr[j]);
        
        return i+1;
    }
};
