#include <iostream>
#include <cstdlib>
using namespace std;

struct node {
	int data;
	node* next;	
};

//创建链表
node* create(int arry[]) {
	node *p, *pre, *head;
	head = new node; //为头结点申请空间
	head->next = NULL;
	pre = head;
	for (int i = 0; i < 5; i++) {
		p = new node;
		p->data = arry[i];
		p->next = NULL;
		pre->next = p;
		pre = p;
	}
	return head;
}

//查找元素
int search(node* head, int x) {
	int count = 0; //x个数
	node* p = head->next;
	while (p != NULL) {
		if (p->data == x) {
			count++;
		}
		p = p->next;
	}
	return count;
}

//将x插入以head为头结点的链表的pos位置
void insert(node* head, int pos, int x) {
	node* p = head;
	for (int i = 0; i < pos - 1; i++) { 
		p = p->next; //p指向pos的前一个位置
	}
	node* q = new node;
	q->data = x;
	q->next = p->next;
	p->next = q;
}

//删除数据域为x的结点
void del(node* head, int x) {
	node* p = head->next; //p从第一个结点开始
	node* pre = head;     //pre始终只想p的前驱结点
	while (p != NULL) {
		if (p->data == x) {
			pre->next = p->next;
			delete(p);
			p = pre->next;
		} else {
			pre = p;
			p = p->next;
		}
	}
}

int main(int argc, char *argv[]) {
	int arr[10] = {5, 3, 6, 1, 2};
	node* L = create(arr); //新建链表头指针head返回L
	L = L->next;          //从第一个结点开始有数据域
	while (L != NULL) {
		printf("%d ", L->data);
		L = L->next;
	}
	printf("\n");

}