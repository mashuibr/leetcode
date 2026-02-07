/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* mergeTwo(struct ListNode* a, struct ListNode* b) {
    if (!a) return b;
    if (!b) return a;
    if (a->val <= b->val) {
        a->next = mergeTwo(a->next, b);
        return a;
    } else {
        b->next = mergeTwo(a, b->next);
        return b;
    }
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    int n = listsSize;
    if (n == 0) return NULL;
    if (n == 1) return lists[0];
    
    int mid = n / 2;
    struct ListNode* l1 = mergeKLists(lists, mid);
    struct ListNode* l2 = mergeKLists(lists + mid, n - mid);
    return mergeTwo(l1, l2);
}