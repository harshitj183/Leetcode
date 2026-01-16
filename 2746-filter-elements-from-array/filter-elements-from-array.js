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


  