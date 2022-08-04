#include <iostream>
#include <string>

using namespace std;

 //Definition for singly-linked list.
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
    ListNode* middleNode(ListNode* head) 
    {
        ListNode *tmp = head;
        int size = 0, i = 0;
        while (tmp)
        {
            tmp = tmp->next;
            size++;
        }
        tmp = head;
        size = size / 2;
        while (i < size)
        {
            tmp = tmp->next;
            i++;
        }
        return tmp;
    }
};