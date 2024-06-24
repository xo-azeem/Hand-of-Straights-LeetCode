# Hand of Straights

LeetCode Q # 846.

Alice has some number of cards and she wants to rearrange the cards into groups so that each group is of size groupSize, and consists of groupSize consecutive cards.

Given an integer array hand where hand[i] is the value written on the ith card and an integer groupSize, return true if she can rearrange the cards, or false otherwise.

Example 1:

>Input: hand = [1,2,3,6,2,3,4,7,8], groupSize = 3</br>
>Output: true</br>
>Explanation: Alice's hand can be rearranged as [1,2,3],[2,3,4],[6,7,8]

Example 2:

>Input: hand = [1,2,3,4,5], groupSize = 4</br>
>Output: false</br>
>Explanation: Alice's hand can not be rearranged into groups of 4.

My Solution Analysis:

<div align = "center">

  ![image](https://github.com/xo-azeem/Hand-of-Straights-LeetCode/assets/171427226/69f35ba5-9f84-4bbf-a357-6395819d4345)

  Time complexity: O(nlogn).</br>Space complexity: O(1).
</div>
