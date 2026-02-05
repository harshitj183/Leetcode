// Last updated: 5/2/2026, 11:26:16 pm
/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) { 


    return function() {
     

return n++;
    };
};



/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */