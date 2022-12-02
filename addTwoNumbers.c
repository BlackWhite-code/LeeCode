/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
	// 虽然理解的时候要按照数据结构是struct ListNode*但是定义的时候要把*放在变量名前面
	struct ListNode* head = NULL, *tail = NULL;
	int carry = 0;
	while(l1 || l2){
		int n1 = l1?l1->val:0;
		int n2 = l2?l2->val:0;
		int sum = n1 + n2 + carry;
		if(!head){
			// malloc函数返回的是void*的类型，需要强制转换类型
			head = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
			head->val = sum % 10;
			head->next = NULL;
		}
		else{
			tail->next = (struct ListNode*)malloc(sizeof(struct ListNode));
			tail->next->val = sum % 10;
			tail->next->next = NULL;
			tail = tail->next;
		}
		carry = sum / 10;
		if(l1){
			l1 = l1->next;
		}
		if(l2){
			l2 = l2->next;
		}
	}
	if(carry){
		// tail后的节点定义出来，把最后的一个位要添加到后面
		tail->next = (struct ListNode*)malloc(sizeof(struct ListNode));
		tail->next->tal = carry;
		tail->next->next = NULL;
		tail = tail->next;
	}
	
	return head;
}