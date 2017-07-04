# Balanced Brackets

A bracket is considered to be any one of the following characters: `(` , `)` , `{` , `}` , `[` , or `]`.

Two brackets are considered to be a matched pair if the an opening bracket (i.e. `(` , `[` , or `{`) occurs to the left of a closing bracket (i.e. `)` , `]` , or `}`) of the exact same type. There are three types of matched pairs of brackets: `[]` , `{}` , and `()`.

A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. For example, `{[(])}` is not balanced because the contents in between `{` and `}` are not balanced. The pair of square brackets encloses a single, unbalanced opening bracket, `(` and the pair of parentheses encloses a single, unbalanced closing square bracket `]`.

By this logic, we say a sequence of brackets is considered to be balanced if the following conditions are met:

It contains no unmatched brackets.

The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.


Given a string containing only brackets, determine whether the brackets are balanced.


## Input Format

A string consisting of a sequence of brackets.

## Output Format

 If the brackets are balanced print YES. Otherwise, print NO.


## Analysis

Declare a character stack.

Now traverse the inputted string.

    If the current character is a opening bracket, then push it into the stack.

    If the current character is a closing bracket, and stack is empty then the brackets are not balanced. Else pop from the stack and if the popped character is the matching starting bracket then continue else brackets are not balanced.

After complete traversal, if there is some opening bracket left in stack then the brackets are not balanced else balanced.