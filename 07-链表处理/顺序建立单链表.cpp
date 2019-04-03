#include <iostream>
#include <cstdio>
using namespace std;

typedef struct LNode {
	int data;
	struct LNode * next;
}LNode;

void createListR(LNode *&L, int n) {
	LNode *s, *r;
	L = (LNode *)malloc(sizeof(LNode));
	L->next = NULL;
	r = L; //r永远指向末尾元素
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		s = (LNode *)malloc(sizeof(LNode));
		s->data = a;
		r->next = s;
		r = r->next;
	}
	r->next = NULL;
}

void printlist(LNode *L) {
	LNode *r;
	r = L->next;
	while (r != NULL) {
		printf("%d ", r->data);
		r = r->next;
	}
}

int main(int argc, char *argv[]) {
	int n;
	LNode *L;
	scanf("%d", &n);
	createListR(L, n);
	printlist(L);
}