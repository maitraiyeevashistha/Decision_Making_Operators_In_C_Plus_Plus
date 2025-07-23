# Decision Making Operators

## Name: Maitraiyee Vashistha
## PRN: 24070123057
## Division: ENTC-A3
## Title: Decision Making Operators In C ++
---
## Aim:
*To study and implement C++ decision making statements.*

## Introduction
Decision making statements in C++ are the conditional statements that are used to execute codes based on some given conditions. These are crucial for controlling the flow of a program and making it responsive to different inputs. C++ gives us different ways to make decisions in a program. These include things like `if`, `if-else`, `else-if`, nested `if`s, and `switch`. 

### Types of Decision-Making Statements:
 - `if` Statement: Executes a block of code if a specified condition is true.
 - `if-else` & `Else-if` Statements: Provides an alternative block of code to execute if the condition is false.
 - `Switch` Statement: Allows a variable to be tested for equality against a list of values. Each value is called a "case," and the variable is compared with each case value.
 - Nested `if-else`: You can nest if-else statements within each other for more complex conditions.

## Summary of the Programs
### Program 1: Even or Odd Checker
This program checks if a number can be divided by 2 without a remainder. It uses the % (modulus) operator and an if-else condition to decide if the number is even or odd.

#### Program logic
 - Take input as a number n.
 - Check if n % 2 == 0.
 - If true, print “Even”.
 - Else, print “Odd”.

### Output:
Enter the number: 62                    
The given number is even.



### Program 2: Vowel or Consonant Identifier
The program asks for a letter and checks if it’s a vowel (a, e, i, o, u). It can use either if-else or a switch statement. If the letter isn’t a vowel, it’s called a consonant.

#### Program Logic

 - Take a character input.
 - Convert it to lowercase (if needed).
 - If it is a, e, i, o, or u, print “Vowel”.
 - Else, print “Consonant”.

###  Output:
Enter a character: s  
The given character is a consonant.



### Program 3: Largest of Three Numbers
This program takes three numbers as input and compares them using if-else-if or nested if conditions to find out which one is the biggest.

#### Program Logic

 - Take input: a, b, and c.
 - If a > b and a > c, print “a is largest”.
 - Else if b > c, print “b is largest”.
 - Else, print “c is large

###  Output:
Enter the value of a: 54      
Enter the value of b: 75  
Enter the value of c: 90  
c is the largest number.


### Program 4: Simple Calculator
A basic calculator that uses a switch statement. You enter an operator (+, -, *, /) and two numbers, and it performs the selected operation.

### Output:
Enter an operator (+, -, *, /): *  
Enter two numbers: 10 2  
10 * 2 = 20


### Program 5: Food Menu using Switch-Case with Break Statements
This is a menu-driven application that uses a switch-case structure with break statements. The user selects a cuisine (from 1 to 7), then selects a dish preference (1 or 2). The program displays the selected cuisine and the corresponding dish. If an invalid choice is made, a default message is shown.

### Output: 
Welcome to the International Cuisine Menu                    

1.Chinese food                     
  (i) Manchurian                  
  (ii) Hakka Noodles                    

2.Italian food                   
  (i) Spaghetti                  
  (ii) Pizza                   

3.Indian food                    
  (i) Dosa                
  (ii) Idli                      

4.Thai food               
  (i) Thai special sweet               
  (ii) Thai curry             

5.French food                  
  (i) Macarons                   
  (ii) Onion soup                 

6.Mexican food                  
  (i) Tacos                
  (ii) Burritos                         

7.Japanese food                  
  (i) Sushi                
  (ii) Ramen             

Enter your cuisine choice (1 to 7): 5                  
Enter your dish preference (1 or 2): 1                   

Cuisine: French             
Dish: Macarons                


## Conclusion
Decision-making is what makes a C++ program think and respond.Even if it is a simple comdition comparision with if, or choosing different outcomes with else-if, or using a switch to keep many different scenarios and making a menu, these functions helps our program act more responsively towars the input .
