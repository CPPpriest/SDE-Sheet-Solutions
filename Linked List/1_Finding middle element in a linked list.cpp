class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        if(head == NULL)
            return -1;
        
        if(head -> next == NULL)
            return head -> data;
        
        int len = 1;
        Node* p = head;
        
        
        bool switchKey  = true;
        
        while(len != 0)
        {
            p = p-> next;
            
            if(switchKey)
                ++len;
            else
                --len;
                
            if(p == NULL)
            {
                --len;
                p = head;
                
                if(len%2 == 0)
                    ++len;
                len /= 2;
                switchKey = false;
            }
            
        }
        
        return p->data;
        
    }
};
