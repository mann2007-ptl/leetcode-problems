// Last updated: 6/2/2026, 9:18:23 PM
1class StockSpanner {
2    
3public:
4    stack<pair<int,int>> st;
5    StockSpanner() {
6        
7    }
8    
9    int next(int price) {
10        int span = 1;
11
12        while (!st.empty() && st.top().first <= price) {
13            span += st.top().second;
14            st.pop();
15        }
16
17        st.push({price, span});
18        return span;
19    }
20};
21/**
22 * Your StockSpanner object will be instantiated and called as such:
23 * StockSpanner* obj = new StockSpanner();
24 * int param_1 = obj->next(price);
25 */