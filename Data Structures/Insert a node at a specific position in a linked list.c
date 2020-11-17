SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode *temp1=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    temp1->data=data;
    if(head==NULL){
       head=temp1;
       return head;
    }else{
        int i=0;
        SinglyLinkedListNode *temp=head,*temp2;
        while(i<position){
            temp2=temp;
            temp=temp->next;
            i++;
        }
        temp1->next=temp;
        temp2->next=temp1;
        return head;
    }
}
