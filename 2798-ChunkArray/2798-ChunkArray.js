// Last updated: 5/2/2026, 11:26:08 pm
var chunk = function(arr, size) {
    let result = [];

    for (let i = 0; i < arr.length; i += size) {
        result.push(arr.slice(i, i + size));
    }

    return result;
};
