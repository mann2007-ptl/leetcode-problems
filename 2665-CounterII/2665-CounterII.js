// Last updated: 4/13/2026, 3:12:38 PM
1/**
2 * @param {integer} init
3 * @return { increment: Function, decrement: Function, reset: Function }
4 */
5var createCounter = function(init) {
6    let value = init;
7
8    return {
9        increment:function(){
10            value++;
11            return value;
12        },
13        
14        decrement:function(){
15            value--;
16            return value;
17        },
18
19        reset:function(){
20            value=init;
21            return value;
22        }
23    }
24};
25
26/**
27 * const counter = createCounter(5)
28 * counter.increment(); // 6
29 * counter.reset(); // 5
30 * counter.decrement(); // 4
31 */