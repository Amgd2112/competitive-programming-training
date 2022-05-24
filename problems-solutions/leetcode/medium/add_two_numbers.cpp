#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

typedef struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
} list_node;

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
  int val = 0;
  ListNode *head = new ListNode(), *tail = head, *last;

  for (; l1 && l2;
       last = tail, tail = tail->next, l1 = l1->next, l2 = l2->next) {
    val = (l1->val) + (l2->val) + (tail->val);
    tail->val = (val >= 10) ? val - 10 : val;
    tail->next = new ListNode(val >= 10);
  }

  for (; l1; last = tail, tail = tail->next, l1 = l1->next) {
    val = (l1->val) + (tail->val);
    tail->val = (val >= 10) ? val - 10 : val;
    tail->next = new ListNode(val >= 10);
  }

  for (; l2; last = tail, tail = tail->next, l2 = l2->next) {
    val = (l2->val) + (tail->val);
    tail->val = (val >= 10) ? val - 10 : val;
    tail->next = new ListNode(val >= 10);
  }

  if (!(tail->val)) last->next = nullptr;
  return head;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n, m;
  scanf("%d%d", &n, &m);
  list_node *l1 = new list_node(), *l2 = new list_node();

  int val;
  for (list_node *t1 = l1, int i = 0; i < n; i++, t1 = t1->next) {
    scanf("%d", &val);
    t1->next = new list_node(val);
  }

  for (list_node *t2 = l2, int j = 0; j < n; j++, t2 = t2->next) {
    scanf("%d", &val);
    t2->next = new list_node(val);
  }

  for (list_node* s = addTwoNumbers(l1->next, l2->next); s; s = s->next) {
    printf("%d ", s->val);
  }

  return 0;
}