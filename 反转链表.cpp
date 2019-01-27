#include <iostream>
#include <set>
#include <map>
#include <fstream>
#include <string>

struct node {
    int value;
    node *next;
};

using namespace std;

node *reverseList(node *head) {
    /*思想:  把原始链表节点一个个切下来，粘到左边的新链表上（左链表初始为空)
     
     链表变化过程:
       node1->node2->node3-node4
     
       node1 ... node2->node3->node4
       node1<-node2 .... node3->node4
       node1<-node2<-node3 .... node4
       node1<-node2<-node3<-node4
     
     代码:
        循环切下每个节点,依次粘到左侧链表中
            1. 保存被切节点的next, 即切后原始链表的头结点
            2. 切下的节点粘贴到左边
            3. 左边链表增加节点后更新头结点
            4. 迭代下一个被切的节点, 即原始链表的头结点
     
     */


    struct node *leftList = NULL;//（左链表初始为空）
    struct node *curNode = head; //链表要切下的第一个节点
    while (curNode) {//切下每一个节点
        head = curNode->next;// cur被切下后,cur->next变成原始链表的新头结点,需要保存
        curNode->next = leftList;//被切下的节点指向左边新链表,即粘到左边的链表上
        leftList = curNode; //左边的新链表被新加入一个节点,需要更新头结点
        curNode = head;//迭代下一个被切的节点,即现在原始链表的头结点(被之前保存下来的)
    }
    return leftList;
}

node *reverseList2(node *left, node *cur) {
    if (cur == NULL) return left;
    node *oldHead = cur->next;
    cur->next = left;
    return reverseList2(cur, oldHead);
}

int main() {
    node *list1 = new node();
    node *list2 = new node();
    node *list3 = new node();
    node *list4 = new node();
    list1->value = 1;
    list1->next = list2;
    list2->value = 2;
    list2->next = list3;
    list3->value = 3;
    list3->next = list4;
    list4->value = 4;
    list4->next = NULL;
}
