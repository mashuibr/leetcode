/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry=0 ,sum=0;;
    struct ListNode head ;
    struct ListNode *pointer=&head;
    head.next=NULL;
    //struct ListNode *result = malloc(sizeof(struct ListNode));
    //head=result;
    while(l1!=NULL || l2!=NULL){
        sum=carry;
        if(l1!=NULL){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2!=NULL){
            sum+=l2->val;
            l2=l2->next;
        }
        carry=sum/10;
        sum=sum%10;

        struct ListNode *newNode = malloc(sizeof(struct ListNode));
        newNode->val=sum;
        newNode->next=NULL;
        
        pointer->next=newNode;
        pointer=newNode;
    }
    if(carry==1){
        struct ListNode *newNode = malloc(sizeof(struct ListNode));
        newNode->val=carry;
        newNode->next=NULL;
        pointer->next=newNode;
        pointer=newNode;
    }
    return head.next;
}