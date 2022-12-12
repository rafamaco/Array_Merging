# Array_Merging

•	Identify program structure and control the flow of execution.
•	Write structured programming instructions so that the computer shows
input/output behaviors
•	Use different types of loops to write code with the required number of
iterations. •	Demonstrate logical thinking by using programming syntax and
strategies. •	Use arrays to store collections of data.

Overview

Write a program to merge two arrays

Directions

For example, consider two arrays A and B.
A = {10, 25, 35, 40, 55}
B = {15, 30, 5, 20, 45, 65}

The merged array should be another array C with elements {5, 10, 15, 20, 25, 30,
35, 40, 45, 55, 65}. The resultant merged array should contain all the elements
of A and B in sorted order. This doesn’t mean that you can two copy two arrays
to the third array and sort the resultant array. Initially, you can sort Array
‘A’ and Array ‘B’ with your own sorting method. Afterward, you will need to
merge the contents of the two arrays into a single array by taking individual
values from the two arrays one by one and inserting them into the resultant
Array ‘C’ in the appropriate position, so that it becomes sorted right after the
insert operation.

Sample Input/output:

How many elements are there in the first Array? 5
How many elements are there in the second Array? 6
Elements in 'A': 78, 100, 100, 72, 26     (Randomly populated with srand(7))
Elements in 'B': 97, 45, 43, 50, 12, 94    (Randomly populated with srand(8))
Sorted Elements in 'A': 26, 72, 78, 100, 100 (Sorted by calling your own created
method)
Sorted Elements in 'B': 12, 43, 45, 50, 94, 97 (Sorted by calling your
own created method)
Elements in 'C': 12, 26, 43, 45, 50, 72, 78, 94, 97, 100,
100 (After Merging A and B, and no sorting methods called)
