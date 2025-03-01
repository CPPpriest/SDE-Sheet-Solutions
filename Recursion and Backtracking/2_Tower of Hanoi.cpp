class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    
    
    long long moveDisk(int N, int source, int dest, long long& count)
    {
        ++count;
        printf("move disk %i from rod %i to rod %i\n", N, source, dest);
    }
    
    
    long long toh(int N, int from, int to, int aux) {   //Move tower
        
        long long count = 0;
        
        if(N == 1)
        {
            moveDisk(N, from, to, count);
        }
        else{
            count += toh(N-1, from, aux, to);  // move top N-1 disks from source to aux
            moveDisk(N, from, to, count);
            count += toh(N-1, aux, to, from);  // move top N-1 disks from aux to source
        }
        
        
        return count;
    }
    
    

};
