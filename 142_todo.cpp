#include <iostream>
#include <string>
#include <unordered_set>

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
    ListNode *detectCycle(ListNode *head) 
    {
        unordered_set<ListNode *> uset;

        while (head)
        {
            if (uset.find(head) != uset.end())
                return head;
            uset.insert(head);
            head = head->next;
        }
        return nullptr;
    }
};