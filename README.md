# Experiment-6
**Topic: -** _Loops in C++_


**Software Used: -** _Programiz_


**Theory:-** 


### 1. **Loop Fundamentals**

Loops in C++ are constructs that allow a block of code to be executed multiple times. They are used to automate repetitive tasks and handle situations where the exact number of iterations might not be known ahead of time. The primary types of loops in C++ are `for`, `while`, and `do-while`.

### 2. **`for` Loop**

The `for` loop is particularly useful when the number of iterations is known beforehand. It provides a compact syntax to initialize a loop control variable, specify a condition, and define how the loop control variable should be updated after each iteration.

**Components:**

- **Initialization:** Sets up the loop control variable (e.g., `int i = 0`).
- **Condition:** The loop continues as long as this condition evaluates to true (e.g., `i < 5`).
- **Iteration Expression:** This is executed after each iteration, often used to increment or decrement the loop control variable (e.g., `i++`).

**Example:**

```cpp
for (int i = 0; i < 10; ++i) {
    // Code to be executed
}
```

In this example:
- `int i = 0;` initializes `i` to 0.
- `i < 10` is the condition. The loop will continue to execute as long as `i` is less than 10.
- `++i` increments `i` by 1 after each iteration.

**Usage:**

The `for` loop is ideal for cases where the number of iterations is known in advance, such as iterating through arrays or performing a task a specific number of times.

### 3. **`while` Loop**

The `while` loop is used when you want to repeat a block of code an indefinite number of times, with the condition checked before each iteration. The loop will continue as long as the condition remains true.

**Components:**

- **Condition:** Evaluated before each iteration. If true, the loop body executes; if false, the loop terminates.

**Example:**

```cpp
int i = 0;
while (i < 10) {
    // Code to be executed
    ++i;
}
```

In this example:
- The loop starts with `i = 0`.
- As long as `i < 10`, the loop will execute.
- After each iteration, `i` is incremented.

**Usage:**

The `while` loop is useful when the number of iterations is not known in advance and depends on dynamic conditions. For example, reading input until a specific value is encountered.

### 4. **`do-while` Loop**

The `do-while` loop is similar to the `while` loop, but with a key difference: the condition is checked after the loop’s body has executed. This guarantees that the loop body will execute at least once.

**Components:**

- **Loop Body:** Executes once before the condition is checked.
- **Condition:** Evaluated after each iteration. If true, the loop repeats.

**Example:**

```cpp
int i = 0;
do {
    // Code to be executed
    ++i;
} while (i < 10);
```

In this example:
- The loop body executes first.
- After execution, `i` is incremented, and then the condition `i < 10` is checked.

**Usage:**

The `do-while` loop is appropriate when the loop body needs to be executed at least once, such as prompting a user for input and validating it.

### 5. **Control Statements**

Loops in C++ can be controlled using the `break` and `continue` statements:

- **`break`:** Exits the loop immediately, regardless of the loop’s condition. It is often used to terminate a loop prematurely.
  
  **Example:**

  ```cpp
  for (int i = 0; i < 10; ++i) {
      if (i == 5) {
          break;
      }
      std::cout << i << std::endl;
  }
  ```

  This loop will print numbers from 0 to 4 and then exit when `i` equals 5.

- **`continue`:** Skips the current iteration and proceeds to the next iteration of the loop. It is used to bypass the remaining code in the current iteration based on a condition.

  **Example:**

  ```cpp
  for (int i = 0; i < 10; ++i) {
      if (i % 2 == 0) {
          continue;
      }
      std::cout << i << std::endl;
  }
  ```

  This loop will print only odd numbers from 1 to 9, skipping even numbers.

### 6. **Nested Loops**

Loops can be nested within each other. Each loop has its own control flow, and the inner loop executes completely for each iteration of the outer loop.

**Example:**

```cpp
for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
        std::cout << "(" << i << ", " << j << ")" << std::endl;
    }
}
```

This will output all combinations of `i` and `j` values in a 3x3 grid.

### 7. **Performance Considerations**

- **Efficiency:** Be mindful of performance, especially with nested loops, as they can lead to increased time complexity.
- **Infinite Loops:** Ensure that loops have a valid termination condition to avoid creating infinite loops, which can lead to program crashes or unresponsiveness.**



_**Experiment 6{A}: - Print Numbers from 1 to the end value specified by the user**__

**Code: -**

#include <iostream>

