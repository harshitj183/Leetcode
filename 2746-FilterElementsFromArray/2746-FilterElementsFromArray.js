// Last updated: 5/2/2026, 11:26:13 pm
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
 let arrres = [] ; 
 let i =0; 
for (let val of arr){
 i++;   
      if (fn(val,i-1)){

        arrres.push(val);
      }


}
return  arrres;
};


  