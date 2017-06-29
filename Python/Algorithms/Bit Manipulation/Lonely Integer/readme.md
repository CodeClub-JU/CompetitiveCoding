## Question

Consider an array of `n` integers, ![](http://latex.codecogs.com/svg.latex?A%20%3D%20%5Cleft%5Ba_0%2C%20a_1%2C%20...%20a_%7Bn-1%7D%20%5Cright%5D), where all but one of the integers occur in pairs. In other words, every element in A occurs exactly twice except for one unique element.

Given `A`, find and print the unique element.

### Input format

The first line contains a single integer, `n`, denoting the number of integers in the array. 
The second line contains `n` space-separated integers describing the respective values in `A`.

### Related topics

- [Bitwise XOR](https://www.hackerrank.com/challenges/lonely-integer/topics/bitwise-xor)


#### Analysis of the solution :

The properties of XOR are : 
- x^0 = x 
- x^x = 0

Now, what we're doing is performing a XOR of all the elements of the array. From property 2, we see that all numbers that occur twice will result in 0 after XOR-ing, and since the XOR of any number with 0 is the number itself, we thus obtain out required answer.

Let's consider this example :

![](http://latex.codecogs.com/svg.latex?%286%29_%7B10%7D%5Coplus%282%29_%7B10%7D%5Coplus%288%29_%7B10%7D%5Coplus%286%29_%7B10%7D%5Coplus%282%29_%7B10%7D)

![](http://latex.codecogs.com/svg.latex?%5CRightarrow%20%280110%29_%7B2%7D%5Coplus%280010%29_%7B2%7D%5Coplus%281000%29_%7B2%7D%5Coplus%280110%29_%7B2%7D%5Coplus%280010%29_%7B2%7D)

![](http://latex.codecogs.com/svg.latex?%5CRightarrow%20%281000%29_%7B2%7D)

![](http://latex.codecogs.com/svg.latex?%5CRightarrow%20%288%29_%7B10%7D)


<sub> _Link to original question :_ https://www.hackerrank.com/challenges/lonely-integer/problem </sub>
