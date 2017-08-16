We are given a list of prices of a stock for N number of days.

We need to find the span for each day.

Span is defined as number of consecutive days before the given day
where the price of stock was less than or equal to price at given day.

Input format:
First line contains n, the number of elements in the stock array.
Second line contains the stock array elements.

Output Format:
A single line containing the elements of the span array.

For example,
Sample Input:
7
100 60 70 65 80 85

Output:
1, 1, 2, 1, 4, 5

Explanation:
For first day span is always 1.
In example we can see that for day 2 at 60, there is no day before it
where price was less than 60. Hence span is 1 again. For day 3, price
at day 2 (60) is less than 70, hence span is 2. Similarly, for day 4
and day 5. Remember days should be consecutive, that why span for day 4
is 1 even though there was a day 2 where price was less than 65.
