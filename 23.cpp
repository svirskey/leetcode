#include <iostream>
#include <string>
#include <queue>

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
    ListNode* mergeKLists(vector<ListNode*> & lists) 
    {
        priority_queue<int, vector<int>, std::greater<int>> queue;
        ListNode *begin = new ListNode(0);
        ListNode *tmp = begin;

        for (auto &lst: lists)
        {
            while (lst)
            {
                queue.push(lst->val);
                lst = lst->next;
            }
        }
        while (!queue.empty())
        {
            tmp->next = new ListNode(queue.top());
            queue.pop();
            tmp = tmp->next;
        }
        tmp = begin;
        begin = begin->next;
        delete tmp;
        return begin;
    }
};