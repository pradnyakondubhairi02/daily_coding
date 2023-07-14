/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };
        

*****************************************************************/

Node* reverseLinkedList(Node *head)
{
    
    Node*curr=head;
    Node*prev=NULL;
    Node*frwrd=NULL;

    if(head==NULL || head->next==NULL){
        return head;
    }

    while(curr!=NULL) {
        frwrd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=frwrd;
    }

    return prev;
}
