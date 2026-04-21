Array.prototype.groupBy = function(fn) {
  const result = {};
  
  for (const item of this) {
    const key = fn(item);   // apply callback to get the group key
    if (!result[key]) {
      result[key] = [];     // initialize array if key not present
    }
    result[key].push(item); // push item into the correct group
  }
  
  return result;
};
