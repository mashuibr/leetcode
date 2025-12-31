/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(!head||!head->next||!k)return head;

    int n=1;
    struct ListNode* p=head;

    while(p->next){
        p=p->next;
        n++;
    }
    p->next=head;
    k%=n;
    
    for(int i=0;i<n-k-1;i++)head=head->next;
    struct ListNode* tmp=head->next;
    head->next=NULL;
    head=tmp;
    return head;

}