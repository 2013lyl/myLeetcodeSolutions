/**
 * @param {number} left
 * @param {number} right
 * @return {number}
 */
var checkZ = function(num) {
    if (num == 0 || num == 1) return false;

    for (let i=2;i*i<=num;i++) {
        if (num % i == 0) return false;
    }
    return true;
}

var check = function(num) {
    let cnt=0;
    while (num > 0) {
        let now = num % 2;
        if (now == 1) cnt++;
        num >>= 1;
    }
    return checkZ(cnt);
}

var countPrimeSetBits = function(left, right) {
    let ans=0;
    for (let i=left;i<=right;i++) {
        if (check(i)) ans++;
    }
    return ans;
};
