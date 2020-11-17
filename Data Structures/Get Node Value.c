int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    int length=0,i=0;
    SinglyLinkedListNode*temp=head,*temp1=head;
    while(temp!=NULL){
        temp=temp->next;
        length++;
    }
    length-=positionFromTail;
    while(--length>0){
        temp1=temp1->next;
    }
    return temp1->data;
}
