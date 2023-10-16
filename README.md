# C++ 1D Arrays and Strings

This repository contains examples and explanations of 1D arrays and strings in C++. 1D arrays are collections of elements of the same data type, while strings are sequences of characters. This README provides an overview of how to work with 1D arrays and strings in C++.

## Table of Contents
- [1D Arrays](#1d-arrays)
  - [Declaration and Initialization](#declaration-and-initialization)
  - [Accessing Elements](#accessing-elements)
  - [Iterating through an Array](#iterating-through-an-array)
- [Strings](#strings)
  - [Declaration and Initialization](#declaration-and-initialization-of-strings)
  - [Accessing Characters](#accessing-characters)
  - [String Length](#string-length)


## 1D Arrays

### Declaration and Initialization

In C++, 1D arrays are declared and initialized as follows:

```cpp
dataType arrayName[arraySize]; // Declaration
```

Example:

```cpp
int numbers[5]; // Declares an integer array of size 5

int scores[] = {90, 85, 78, 92, 88}; // Declares and initializes an integer array
```

### Accessing Elements

You can access individual elements in an array using their index, which starts at 0:

```cpp
int value = numbers[2]; // Accesses the third element (index 2) of the 'numbers' array
```

### Iterating through an Array

You can use loops, such as the `for` loop, to iterate through the elements of an array:

```cpp
for (int i = 0; i < arraySize; i++) {
    // Access and work with array elements using 'arrayName[i]'
}
```
### **ALGORITHM**

- **Enter the marks of 10 subjects and display it**

1. Start

2. Declare an array to store the marks for 10 subjects (marksArray).

3. Use a `for` loop to iterate 10 times (for each subject):
   - Initialize a loop variable (i) to 0.
   - Continue the loop as long as i is less than 10.
   - In each iteration of the loop, prompt the user to enter the marks for the current subject and store it in marksArray[i].

4. Display the marks for each subject using a `for` loop:
   - Initialize a loop variable (i) to 0.
   - Continue the loop as long as i is less than 10.
   - In each iteration of the loop, display the marks for the current subject from marksArray[i].

5. End

- **Enter the marks of subjects from user and display it**

1. Start

2. Declare variables for the number of subjects (numSubjects) and an array to store the marks (marksArray).

3. Prompt the user to enter the number of subjects (numSubjects).

4. Use a `for` loop to input marks for each subject:
   - Initialize a loop variable (i) to 0.
   - Continue the loop as long as i is less than numSubjects.
   - In each iteration of the loop, prompt the user to enter the marks for the current subject and store it in marksArray[i].

5. Display the marks for each subject using a `for` loop:
   - Initialize a loop variable (i) to 0.
   - Continue the loop as long as i is less than numSubjects.
   - In each iteration of the loop, display the marks for the current subject from marksArray[i].

6. End

- **C++ program to find the maximum and minimum value of given array**

1.Start

2.Declare an array to store the elements (arr) and variables to store the maximum (max) and minimum (min) values.

3.Initialize max and min with the first element of the array (i.e., max = arr[0] and min = arr[0]).

4.Use a for loop to iterate through the array:

5.Initialize a loop variable (i) to 1 (assuming the first element has already been assigned to max and min).

Continue the loop as long as i is less than the length of the array.

In each iteration of the loop:

Compare arr[i] with max:

If arr[i] is greater than max, update max to arr[i].

Compare arr[i] with min:

If arr[i] is smaller than min, update min to arr[i].

After the loop completes, max and min will contain the maximum and minimum values in the array, respectively.

6.Display the maximum and minimum values.

7.End

- **C++ Program to find array Sum_Average**

1.Start

2.Declare an array to store the elements (arr), a variable to store the sum (sum), and a variable to store the average (average).

3.Initialize sum to 0.

4.Use a for loop to iterate through the array:

5.Initialize a loop variable (i) to 0.

Continue the loop as long as i is less than the length of the array.

In each iteration of the loop:

Add arr[i] to sum.

5.Calculate the average by dividing the sum by the length of the array.

6.Display the sum and average.

7.End

- **To Flip Element**

1.Start

2.Declare an array to store the elements (arr).

3.Get the elements of the array from the user or from any source.

4.Calculate the length of the array (length).

5.Use a for loop to flip the array:

Initialize two loop variables, start and end.

Initialize start to 0 (indicating the beginning of the array) and end to length - 1 (indicating the end of the array).

Continue the loop as long as start is less than end.

In each iteration of the loop:

Swap arr[start] and arr[end].

Increment start by 1.

Decrement end by 1.

6.After the loop completes, the array will be flipped.

7.Display the flipped array.

8.End

#### **OUTPUT**

- **Enter the marks of 10 subjects and display it**


![exp7_5](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/123eb5c9-4f57-4d48-9d6b-e202c6c8786b)

- **Enter the marks of subjects from user and display it**

![exp7_6_1](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/260815a5-836c-4bf8-bf91-f92a4f1914ae)


![exp7_6_2](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/c1e6738b-1e5f-4faa-aaeb-43c15d2f01dc)

- **C++ program to find the maximum and minimum value of given array**

![exp7_7](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/50aba3d8-3ac1-4744-a1e4-feda5bfb1a95)


- **C++ Program to find array Sum_Average**

![exp7_8](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/d38df105-194d-4c0f-ae23-c9004757819f)

- **To Flip Element**

![exp7_9](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/007f84e2-a42a-4dc4-b4e0-c39de474f754)


## Strings

### Declaration and Initialization of Strings

Strings in C++ can be declared and initialized as follows:

```cpp
string str = "Hello, World!"; // Declaration and initialization of a string
```

### Accessing Characters

Individual characters in a string can be accessed using their index, starting at 0:

```cpp
char ch = str[3]; // Accesses the fourth character in the string 'str'
```

### String Length

You can find the length of a string using the `length()` or `size()` member functions:

```cpp
int length = str.length(); // Returns the length of the string 'str'
```
### **ALGORITHM**

- **String Display**
  
1. Start

2. Declare a string variable to store the input string (inputString).

3. Get the input string (inputString) from the user or from any source.

4. Use a `for` loop to iterate through the characters of the string:
   - Initialize a loop variable (i) to 0.
   - Continue the loop as long as i is less than the length of the string (inputString.length()).
   - In each iteration of the loop, print the character at index i.
   - Increment i after printing each character.

5. End

- **String Length**

1. Start

2. Declare a string variable to store the input string (inputString).

3. Get the input string (inputString) from the user or from any source.

4. Initialize a variable (length) to 0. This variable will be used to count the characters in the string.

5. Use a `for` loop to iterate through the characters of the string:
   - Initialize a loop variable (i) to 0.
   - Continue the loop as long as the character at index i is not the null character ('\0').
   - In each iteration of the loop, increment the length variable by 1.
   - Increment i to move to the next character.

6. After the loop completes, the length variable will contain the length of the string.

7. Display or use the length as needed.

8. End

- **String Concatenation and Reverse String Concatenation**
  
- *Concatenation Algorithm*:


1. Start

2. Declare two string variables, str1 and str2, to store the input strings.

3. Get input for str1 and str2 from the user or from any source.

4. Declare a string variable, resultStr, to store the concatenated string.

5. Use a `for` loop to concatenate str1 and str2:
   - Initialize a loop variable (i) to 0.
   - Iterate through the characters of str1 using i and append each character to resultStr.
   - Repeat the above step for str2.

6. Display or use resultStr as needed.

7. End

- *Reverse Concatenation Algorithm*:

1. Start

2. Declare a string variable, concatenatedStr, to store the concatenated string.

3. Get input for concatenatedStr from the user or from any source.

4. Declare two empty string variables, str1 and str2, to store the two original strings.

5. Calculate the length of the concatenatedStr.

6. Use a `for` loop to split the concatenatedStr into two original strings:
   - Initialize a loop variable (i) to 0.
   - Iterate through the characters of concatenatedStr using i.
   - Append each character to str1 until i reaches half the length of concatenatedStr.
   - Append the remaining characters to str2.

7. Display or use str1 and str2 as needed.

8. End

- **String Palindrome or not**

1. Start

2. Declare a string variable to store the input string (inputString).

3. Get the input string (inputString) from the user or from any source.

4. Remove spaces and punctuation marks (if needed) from the input string to ensure accurate palindrome checking.

5. Declare two integer variables, left and right:
   - Initialize left to 0 (indicating the start of the string).
   - Initialize right to the length of the string minus 1 (indicating the end of the string).

6. Use a `for` loop to compare characters from the beginning and end of the string:
   - Initialize a loop variable (i) to 0.
   - Continue the loop as long as i is less than or equal to right.
   - In each iteration of the loop, compare inputString[left] and inputString[right]:
     - If they are not equal, the string is not a palindrome; break out of the loop.
     - If they are equal, increment left and decrement right to check the next pair of characters.

7. If the loop completes without breaking, the string is a palindrome.

8. Display a message indicating whether the string is a palindrome or not.

9. End

### **OUTPUT**

- **String Display**

 ![exp7_1](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/b738dae4-84fe-479b-9ffc-ffb8b6fe60fe)

- **String Length**

![exp7_2](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/183080b3-7d77-4de7-8f95-3c551b86eeae)

- **String Concatenation and Reverse String Concatenation**

  
![exp7_3](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/c5c0d74d-81dd-4902-8aed-d9af9aa8c109)

- **String Palindrome or not**

![exp7_4](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/ce2a44bd-86a6-4cb3-81b4-11df3b2e50a4)

