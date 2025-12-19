/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* current = head;
    int count=0;
    
    for(count = 0; current != NULL; current = current->next , count++);
    current = head;
    if(count==n){
        head=head->next;
        free(current);
        return head;
    }
    for(int i=count;i-n-1!=0;i--){
        current=current->next;
    }
    struct ListNode* removeNode = current->next;
    current->next=current->next->next;
    removeNode->next=NULL;
    free(removeNode);
    return head;
}