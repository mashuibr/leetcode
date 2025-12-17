/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode result;
    result.next=NULL;
    struct ListNode* x=&result;
    struct ListNode* p1,*p2;
    p1=list1;
    p2=list2;
    while(p1!=NULL && p2!=NULL){
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        if(p1->val>p2->val){
            newNode->val=p2->val;
            newNode->next=NULL;
            p2=p2->next;
        }
        else{
            newNode->val=p1->val;
            newNode->next=NULL;
            p1=p1->next;
        }
        x->next=newNode;
        x=x->next;
    }
    while (p1 != NULL) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = p1->val;
        newNode->next = NULL;
        x->next = newNode;
        x = x->next;
        p1 = p1->next;
    }

    while (p2 != NULL) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = p2->val;
        newNode->next = NULL;
        x->next = newNode;
        x = x->next;
        p2 = p2->next;
    }

    return result.next;
}