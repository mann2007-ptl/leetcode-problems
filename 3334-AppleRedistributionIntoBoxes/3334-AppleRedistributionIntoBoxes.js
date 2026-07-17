// Last updated: 7/17/2026, 4:24:04 PM
/**
 * @param {number[]} apple
 * @param {number[]} capacity
 * @return {number}
 */
var minimumBoxes = function (apple, capacity) {
    let total = 0;

    for (let i = 0; i < apple.length; i++) {
        total = total + apple[i];
    }

    capacity.sort((a, b) => b - a);

    let boxes = 0;

    for (let i = 0; i < capacity.length; i++) {
        total = total - capacity[i];
        boxes++;

        if (total <= 0) {
            break;
        }

    }


    return boxes;
};