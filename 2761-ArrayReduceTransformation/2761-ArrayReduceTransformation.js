// Last updated: 5/2/2026, 11:26:10 pm
/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {

let val = init;
 for(let i in nums){

 val= fn(val ,nums[i] )
    
 }
return val;




    
};