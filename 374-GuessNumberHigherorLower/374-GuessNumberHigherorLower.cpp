// Last updated: 3/9/2026, 5:02:12 PM
1/** 
2 * Forward declaration of guess API.
3 * @param  num   your guess
4 * @return 	     -1 if num is higher than the picked number
5 *			      1 if num is lower than the picked number
6 *               otherwise return 0
7 * int guess(int num);
8 */
9
10class Solution {
11public:
12    int guessNumber(int n) {
13        int i=1;
14        int j=n;
15
16        while(i<=j){
17            int mid = i + (j-i)/2;
18            int result = guess(mid);
19
20            if(result == 0){
21                return mid;
22            }
23            else if(result == 1){
24                i = mid + 1;
25            }
26            else{
27                j = mid - 1;
28            }
29        }
30        return -1;
31    }
32};