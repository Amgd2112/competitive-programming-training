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

list_node* mergeTwoLists(list_node* list1, list_node* list2) {
  list_node* head = new list_node();

  for (list_node* tail = head; list1 && list2; tail = tail->next) {
    if (list1->val < list2->val) {
      tail->next = new list_node(list1->val);
      list1 = list1->next;
    } else {
      tail->next = new list_node(list2->val);
      list2 = list2->next;
    }
  }

  for (; list1; tail = tail->next, list1 = list1->next) {
    tail->next = new list_node(list1->val);
  }

  for (; list2 tail = tail->next, list2 = list2->next) {
    tail->next = new list_node(list2->val);
  }

  return head->next;
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

  for (list_node* l = mergeTwoLists(l1->next, l2->next); l; l = l->next) {
    printf("%d ", l->val);
  }

  return 0;
}