# Basic-Practice-Questions-for-C.🤓

![imgC](https://github.com/user-attachments/assets/bde1182d-2996-4296-969b-4b4f7add2f03)

### More Questions
1. Write The Program To Determine Whether The Student Has Passed Or Failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user.
   
2. Write The Program To Find Whether The Letter is lowercase or uppercase using ASCII Value. Take a Letter as a input from the user. [ASCII TABLE](https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html)

3. Sum of First N Natural Numbers
Write a C program that takes an integer input N and uses a for loop to find the sum of the first N natural numbers.

- For Example
```
Enter a number: 10
Sum of first 10 natural numbers is: 55
```
4. Print a Pattern
Write a C program that uses a for loop to print the following pattern based on a given number of rows.
```
Input: Enter the how many rows you want: 5
Output:
*
**
***
****
*****
```
5. Function Call
Using Functions for Code Modularity: Write a C program that calculates the area of a rectangle and a circle. Create two separate functions: float areaRectangle(float length, float width) and float areaCircle(float radius). Call these functions in your main() function and print the results.

6. Factorial Calculation
Problem: Write a recursive function to calculate the factorial of a given number n. The factorial of a number n (denoted as n!) is the product of all positive integers less than or equal to n. For example, 5! = 5 × 4 × 3 × 2 × 1 = 120.

7. Fibonacci Sequence
Problem: Write a recursive function to find the nth term in the Fibonacci sequence. The Fibonacci sequence is defined as follows:

F(0) = 0, F(1) = 1
F(n) = F(n-1) + F(n-2) for n > 1

# Example
```
Input: n = 6
Output: 8 (Sequence: 0, 1, 1, 2, 3, 5, 8)
```

8. Pointer Dereferencing.
Create a pointer that points to a float variable y initialized with 5.5. Print the value of y using both the pointer and the variable name.
- Output
```
The value of z using the variable: 5.5
The value of z using the pointer: 5.5
```

9. Swapping Two Numbers: Using Pointers.
Write a function swap(int *a, int *b) that takes two integer pointers as arguments and swaps their values. Use this function in the main() to swap two integers.

10. Change the value to ten time.
Write a program to change the variable to ten times of its current value. Using call-by reference.

11. Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the value of sum and average in main().

12. Write a program to create an array of 10 integers and initialize it with values from 1 to 10. Print all the elements of the array.
Output should be:
```
The element at index 0 is: 1
The element at index 1 is: 2
The element at index 2 is: 3
The element at index 3 is: 4
The element at index 4 is: 5
The element at index 5 is: 6
The element at index 6 is: 7
The element at index 7 is: 8
The element at index 8 is: 9
The element at index 9 is: 10
```
13. Write a function to find the maximum and minimum values in an integer array.
- Example: array {7, 2, 5, 1, 9, 4}, the output will be:
```
Maximum value: 9
Minimum value: 1
```
14. Create a program to reverse an array without using any additional arrays.
15. Sum of Elements:
- Write a program that takes 10 integers as input from the user and stores them in an array. Then, calculate and print the sum of all the elements.
16. Create a program to print a checkerboard pattern using X and O characters using nested while loops. The board size should be n x n, where n is input by the user.
Example for n = 3:
```
X O X
O X O
X O X
```
17. Type Casting in Expressions
![image](https://github.com/user-attachments/assets/27fd64bd-5f58-409b-81c4-b4cd94715002)
```
Example Output:
* Result: 4.33
```
18. Student Grade Calculator
Objective:
Create a program that calculates the average grade of a group of students and identifies the highest and lowest grades.

Requirements:

Ask the user to input the number of students.
Use an array to store the grades of the students.
Calculate and display the following:
- Average grade. **Average = Number of Students/Sum of Grades**
- Highest grade. **Eg: Highest Grade=max(85,90,78)=90**
- Lowest grade. **Eg: Lowest Grade=min(85,90,78)=78**

19. Transpose of a Matrix
Write a program to find the transpose of a 2x3 matrix. The program should read the elements of the matrix from the user, compute the transpose, and display the transposed matrix.
Exmaple:
```
Input.
Enter elements of Matrix (2x3):
1 2 3
4 5 6

Output.
Transpose of the Matrix:
1 4
2 5
3 6
```
20. Create an array of 10 integers and the multiplication table of 5 in it.
```
Output should be: 
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
```
21. String Length Calculation
Write a C program to input a string from the user and calculate its length without using the **strlen** function.
```
Input:
Enter a string: hello

Output:
The length of the string is: 5
```
22. Write a program for encryption and decryption of string provided by the user.
Example:
```
Encrypted form of string: uijt!jt!nf

Decrypted from of string: this is me
```
23. Write a program that defines a struct called Student with the following fields:
- char name[50]
- int age
- float gpa

Then, create a function to print the details of the student and test it with at least two different students.

Output Eg:
```
Name: John Doe
Age: 20
GPA: 3.75

Name: Jane Smith
Age: 22
GPA: 3.90
```
