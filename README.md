# Aim: To study and implement Pointer Operations (Call by value and Call by reference)
# Software Required:
Visual Studio
# Theory:
There are two ways to pass the data to a function in the C++ language:
1. Call by value
2. Call by reference

<ins>Call by Value</ins>:
In this method, the value of the actual parameteris passed to the corresponding formal parameter of the called function. This technique ensures that the original data i.e. actual parameter does not get altered by the called function, as the called function deals only with a copy of that data.
When the user opts for the call by value, the memory space for the formal parameters is allocated separately in the function stack, which further reinforces the fact that the original data remains untouched. Thus, formal parameters and actual parameters are allocated to different memory locations.

<ins>Advantages of Using Call by Value in C++</ins>:
+ This method does not change the original variable. In other words, it is preserving data.
+ Whenever a function is called, it does not ever impact the actual contents of the actual arguments.
+ Here, the value of actual arguments passes to the formal arguments. Therefore, any changes made in the formal argument do not impact the real cases.

<ins>Disadvantages of Using Call by Value in C++</ins>:
+ Data passed is stored in temporary memory.
+ You can’t operate over the actual data but rather on a temporary copy of the data, because of which changes made in the data in the function are not reflected in the main() function.
+ Memory space required while using string, array, vector, etc can be huge.
+ Solving backtracking and recursion can be complex using call-by-value.

<ins>Call by Reference</ins>:
In this method, instead of passing the values of the actual parameters to the formal ones, the addresses of the actual parameters are passed. Therefore, the modification by the called function to the formal parameters affects the actual parameters as well.
When The user opts for the call by reference, the memory space for the formal parameters and the actual parameters are the same. All the operations in the function are performed on the value stored at the address of the actual parameters, and the modified value gets stored at the same address.

<ins>Advantages of Using Call by Reference in C++</ins>:
+ The function can change the value of the argument. Thus, it is very beneficial.
+ It does not create duplicate data for holding values which helps in saving the memory space.
+ It helps in avoiding changes that occur by mistake.
+ A person who reads the code is not aware that the value can be modified in the function.
<ins>Disadvantages of Using Call by Reference in C++</ins>:
+ A function taking in a reference requires ensuring that the input is non-null. Thus, a null check is not supposed to be made. Thus, it has a non-null guarantee.
+ Passing by reference makes the function not pure theoretically
+ With references, a lifetime guarantee is a big problem. It is particularly dangerous when working with lambdas and multi-threaded programs.

# Implementaion:
The following cases demonstrate the uage of Call by value and Call by Reference:
+ Call by value
+ Call by Reference
+ Salary increment using Call by Reference
  
# Algorithm:
Algorithm: Swap Two Numbers using Call by Reference

1. Start
2. Define a function `swap(int *x, int *y)` that:
   1. Declares a temporary variable `temp`.
   2. Stores `*x` in `temp`.
   3. Assigns `*y` to `*x`.
   4. Assigns `temp` to `*y`.
3. In `main()`:
   1. Declare two integer variables `a = 20`, `b = 50`.
   2. Call `swap(&a, &b)` to interchange the values of `a` and `b`.
   3. Print the swapped values of `a` and `b`.
4. End

Algorithm: Swap Two Numbers using Call by Value

1. Start
2. Define a function `swap(int x, int y)` that:
   1. Declares a temporary variable `temp`.
   2. Stores `x` in `temp`.
   3. Assigns `y` to `x`.
   4. Assigns `temp` to `y`.
3. In `main()`:
   1. Declare two integers `a = 20`, `b = 50`.
   2. Call `swap(a, b)` which attempts to swap values, but only inside the function.
   3. Print values of `a` and `b`.
4. End
5. 
Algorithm: Salary Increment Eligibility and Calculation

1. Start
2. Input employee details:
   `curr_sal` (Current Salary)
     `yr` (Years worked)
     `profit` (Profit earned during working period)
     `curr_proj` (Research project status: Yes/No)
     `tot_proj` (Total projects completed)
3. Initialize `eligible = false`.
4. Check eligibility conditions:
   If `yr >= 1` OR
   If `profit >= 100000` OR
   If `curr_proj == "Yes"` OR
   If `tot_proj >= 2`
     → Set `eligible = true`.
5. If `eligible == true`:
    Call function `salary(&curr_sal)` which increases `curr_sal` by 20%.
    Store the returned value in `new_sal`.
    Display *"You are eligible for a salary increment"* and the `new_sal`.
6. Else:

    Display *"You are not eligible for a salary increment at this time."
7. End


# Conclusion:
The above code demonstrates the usage of pointer used in call by value and call by refernce in C++.
