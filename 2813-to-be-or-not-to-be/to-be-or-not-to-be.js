var expect = function(val) {

    return {
        toBe: function(value) {
            if (value === val)
                return true;
            else
                throw new Error("Not Equal");
        },

        notToBe: function(value) {
            if (value !== val)
                return true;
            else
                throw new Error("Equal");
        }
    };
};