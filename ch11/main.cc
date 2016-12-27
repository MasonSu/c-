#include <iostream>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* swapPairs(ListNode* head) {
	if (head == nullptr)
		return nullptr;
	ListNode dummy(0);
	dummy.next = head;
	ListNode *prev = &dummy, *cur = prev->next;
	while (cur != nullptr && cur->next != nullptr) {
		prev->next = cur->next;
		cur->next = cur->next->next;
		prev->next->next = cur;
		prev = cur;
		cur = prev->next;
	}
	if (cur != nullptr)
		prev->next = cur;
	return dummy.next;
}

int main()
{
	ListNode n1(1), n2(2), n3(3), n4(4);
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	ListNode *n5 = swapPairs(&n1);
	while (n5) {
		std::cout << n5->val << " ";
		n5 = n5->next;
	}
	return 0;
}