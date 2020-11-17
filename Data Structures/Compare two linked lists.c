bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *temp1=head1,*temp2=head2;
    int i=0,j=0;
    while(temp1!=NULL){
        i++;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        j++;
        temp2=temp2->next;
    }
    if(i==j){
        while(head1->next!=NULL){
            if(head1->data!=head2->data){
                return 0;
            }
            head1=head1->next;
            head2=head2->next;
        }
    }else{
        return 0;
    }
    return 1;
}
