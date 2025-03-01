class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        Node* pred = NULL;
        Node* succ = head;
        
        Node* curr = head;
        
        while(curr != NULL)
        {
            succ = curr -> next;
            
            curr -> next = pred;
            
            pred = curr;
            curr = succ;
        }
        
        return pred;
        
    }
    
};
