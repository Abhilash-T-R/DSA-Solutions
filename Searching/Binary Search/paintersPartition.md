Minimize Maximum Time to Complete Tasks
Problem Description
You are given an array where each element represents the time taken to complete a task. You need to divide the tasks between a given number of workers such that the time taken to complete the tasks is minimized.

Input
arr[]: An array of integers representing the time taken to complete each task.
n: The size of the array.
m: The number of workers available to complete the tasks.
Approach
Max function: Determines the maximum time taken by a single task.
Sum function: Calculates the total time required for all tasks combined.
isValid function: This function checks if it is possible to distribute the tasks among the workers such that the total time required by any worker does not exceed a given value (mid).
Algorithm
Set the lower bound (low) to the maximum task time.
Set the upper bound (high) to the sum of all task times.
Perform a binary search between low and high to find the minimum time required to complete the tasks:
Calculate the mid-point.
Check if it is possible to divide the tasks with the given mid-point.
Adjust the search boundaries based on the validity of the division.
