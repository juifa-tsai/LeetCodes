# Algorithm & LeetCode problems

I collect the basic algorithm codes and solution of the [LeetCode](https://leetcode.com) problems. Each problem contains the mine and other optimized solutions. Thus, the big $O$ in tables of the sections are showing the best and worst solution in each code. The level of problems is also denoted by the color marks as following table: 

| Easy | Medium | Hard |
| --- | --- | --- |
| :large_blue_circle: | :large_orange_diamond: | :red_circle: | 

## Data structure
| Type | Detail | code | tech tags | Lv. |
| --- | --- | --- | --- | --- |
| Array | toVector | [array.cpp](dataStructure/array.cpp) | `array` | :large_blue_circle: | 
| Binary tree | [Creation](https://www.geeksforgeeks.org/construct-complete-binary-tree-given-array/) | [tree.cpp](dataStructure/tree.cpp) | `tree` | :large_blue_circle: | 
| Linked list | Creation | [linkedList.cpp](dataStructure/linkedList.cpp) | `linked list` | :large_blue_circle: | 
| Linked list | [Delete](https://leetcode.com/problems/delete-node-in-a-linked-list/discuss/65455/1-3-lines-C++JavaPythonCCJavaScriptRuby) | [01_deleteNode.cpp](dataStructure/linkedList.cpp) | `linked list` | :large_blue_circle: | 


## Search
### Basic algorithms
| Type  | Worst case | Code | Application | tech tag |
| --- | --- | --- | --- | --- |
| Sequential search | $O(n)$ | [01_sequentialSearch.cpp](search/algorithms/01_sequentialSearch.cpp) | unordered, frequent changing data |
| Binary search | $O(\log n)$ | [02_binarySearch.cpp](search/algorithms/02_binarySearch.cpp) | ordered, stable data |
| Interpolation search | $O(\log\log n)$ | [03_interpolationSearch.cpp](search/algorithms/03_interpolationSearch.cpp) | ordered, stable data |
| Fibonacci search |  $O(\log n)$ |  | ordered, stable data |

### Leetcode problems
| Type | Detail | Best solution | Worst solution | code | tech tags | Lv. |
| --- | --- | --- | --- | --- | --- | --- |
| 2 sum | [Unsorted array](https://leetcode.com/articles/two-sum/)  | $O(n)$ | $O(n^2)$ | [01_twoSum.cpp](search/01_twoSum.cpp) | `array` `Hash map`| :large_blue_circle: |
| 2 sum | [Sorted array](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/)  | $O(n)$| $O(\log n)$  | [02_twoSum.cpp](search/02_twoSum.cpp) | `array` `binary search`| :large_blue_circle: | 
| 2 sum | [Data structure design](http://www.cnblogs.com/grandyang/p/5184143.html)  | $O(n)$ | $O(n^2)$  | [03_twoSum.cpp](search/03_twoSum.cpp) | `array` `class`| :large_blue_circle: | 
| Single number | [Twice except for one](https://leetcode.com/articles/single-number/)  | $O(n)$ | $O(n^2)$  | [04_singleNumber.cpp](search/04_singleNumber.cpp) | `Hash table` `bit manipulation`| :large_blue_circle: | 
| Binary tree | [Maximum Depth](https://leetcode.com/articles/single-number/)  | $O(n)$ |  | [05_maxDFSBT.cpp](search/05_maxDFSBT.cpp) | `tree` `BFS` `DFS`| :large_blue_circle: |
| Majority element | [Num appears most](https://leetcode.com/articles/majority-element/) | $O(n)$ | $O(n^2)$| [06_majorityElement.cpp](search/06_majorityElement.cpp) | `array` `devide-and-counter` `bit manipulation` | :large_blue_circle: |
| K frequent | [Most top K frequent elements](http://zpjiang.me/2017/11/13/top-k-elementes-system-design/) | $O(n\log k)$/$O(n\log (n-k)$) | $O(n^2)$ | [07_kFrequnce.cpp](search/07_kFrequnce.cpp) | `Hash table` `Heap` `Priority queue` | :large_orange_diamond: |
| Best profit to buy and sell stock | [One transaction](https://leetcode.com/articles/best-time-buy-and-sell-stock/) |  $O(n)$ |  $O(n^2)$ | [08_stockBuySellOneTrans.cpp](search/08_stockBuySellOneTrans.cpp) | `array` | :large_blue_circle: |
| Best profit to buy and sell stock | [Multi-transaction](https://leetcode.com/articles/best-time-buy-and-sell-stock-ii/) |  $O(n)$ |  $O(n^2)$ | [09_stockBuySellMultiTrans.cpp](search/09_stockBuySellMultiTrans.cpp) | `array` `Greedy` | :large_blue_circle: |
| Max area | [Container With Most Water](https://leetcode.com/articles/container-most-water/) |  $O(n)$ |  $O(n^2)$ | [10_mostWaterContain.cpp](search/10_mostWaterContain.cpp) | `array` `two pointers` | :large_orange_diamond:|
| 4 sum | [Find 4 elements to taget sum](https://leetcode.com/problems/4sum/discuss/8549/My-16ms-c++-code) |  | | 11_notSolve.cpp | `array` `two pointers` | :large_orange_diamond:|
| 4 sum | [Count solutions 4 arraies to zero](https://leetcode.com/problems/4sum-ii/discuss/93925/Concise-C++-11-code-beat-99.5) |  $O(n^2)$| | [12_fourSum.cpp](search/12_fourSum.cpp) | `array` `hash map` | :large_orange_diamond:|
| Valid anagram | [compare two string](https://leetcode.com/articles/valid-anagram/) |  $O(n)$| $O(n\log n)$ | [13_validAnagram.cpp](search/13_validAnagram.cpp) | `array` `hash map` `sort` | :large_blue_circle:|
| Contains duplitcate | [Return T/F, in array](https://leetcode.com/articles/contains-duplicate/) |  $O(n)$| $O(n^2)$ | [14_containsDuplicate.cpp](search/14_containsDuplicate.cpp) | `array` `hash map` `sort` | :large_blue_circle:|
| Contains duplitcate | [Return T/F, in array within k elements](https://leetcode.com/articles/contains-duplicate/) |  $O(n)$| $O(n^2)$ | [15_containsNearbyDuplicate.cpp](search/15_containsNearbyDuplicate.cpp) | `array` `hash map` `sort` | :large_blue_circle:|
| Contains duplitcate | [Return T/F, in array within k elements, t difference](https://leetcode.com/articles/contains-duplicate/) |  $O(n)$| | [16_containsNearbyDuplicate.cpp](search/16_containsNearbyDuplicate.cpp) | `array` `hash map` `sort` | :large_orange_diamond: |
| Find duplitcate | [duplicate in n+1 array for 1-n number](https://leetcode.com/articles/find-the-duplicate-number/) | $O(n)$ | | [17_findDuplicate.cpp](search/17_findDuplicate.cpp) | `array` `hash map` `cycle detection` | :large_orange_diamond: |
| Missing number | [First missing postive in sorted array](https://www.geeksforgeeks.org/find-smallest-value-represented-sum-subset-given-array/) |  $O(n)$| | [18_missingNum.cpp](search/18_missingNum.cpp) | `array`  | :large_blue_circle: |
| Missing number  | [First missing postive in unsorted array](https://leetcode.com/problems/first-missing-positive/discuss/17071/My-short-c++-solution-O(1)-space-and-O(n)-time) |  $O(n)$| $O(n\log n)$ | [19_missingNum.cpp](search/19_missingNum.cpp) | `array` `hashmap` `unordered_set` | :red_circle: |
| Missing number  | [Missing in continual positive array](https://leetcode.com/articles/missing-number/) |  $O(n)$| $O(n\log n)$ | [20_missingNum.cpp](search/20_missingNum.cpp) | `array` `hashmap` `unordered_set` `math` | :large_orange_diamond: |


## Sorting
### Basic algorithms
| Type  | Best case | Worst case | Code | Property | Tech tag |
| --- | --- | --- | --- | --- | --- |
| Bubble sort | $O(n^2)$ | $O(n^2)$ | [01_bubbleSort.cpp](sorting/algorithms/01_bubbleSort.cpp) | $O_s(1)$, stable |
| Selection sort | $O(n^2)$ | $O(n^2)$ | [02_selectionSort.cpp](sorting/algorithms/02_selectionSort.cpp) | $O_s(1)$, instable |
| Insertion sort | $O(n)$ | $O(n^2)$ | [03_insertionSort.cpp](sorting/algorithms/03_insertionSort.cpp) |
| Merge sort | $O(n)$ | $O(n^2)$ | [04_mergeSort.cpp](sorting/algorithms/03_insertionSort.cpp) | | `divide-and-counter` |
| Quick sort | $O(n\log n)$ | $O(n^2)$ | [05_quickSort.cpp](sorting/algorithms/04_quickSort.cpp) |
| Radix sort | $O(n)$ | $O(n\log n)$ | [06_radixSort.cpp](sorting/algorithms/05_radixSort.cpp) |
| [Heap sort](https://www.hackerearth.com/zh/practice/notes/heaps-and-priority-queues/)  | $O(n\log n)$ | $O(n\log n)$ | [07_heapSort.cpp](sorting/algorithms/05_heapSort.cpp) | | `binary tree` |
| Binary-tree sort | $O(n\log n)$ | $O(n^2)$ | [08_binaryTreeSort.cpp](sorting/algorithms/07_binaryTreeSort.cpp) | | `binary tree` |

### Leetcode problems
| Type | Detail | Best solution. | Worst solution | code | tech tags | Lv. |
| --- | --- | --- | --- | --- | --- | --- |
| Move zeros | [Move zeros](https://leetcode.com/articles/move-zeroes/)  | $O(n)$ | $O(n^2)$  | [01_moveZeros.cpp](sorting/01_moveZeros.cpp) | `array` `two pointer`| :large_blue_circle: |
| Binary-tree order | [InOrder, no recursive](https://leetcode.com/articles/binary-tree-inorder-traversal/)  | $O(n)$ |  | [02_inorderTraversal.cpp](sorting/02_inorderTraversal.cpp) | `stack` `tree`| :large_orange_diamond: |
| Binary-tree order | [PreOrder, no recursive](https://leetcode.com/problems/binary-tree-preorder-traversal)  | $O(n)$ |  | [03_preorderTraversal.cpp](sorting/03_preorderTraversal.cpp) | `stack` `tree`| :large_orange_diamond: |
| Binary-tree order | [PostOrder, no recursive](https://leetcode.com/problems/binary-tree-postorder-traversal)  | $O(n)$ |  | [04_postorderTraversal.cpp](sorting/04_postorderTraversal.cpp) | `array` `tree`| :red_circle: |
| Linked list | [Odd-even nodes split with fixed order](https://leetcode.com/articles/odd-even-linked-list/)  | $O(n)$ |  | [05_oddEvenNodeSplit.cpp](sorting/05_oddEvenNodeSplit.cpp) | `linked list`| :large_orange_diamond: |
| Linked list | Odd-even values split with fixed order  | $O(n^2)$|  | [06_oddEvenValueSplit.cpp](sorting/06_oddEvenValueSplit.cpp) | `linked list`| :large_orange_diamond: |
| Linked list | Odd-even nodes swap with fixed order  | $O(n)$ |  | [07_oddEvenNodeSwap.cpp](sorting/07_oddEvenNodeSwap.cpp) | `linked list`| :large_orange_diamond: |
| Reverse | [Int, outupt > 32-bit not allowed](https://leetcode.com/problems/reverse-integer/discuss/4057/Shortest-code-possible-in-c++) | $O(n)$ |  | [08_reverseInt.cpp](sorting/08_reverseInt.cpp) | `math`| :large_blue_circle:  |
| Reverse | [String](https://leetcode.com/problems/reverse-string/description/) | $O(n)$ |  | [09_reverseString.cpp](sorting/09_reverseString.cpp) | `string` `two pointers` | :large_blue_circle:  |
| Reverse | [Linked list](https://leetcode.com/articles/reverse-linked-list/) | $O(n)$ |  | [10_reverseLinkedList.cpp](sorting/10_reverseLinkedList.cpp) | `linked list` | :large_blue_circle:  |
| Rotate image | [Clockwise 90 rotate nxn matrix](https://leetcode.com/problems/rotate-image/discuss/19123/6-lines-of-code-and-with-O(1)-space-in-c++) | $O(n)$ |  $O(n^2)$ | [11_rotateImage.cpp](sorting/11_rotateImage.cpp) | `array` | :large_orange_diamond:  |


## Other
| Type | Detail | Best solution | Worst solution | Code | tech tags | Lv. |
| --- | --- | --- | --- | --- | --- | --- |
| Coding | [Fizz Buzz](https://leetcode.com/problems/fizz-buzz/description/) | $O(n)$ | | [01_fizzBuzz.cpp](other/01_fizzBuzz.cpp) | `array` | :large_blue_circle: |
| Add two numbers | [low->high](https://leetcode.com/articles/add-two-numbers/#) | $O(n)$ | | [02_addTwoNums.cpp](other/02_addTwoNums.cpp) | `linked list` | :large_orange_diamond: |
| Add two numbers | [high->low](https://leetcode.com/problems/add-two-numbers-ii/description/) | $O(n)$ | | [03_addTwoNums.cpp](other/03_addTwoNums.cpp) | `linked list` | :large_orange_diamond: |
| Product of array | [product of array except self](https://leetcode.com/problems/product-of-array-except-self/discuss/65747/How-from-O(N)-to-O(1)) | $O(n)$ | | [04_productExceptSelf.cpp](other/04_productExceptSelf.cpp) | `array` `math`| :large_orange_diamond: |
| Excel title | [number -> alphabet](https://leetcode.com/problems/excel-sheet-column-title/discuss/51398/My-1-lines-code-in-Java-C++-and-Python) | $O(n)$ | | [05_excelTitleNumToAlpha.cpp](other/05_excelTitleNumToAlpha.cpp) | `string` `math`| :large_blue_circle: |
| Excel title | [alphabet -> number](https://leetcode.com/problems/excel-sheet-column-title/discuss/51398/My-1-lines-code-in-Java-C++-and-Python) | $O(n)$ | | [06_excelTitleAlphaToNum.cpp](other/06_excelTitleAlphaToNum.cpp) | `string` `math`| :large_blue_circle: |
| Game of life | [Die or live](https://leetcode.com/problems/game-of-life/discuss/73230/C++-O(1)-space-O(mn)-time) | $O(mn)$ | | [07_gameOfLife.cpp](other/07_gameOfLife.cpp) | `array` | :large_orange_diamond: |
| Happy number | [Squre sum digits iteratively](https://leetcode.com/problems/happy-number/description/) | $O(n)$ | | [08_happyNumber.cpp](other/08_happyNumber.cpp) | `math` | :large_blue_circle: |

## Dynamic programming
| Type | Detail | Best solution | Worst solution | Code | tech tags | Lv. |
| --- | --- | --- | --- | --- | --- | --- |
| Unique paths | [MxN from top-left to bottom-right](https://leetcode.com/problems/unique-paths/discuss/22954/0ms-5-lines-DP-Solution-in-C++-with-Explanations) | $O(n^2)$ | | [01_uniquePaths.cpp](dynamicProgramming/01_uniquePaths.cpp) | `array` | :large_orange_diamond: |
| Climbing Stairs | [Only 1 & 2 steps allowed](https://leetcode.com/articles/climbing-stairs/) | $O(\log n)$ | $O(n)$ | [02_climbingStairs.cpp](dynamicProgramming/02_climbingStairs.cpp) | `math` | :large_blue_circle: |


