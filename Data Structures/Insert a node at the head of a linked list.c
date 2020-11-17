SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *temp=head,*newNode;
    newNode=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    newNode->data=data;
    if(head==NULL){
        head=newNode;
        return head;
    }else{
        newNode->next=head;
        head=newNode;
        return head;
    }
}
