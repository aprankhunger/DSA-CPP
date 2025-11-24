/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public void deleteNode(ListNode node) {
        int value = node.next.val;
        ListNode node1 = node.next.next;
        node.val = value;
        node.next = node1;

        
    }
}