int main() {
    int endValue;

    // Get the end value from the user
    std::cout << "Enter the end value: ";
    std::cin >> endValue;

    // Check if the input is a positive integer
    if (endValue <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Use a for loop to print numbers from 1 to endValue
    for (int i = 1; i <= endValue; ++i) {
        std::cout << i << std::endl;
    }

    return 0;
}

**Output**

 ![image](https://github.com/user-attachments/assets/b822b1b8-420e-4d68-957c-657c18b2ab18)



_**Experiment {6B}: -Calculate the Sum of First ‘n’ Natural Numbers where ‘n’ is the value entered by the user**_

**Code:-**
#include <iostream>

int main() {
    int n;
    int sum = 0;  // Variable to store the sum

    // Get the value of 'n' from the user
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    // Check if the input is a positive integer
    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Calculate the sum of the first 'n' natural numbers using a for loop
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Output the result
    std::cout << "The sum of the first " << n << " natural numbers is: " << sum << std::endl;

    return 0;
}


**Output:-**

![image](https://github.com/user-attachments/assets/7bf0fbe7-5668-4fe3-9972-8d3977cf268f)

**Experiment {6C}: - Print pattern of asterisk**

**Code:-**
1: - For right angle triangle:- 

#include <iostream>

int main() {
    int rows;

    // Get the number of rows for the pattern from the user
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    // Print the right-angle triangle pattern
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

**Output**

![image](https://github.com/user-attachments/assets/98544147-10d1-4c7e-8c00-d2f718655fe3)


2: - For pyramid

#include <iostream>

int main() {
    int height;

    // Get the height of the pyramid from the user
    std::cout << "Enter the height of the pyramid: ";
    std::cin >> height;

    // Print the pyramid pattern
    for (int i = 1; i <= height; ++i) {
        // Print leading spaces
        for (int j = height; j > i; --j) {
            std::cout << " ";
        }
        // Print asterisks
        for (int k = 1; k <= (2 * i - 1); ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

**Output**

![image](https://github.com/user-attachments/assets/a8cf482b-9a8e-4181-b398-fc77857e77c4)

**Experiment {6D}: - Print Numbers from 1 to the end value specified by the user using while loop**

**Code:-**

#include <iostream>

int main() {
    int endValue;

    // Get the end value from the user
    std::cout << "Enter the end value: ";
    std::cin >> endValue;

    // Check if the input is a positive integer
    if (endValue <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Initialize the counter
    int i = 1;

    // Use a while loop to print numbers from 1 to endValue
    while (i <= endValue) {
        std::cout << i << std::endl;
        ++i; // Increment the counter
    }

    return 0;
}

**Output:-** 


![image](https://github.com/user-attachments/assets/e2c9aace-be34-4e20-9141-398676fba968)



**Program {6E}: -Simple Password Validation using do while loop**

**Code:-**
#include <iostream>
#include <string> // For std::string

int main() {
    const std::string correctPassword = "secure123"; // Predefined correct password
    std::string enteredPassword;
    bool isPasswordCorrect = false;

    do {
        // Prompt the user to enter the password
        std::cout << "Enter your password: ";
        std::cin >> enteredPassword;

        // Check if the entered password matches the correct password
        if (enteredPassword == correctPassword) {
            isPasswordCorrect = true;
            std::cout << "Password is correct. Access granted." << std::endl;
        } else {
            std::cout << "Incorrect password. Please try again." << std::endl;
        }
    } while (!isPasswordCorrect); // Continue looping until the correct password is entered

    return 0;
}


**Output:-**

![image](https://github.com/user-attachments/assets/50ee7270-2f5b-4a23-80f0-59c9ba342a71)


**Conclusion: -**
In C++, loops are crucial constructs for executing a block of code multiple times, enabling efficient handling of repetitive tasks and iterative processes. The three primary types of loops—`for`, `while`, and `do-while`—each serve distinct purposes. The `for` loop is ideal for scenarios where the number of iterations is known beforehand, providing a compact syntax for initialization, condition-checking, and iteration. The `while` loop is used when the number of iterations is uncertain and depends on a condition evaluated before each loop iteration. The `do-while` loop, on the other hand, ensures that the loop body executes at least once by evaluating the condition after the loop body. Effective use of loops involves ensuring proper termination conditions to prevent infinite loops, optimizing performance, and using meaningful variable names for clarity. Mastery of these looping constructs allows programmers to write more efficient, readable, and maintainable code, making loops a foundational concept in C++ programming.



