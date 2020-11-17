SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
        if(head == NULL) {
        return head;
    }
   SinglyLinkedListNode * p = NULL;
   SinglyLinkedListNode* q = head;
    SinglyLinkedListNode* r = q->next;
    while(q) {
        r = q->next;
        q->next = p;
        p = q;
        q = r;
    }
    return p;
}
