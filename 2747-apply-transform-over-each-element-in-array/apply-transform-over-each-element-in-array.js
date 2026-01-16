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