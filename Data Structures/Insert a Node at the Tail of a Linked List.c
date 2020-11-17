SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode*temp= head,*newNode;
    SinglyLinkedListNode *newnode = (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    newnode->data = data;
    newnode->next = NULL;
    if(temp==NULL){
        head= newnode;
        return head;
    }
    else {
        while (temp->next!= NULL)
            temp = temp->next;
        temp->next=newnode;
        return head;
    }   
}
