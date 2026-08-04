// Last updated: 8/4/2026, 3:59:26 PM
1class MyLinkedList {
2public:
3    class Node {
4    public:
5        int data;
6        Node* next;
7
8        Node(int data) {
9            this->data = data;
10            next = NULL;
11        }
12    };
13
14    Node* head;
15
16    MyLinkedList() { head = NULL; }
17
18    int get(int index) {
19        Node* temp = head;
20
21        while (temp != NULL && index > 0) {
22            temp = temp->next;
23            index--;
24        }
25        if (temp == NULL) {
26            return -1;
27        }
28
29        return temp->data;
30    }
31
32    void addAtHead(int val) {
33        Node* newNode = new Node(val);
34
35        newNode->next = head;
36        head = newNode;
37    }
38
39    void addAtTail(int val) {
40        Node* newNode = new Node(val);
41
42        if (head == NULL) {
43            head = newNode;
44            return;
45        }
46
47        Node* temp = head;
48
49        while (temp->next != NULL) {
50            temp = temp->next;
51        }
52
53        temp->next = newNode;
54    }
55
56    void addAtIndex(int index, int val) {
57        Node* newNode = new Node(val);
58
59        if (index == 0) {
60            addAtHead(val);
61            return;
62        }
63
64        Node* temp = head;
65
66        while (temp != NULL && index > 1) {
67            temp = temp->next;
68            index--;
69        }
70
71        if (temp == NULL) {
72            return;
73        }
74
75        newNode->next = temp->next;
76        temp->next = newNode;
77    }
78
79    void deleteAtIndex(int index) {
80        Node* temp = head;
81
82        if (index == 0) {
83            Node* del = head;
84            head = head->next;
85            delete del;
86            return;
87        }
88
89        while (temp != NULL && index > 1) {
90            temp = temp->next;
91            index--;
92        }
93
94        if (temp == NULL || temp->next == NULL) {
95            return;
96        }
97
98        temp->next = temp->next->next;
99    }
100};
101
102/**
103 * Your MyLinkedList object will be instantiated and called as such:
104 * MyLinkedList* obj = new MyLinkedList();
105 * int param_1 = obj->get(index);
106 * obj->addAtHead(val);
107 * obj->addAtTail(val);
108 * obj->addAtIndex(index,val);
109 * obj->deleteAtIndex(index);
110 */