class Solution
{
    public:
    //Function to rotate a linked list.
    
    /*
    Node* rotate(Node* head, int k)
    {
        if(head == NULL) return head;
        
        
        Node* mainHead;
        Node* pred = head;
        
        int i=0;
        while(true )
        {
            if(i == k-1)
                  mainHead = pred;
            
            if(pred->next == NULL)
                break;
            pred = pred -> next;
            ++i;
        }
        
        pred -> next = head;
        head = mainHead -> next;
        mainHead -> next = NULL;
        
        return head;
    }
    */
    Node* rotate(Node* head, int k)
    {
        if(head != NULL)
        {
            Node* p = head;
            // k is less than or equal to size of linkedList
            for(int i=0; i<k-1; ++i)
            {
                p = p -> next;       
            }
            //p is the predescor of mainHead
            
            if(p->next != NULL)
            {
                Node* q = p;
                while(q->next !=NULL)
                    q = q-> next;
                q->next = head;
                
                head = p -> next;
                p -> next = NULL;
            }
        }
        return head;
    }
};
