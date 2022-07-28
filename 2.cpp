


 // Definition for singly-linked list.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        bool unit = false;
        ListNode *head = new ListNode();
        ListNode *tmp = head;

        while (l1 || l2)
        {
            int a = (l1) ? l1->val : 0,
                b = (l2) ? l2->val : 0;

            tmp->next = new ListNode((a + b + (int)unit) % 10);
            unit = (a + b + (int)unit > 9) ?  true : false;
           
            tmp = tmp->next;
            l1 = (l1) ? l1->next : nullptr;
            l2 = (l2) ? l2->next : nullptr;
        }
        if (unit)
            tmp->next = new ListNode(1);
        return head->next;
    }
};


int main()
{
    Solution s;

}