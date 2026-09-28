/*
  Implement a function `isPalindrome` which takes a string as argument and returns true/false as its result.
  Note: the input string is case-insensitive which means 'Nan' is a palindrom as 'N' and 'n' are considered case-insensitive.
*/

function isPalindrome(str) {
  var str1 = str.replace(/[^a-zA-Z]/g, "").toLowerCase();
  let i = 0, j = str1.length - 1;

  while(i < j) {
    if(str1[i] != str1[j]) return false;
    i++;
    j--;
  }
  return true;
}

module.exports = isPalindrome;
