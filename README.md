# This is a sub-optimal C calculator

1. It doesn't check for under/overflow;
2. It is limited to signed integers;
3. It only takes two operands;
4. It only uses additions and substractions in the code;
5. It is poorly designed;
6. For the exponentiation : 0⁰ = 1.
   > I know, it should be undefined.

# How do I make it work ?
## __Compilation__
- Compile with : `make` 
  - Delete .o files : `make clean` 
  - Delete .o files and the executable : `make fclean`
 
>[!TIP]
>Add the flag `-s` to render the processes silent (and spare your eyes from a visual nightmare).

# How do I use it ?
## __Supported operators__
- addition `+`;
- subtraction `-`;
- multiplication `x`;
- exponentiation `p`;
- euclidian division `/`
- and modulo `%`.

## __Syntax__
- The syntax is : ***./c-calc number1 operator number2***;
- A number can start with an __arbitrary amount__ of whitespaces, '+' and '-' signs;
- The amount of '-' signs determines the sign of the number : negative if odd, positive if even.
- The operator is only a single character;

### Coming soon
- factorial `f`;
- square root `s`;
- unit conversions
- using double !
