# Algorithm & LeetCode problems

I collect the basic algorithm codes and solution of the [LeetCode](https://leetcode.com) problems. Each problem contains the mine and other optimized solutions. Thus, the big $O$ in tables of the sections are showing the best and worst solution in each code. The level of problems is also denoted by the color marks as following table: 

| Easy | Medium | Hard |
| --- | --- | --- |
| :large_blue_circle: | :large_orange_diamond: | :red_circle: | 

## Data structure
| Type | Detail | code | tech tags | Lv. |
| --- | --- | --- | --- | --- |
| Binary tree | [Creation](https://www.geeksforgeeks.org/construct-complete-binary-tree-given-array/) | [tree.cpp](dataStructure/tree.cpp) | `tree` | :large_blue_circle: | 
| Linked list | Creation | [linkedList.cpp](dataStructure/linkedList.cpp) | `linked list` | :large_blue_circle: | 


## Search
### Basic algorithms
| Type  | Best case | worst case | code | tech tag |
| --- | --- | --- | --- | --- |
| Sequential search | $O(n)$ | $O(n\log n)$ | [01_sequentialSearch.cpp](search/algorithm/01_sequentialSearch.cpp) |
| Binary search |  | $O(\log n)$ | [02_binarySearch.cpp](search/algorithm/02_binarySearch.cpp) |
| Interpolation search |  | $O(\log\log n)$ | [03_interpolationSearch.cpp](search/algorithm/03_interpolationSearch.cpp) |
| Fibonacci search |  | $O(\log n)$ | [04_fibonacciSearch.cpp](search/algorithm/04_fibonacciSearch.cpp) |



### Leetcode problems
| Type | Detail | Best solution | Worst solution | code | tech tags | Lv. |
| --- | --- | --- | --- | --- | --- | --- |
| Two sum | [Unsorted array](https://leetcode.com/articles/two-sum/)  | $O(n)$ | $O(n^2)$ | [01_twoSum.cpp](search/01_twoSum.cpp) | `array` `Hash map`| :large_blue_circle: |
| Two sum | [Sorted array](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/)  | $O(n)$| $O(\log n)$  | [02_twoSum.cpp](search/02_twoSum.cpp) | `array` `binary search`| :large_blue_circle: | 
| Two sum | [Data structure design](http://www.cnblogs.com/grandyang/p/5184143.html)  | $O(n)$ | $O(n^2)$  | [03_twoSum.cpp](search/03_twoSum.cpp) | `array` `class`| :large_blue_circle: | 
| Single number | [Twice except for one](https://leetcode.com/articles/single-number/)  | $O(n)$ | $O(n^2)$  | [04_singleNumber.cpp](search/04_singleNumber.cpp) | `Hash table` `bit manipulation`| :large_blue_circle: | 
| Binary tree | [Maximum Depth](https://leetcode.com/articles/single-number/)  | $O(n)$ |  | [05_maxDFSBT.cpp](search/05_maxDFSBT.cpp) | `tree` `BFS` `DFS`| :large_blue_circle: |
| Majority element | [Num appears most](https://leetcode.com/articles/majority-element/) | $O(n)$ | $O(n^2)$| [06_majorityElement.cpp](search/06_majorityElement.cpp) | `array` `devide-and-counter` `bit manipulation` | :large_blue_circle: |
| K frequent | [Most top K frequent elements](http://zpjiang.me/2017/11/13/top-k-elementes-system-design/) | $O(n\log k)$/$O(n\log (n-k)$) | $O(n^2)$ | [07_kFrequnce.cpp](search/07_kFrequnce.cpp) | `Hash table` `Heap` `Priority queue` | :large_orange_diamond: |
| Best profit to buy and sell stock | [One transaction](https://leetcode.com/articles/best-time-buy-and-sell-stock/) |  $O(n)$ |  $O(n^2)$ | [08_stockBuySellOneTrans.cpp](search/08_stockBuySellOneTrans.cpp) | `array` | :large_blue_circle: |

## Sorting
### Basic algorithms
| Type  | Best case | worst case | code | tech tag |
| --- | --- | --- | --- | --- |
| Bubble sort | $O(n^2)$ | $O(n^2)$ | [01_bubbleSort.cpp](sorting/algorithm/01_moveZeros.cpp) |
| Selection sort | $O(n)$ | $O(n^2)$ | [02_selectionSort.cpp](sorting/algorithm/02_selectionSort.cpp) |
| Insertion sort | $O(n)$ | $O(n^2)$ | [03_insertionSort.cpp](sorting/algorithm/03_insertionSort.cpp) |
| Merge sort | $O(n)$ | $O(n^2)$ | [03_insertionSort.cpp](sorting/algorithm/03_insertionSort.cpp) | `divide-and-counter` |
| Quick sort | $O(n\log n)$ | $O(n^2)$ | [04_quickSort.cpp](sorting/algorithm/04_quickSort.cpp) |
| Radix sort | $O(n)$ | $O(n\log n)$ | [05_radixSort.cpp](sorting/algorithm/05_radixSort.cpp) |
| [Heap sort](https://www.hackerearth.com/zh/practice/notes/heaps-and-priority-queues/)  | $O(n\log n)$ | $O(n\log n)$ | [06_heapSort.cpp](sorting/algorithm/05_heapSort.cpp) | `binary tree` |
| Binary-tree sort | $O(n\log n)$ | $O(n^2)$ | [07_binaryTreeSort.cpp](sorting/algorithm/07_binaryTreeSort.cpp) | `binary tree` |

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

## Other
| Type | Detail | Best solution | Worst solution | Code | tech tags | Lv. |
| --- | --- | --- | --- | --- | --- | --- |
| Coding | [Fizz Buzz](https://leetcode.com/problems/fizz-buzz/description/) | $O(n)$ | | [01_fizzBuzz.cpp](other/01_fizzBuzz.cpp) | `array` | :large_blue_circle: |

## String


