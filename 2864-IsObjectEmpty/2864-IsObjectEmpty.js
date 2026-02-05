// Last updated: 5/2/2026, 11:26:00 pm
/**
 * @param {Object|Array} obj
 * @return {boolean}
 */var isEmpty = function(obj) {
    if (Array.isArray(obj)) {
        return obj.length === 0;
    }
    return Object.keys(obj).length === 0;
};
