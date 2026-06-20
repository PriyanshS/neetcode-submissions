class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Count total nodes
        int totalNodes = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            totalNodes++;
            temp = temp->next;
        }
        
        // Position to remove from start (0-indexed)
        int target = totalNodes - n;
        
        // If removing the head
        if (target == 0) {
            ListNode* newHead = head->next;
            return newHead;
        }
        
        // Find node BEFORE the target
        ListNode* current = head;
        for (int i = 0; i < target - 1; i++) {
            current = current->next;
        }
        
        // Remove target node
        current->next = current->next->next;
        
        return head;
    }
};