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
  list_node* tail = head;

  while (list1 && list2) {
    if (list1->val < list2->val) {
      tail->next = new list_node(list1->val);
      list1 = list1->next;
    } else {
      tail->next = new list_node(list2->val);
      list2 = list2->next;
    }

    tail = tail->next;
  }

  while (list1) {
    tail->next = new list_node(list1->val);
    tail = tail->next;
    list1 = list1->next;
  }

  while (list2) {
    tail->next = new list_node(list2->val);
    tail = tail->next;
    list2 = list2->next;
  }

  return head->next;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n, m;
  scanf("%d%d", &n, &m);
  list_node *l1 = new list_node(), *l2 = new list_node(), *t1 = l1, *t2 = l2;

  int val;
  for (int i = 0; i < n; i++) {
    scanf("%d", &val);
    t1->next = new list_node(val);
    t1 = t1->next;
  }

  for (int j = 0; j < n; j++) {
    scanf("%d", &val);
    t2->next = new list_node(val);
    t2 = t2->next;
  }

  list_node* sorted_list = mergeTwoLists(l1->next, l2->next);
  while (sorted_list) {
    printf("%d ", sorted_list->val);
    sorted_list = sorted_list->next;
  }

  return 0;
}