function binaryRecursive(arr, searchKey, left, right) {
  if (left > right) {
    return false;
  }
  let middle = Math.floor((left + right) / 2);
  if (arr[middle] === searchKey) {
    return true;
  }
  if (arr[middle] < searchKey) {
    return binaryRecursive(arr, searchKey, left, middle - 1);
  } else {
    return binaryRecursive(arr, searchKey, middle + 1, right);
  }
}
let arr = [1, 3, 5, 7, 8, 9];
let x = 6;

if (binaryRecursive(arr, x, 0, arr.length - 1)) {
  console.log("Element found");
} else {
  console.log("Element not found!");
}
