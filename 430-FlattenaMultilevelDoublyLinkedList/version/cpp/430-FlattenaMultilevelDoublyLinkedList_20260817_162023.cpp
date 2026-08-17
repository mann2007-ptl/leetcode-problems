// Last updated: 8/17/2026, 4:20:23 PM
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* prev;
7    Node* next;
8    Node* child;
9};
10*/
11
12class Solution {
13public:
14    Node* flatten(Node* head) {
15        Node * temp = head;
16
17        while(temp != NULL){
18            if(temp -> child != NULL){
19                Node * next = temp -> next;
20                Node * child = temp -> child;
21
22                temp -> next = child;
23                child -> prev = temp;
24                temp -> child = NULL;
25
26                while(child -> next != NULL){
27                  child = child -> next;
28                }
29
30                child -> next = next;
31
32                if(next != NULL){
33                    next -> prev = child;
34                }
35
36            }
37            temp = temp -> next;
38        }
39        return head;
40    }
41};