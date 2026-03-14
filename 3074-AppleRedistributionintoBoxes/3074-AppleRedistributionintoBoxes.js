// Last updated: 3/14/2026, 10:35:35 PM
1/**
2 * @param {number[]} apple
3 * @param {number[]} capacity
4 * @return {number}
5 */
6var minimumBoxes = function (apple, capacity) {
7    let total = 0;
8
9    for (let i = 0; i < apple.length; i++) {
10        total = total + apple[i];
11    }
12
13    capacity = capacity.sort((a, b) => b - a);
14
15    let boxes = 0;
16
17    for (let i = 0; i < capacity.length; i++) {
18        total = total - capacity[i];
19        boxes++;
20
21        if (total <= 0) {
22            break;
23        }
24
25    }
26
27
28    return boxes;
29};