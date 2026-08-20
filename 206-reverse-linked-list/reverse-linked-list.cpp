class Solution {
public:
 



ListNode* solve(ListNode* head ,ListNode* curr){

ListNode* prev = nullptr;

while(curr != nullptr){
 
ListNode* next = curr->next;


curr->next = prev;


prev = curr;
curr = next;
next = head;

}
 

return prev;
 }
    ListNode* reverseList(ListNode* head) {

 ListNode* curr = head;



return solve(head,curr);



         
    }
};