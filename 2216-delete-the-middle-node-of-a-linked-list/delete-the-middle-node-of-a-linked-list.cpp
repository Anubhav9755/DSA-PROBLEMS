class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp=head;
        ListNode* temp2=nullptr;
        for(int i=0;i<(count/2)-1;i++){
            temp=temp->next;
        }
        temp2=temp->next;
        temp->next=temp2->next;
        return head;
    }
};