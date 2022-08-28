# Week0


##  School Math

Your best friend needs your help in memorizing multiplication tables but they don’t know the tables of numbers greater than 2. So they are asking for your help to tell the table of any number which is greater than 2.

Constraints

Input Format

The first line contains one integer (t) - the number of test cases.

Each test case consists of one integer (n) - the number whose multiplication table you're supposed to print.

Output Format

For each test case, print 10 integers separated by space i.e. the table of the integer n upto 10 times.

Example 1

Input:  
2  
3  
4

Output:  
3 6 9 12 15 18 21 24 27 30  
4 8 12 16 20 24 28 32 36 40

Explanation:  
In the first test case, you are expected to print the table of 3 separated by space.

-----

## Even Odd Game

Sachin and Mohit are playing a game in which there is an array(arr) of integers(1 based indexing). Sachin picks up the integers which are at even indices and Mohit picks up the integers which are at odd indices. They both are weak in Math.

Can you help them to decide who is the winner of the game? (Winner is the one who has the maximum sum of the elements).

Constraints

1 <= t <= 10  
1 <= n <= 10^5  
-10^5 <= arr[i] <= 10^5

Input Format

The first line contains the single integer (t) — the number of test cases.

The first line of each test case contains a single integer (n) — the length of array arr

The second line contains n integers arr[1],arr[2],…,arr[n] — the array arr.

Output Format

For each test case print one line i.e. the winner’s name, “Sachin” or “Mohit”. In case of a tie, print “Tie”.

Example 1

Input:  
2  
4  
2 4 6 8  
4  
2 -2 2 -2

Output:  
Sachin  
Mohit

Explanation:  
In the first test case, the sum of elements at even indices is 12 (4+8) and that at odd indices is 8 (2+6). Hence, Sachin wins.

-----

## The Unique

Hey Coder! You are appointed as a software development engineer at a big tech company. You have one task pending and have to complete it today.  
The task is as follows-  
You have to calculate the number of non-repeating elements present in an array and report whether this number is divisible by 2 or not.  
Print “Yes” if it is divisible by 2, else print “No”.

Constraints

1 ≤ t ≤ 100  
1 ≤ n ≤ 10^5  
1 ≤ a[i] ≤ 10^5

Input Format

The first line contains one integer (t) - the number of test cases.  
Each test case consists of two lines-  
n - Size of the list (1<=n<=10^5)  
List of integers (a[0], a[1]…..a[n-1])

Output Format

For each test case,  
Print “Yes” if number of non-repeating elements is divisible by 2, else print “No”.

Example 1

Input:  
2  
4  
1 2 4 5  
5  
3 4 5 7 4

Output:  
Yes  
No

Explanation:  
In the first test case:  
No of the elements that are not repeating is 4 and 4 is divisible by 2. Hence answer is Yes

  
-----

## Queries

Your friend gives you an array and assigns a task. The task is as follows-  
1) You are given a key element.  
2) You will get ‘q’ queries. In each query, there will be an index and you have to tell how many times the particular key value has occurred in the array up to that index (inclusive). If the element at a given index is not equal to the given key then you have to print “0” or if it's a match then print the number of occurrences till the given index.

Constraints

1 <= t <= 10  
1 <= n <= 10^5  
1 <= arr[i] <= 10^5  
1 <= key <= 10^5  
1 <= q <= 10^5  
0 <= ind < 10^9

Input Format

The first line contains an integer t - the number of test cases  
Each test case contains the following lines-  
The first line contains an integer n - the number of elements in the array.  
The second line contains the array elements separated by space (arr).  
The third line contains the key element.  
The next line contains an integer q - the number of queries  
For each query, there is a single line of input i.e. the index (ind)

Output Format

For each test case, print the expected output of each query in new line.

Example 1

Input:  
1  
8  
1 4 5 4 3 4 6 2  
4  
3  
1  
5  
6

Output:  
1  
3  
0

Explanation:  
There is just one test case.  
For query 1: Index is 1 and a[1]==key and the count is 1.  
For query 2: Index is 5 and a[5]==key and the count will be 3 because 4 has been repeated three times till index 5.  
For query 3: Index is 6 but a[6]!=key so the answer is 0.

-----
