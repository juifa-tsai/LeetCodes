# LeetCodes
Algorithm exercises from LeetCode  : https://leetcode.com

I collect the solution codes for the problems of LeetCode. Each problem contains the mine and other optimized solutions. Thus, the big $O$ in tables of the sections are showing the best and worst solution in each code. The level of problems is also denoted by the color marks as following table: 

| Easy | Medium | Hard |
| --- | --- | --- |
| :large_blue_circle: | :large_orange_diamond: | :red_circle: | 

## Data structure
| Type | Detail | Best $O$ | Worst $O$ | code | tech tags | Lv. |
| --- | --- | --- | --- | --- | --- | --- |
| Binary tree | [Creation](https://www.geeksforgeeks.org/construct-complete-binary-tree-given-array/) | | | [tree.cpp](dataStructure/tree.cpp) | `tree` | :large_blue_circle: | 
| Linked list | Creation | | | [linkedList.cpp](dataStructure/linkedList.cpp) | `linked list` | :large_blue_circle: | 


## Search

| Type | Detail | Best $O$ | Worst $O$ | code | tech tags | Lv. |
| --- | --- | --- | --- | --- | --- | --- |
| Two sum | [Unsorted array](https://leetcode.com/articles/two-sum/)  | $n$ | $n^2$  | [01_twoSum.cpp](search/01_twoSum.cpp) | `array` `Hash map`| :large_blue_circle: |
| Two sum | [Sorted array](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/)  | $n$ | $\log n$  | [02_twoSum.cpp](search/02_twoSum.cpp) | `array` `binary search`| :large_blue_circle: | 
| Two sum | [Data structure design](http://www.cnblogs.com/grandyang/p/5184143.html)  | $n$ | $n^2$  | [03_twoSum.cpp](search/03_twoSum.cpp) | `array` `class`| :large_blue_circle: | 
| Single number | [Twice except for one](https://leetcode.com/articles/single-number/)  | $n$ | $n^2$  | [04_singleNumber.cpp](search/04_singleNumber.cpp) | `Hash table` `bit manipulation`| :large_blue_circle: | 
| Binary tree | [Maximum Depth](https://leetcode.com/articles/single-number/)  | $n$ |  | [05_maxDFSBT.cpp](search/05_maxDFSBT.cpp) | `tree` `BFS` `DFS`| :large_blue_circle: |
| Majority Element | [Num appears most](https://leetcode.com/articles/majority-element/) | $n$ | $n^2$ | [06_majorityElement.cpp](search/06_majorityElement.cpp) | `array` `devide-and-counter` `bit manipulation` | :large_blue_circle: |
| K Frequent | [Most top K frequent elements](https://leetcode.com/problems/top-k-frequent-elements) | $n\log n$ | $n^2$ | [07_kFrequnce.cpp](search/07_kFrequnce.cpp) | `Hash table` `Heap` | :large_orange_diamond: |

## Sorting
| Type | Detail | Best $O$ | Worst $O$ | code | tech tags | Lv. |
| --- | --- | --- | --- | --- | --- | --- |
| Move zeros | [Move zeros](https://leetcode.com/articles/move-zeroes/)  | $n$ | $n^2$  | [01_moveZeros.cpp](sorting/01_moveZeros.cpp) | `array` `two pointer`| :large_blue_circle: |
| Binary-tree order | [InOrder, no recursive](https://leetcode.com/articles/binary-tree-inorder-traversal/)  | $n$ |  | [02_inorderTraversal.cpp](sorting/02_inorderTraversal.cpp) | `stack` `tree`| :large_orange_diamond: |
| Binary-tree order | [PreOrder, no recursive](https://leetcode.com/problems/binary-tree-preorder-traversal)  | $n$ |  | [03_preorderTraversal.cpp](sorting/03_preorderTraversal.cpp) | `stack` `tree`| :large_orange_diamond: |
| Binary-tree order | [PostOrder, no recursive](https://leetcode.com/problems/binary-tree-postorder-traversal)  | $n$ |  | [04_postorderTraversal.cpp](sorting/04_postorderTraversal.cpp) | `array` `tree`| :red_circle: |
| Linked list | [Odd-even nodes split with fixed order](https://leetcode.com/articles/odd-even-linked-list/)  | $n$ |  | [05_oddEvenNodeSplit.cpp](sorting/05_oddEvenNodeSplit.cpp) | `linked list`| :large_orange_diamond: |
| Linked list | Odd-even values split with fixed order  | $n^2$ |  | [06_oddEvenValueSplit.cpp](sorting/06_oddEvenValueSplit.cpp) | `linked list`| :large_orange_diamond: |
| Linked list | Odd-even nodes swap with fixed order  | $n$ |  | [07_oddEvenNodeSwap.cpp](sorting/07_oddEvenNodeSwap.cpp) | `linked list`| :large_orange_diamond: |

## Other
| Type | Detail | Best $O$ | Worst $O$ | code | tech tags | Lv. |
| --- | --- | --- | --- | --- | --- | --- |
| Coding | [Fizz Buzz](https://leetcode.com/problems/fizz-buzz/description/) | | | [01_fizzBuzz.cpp](other/01_fizzBuzz.cpp) | `array` | :large_blue_circle: |

## String


