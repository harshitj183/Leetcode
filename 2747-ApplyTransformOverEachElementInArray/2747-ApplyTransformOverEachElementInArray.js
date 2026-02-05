// Last updated: 5/2/2026, 11:26:12 pm
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function (arr, fn) {
    let res = [];
let pls;
    for (let i in arr){

pls = fn(arr[+(i)],+(i));


res.push(pls);
    }

 return res;
    
};