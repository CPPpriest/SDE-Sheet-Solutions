class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        //ASSUMPTION GIVEN: Source vertex s = 0
        
        vector<int> result;

        vector<bool> isBlack(V,false); 
        vector<bool> isGray(V,false); 

        std::queue<int> q;
        
        q.push(0);
        isGray[ 0 ] = true;
        
        while(!q.empty())
        {
            int s = q.front();
            q.pop();
            isGray[ s ] = true;
            
    
            for(int i=0; i<adj[s].size(); ++i)
            {
                if( ! isBlack[ adj[s][i] ] && ! isGray[ adj[s][i] ] )
                {    
                    q.push(adj[s][i]);
                    isGray[adj[s][i]] = true;
                }
            }
            
            
            result.push_back(s);
            isBlack[s] = true;
            
        }
        
        
        return result;
        
    }
};
