SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    if(position==0){
        head=head->next;
        return head;
    }else{
        SinglyLinkedListNode*temp=head,*temp1;
        int i=0;
    while(i<position){
        temp1=temp;
        temp=temp->next;
        i++;
    }
    temp1->next=temp->next;
    return head;
    }
}
