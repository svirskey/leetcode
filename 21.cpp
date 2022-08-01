#include <iostream>

using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution 
{
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode *head = new ListNode();
        ListNode *tmp = head;
        ListNode **lst;

        while (list1 || list2)
        {
            if (list1 && list2)
                lst = (list1->val < list2->val) ? &list1 : &list2;
            else
                lst = (list1) ? &list1 : &list2;

            tmp->next = new ListNode((*lst)->val);
            *lst = (*lst)->next;
            tmp = tmp->next;
        }
        tmp = head;
        head = head->next;
        delete tmp;
        return head->next;
    }
};