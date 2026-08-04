# First Letter

TIME LIMIT: 2 sec
SPACE LIMIT: 256 MB

Do you know what **CPU** stands for? It's *Central Processing Unit*. But our programming club is also named **CPU**! Here it stands for *Competitive Programmers' Union*. Perfect match, right? The first letter here is **C**, which is your headache for this problem.

In this problem, you are given a grid with points and empty cells. You have to find the total number of **C**s that can be formed from the grid.

The grid consists of a period (.) which denotes an empty cell and the lowercase English letter 'c' which denotes a point. A **maximum** continuous sequence of 'c' vertically or horizontally denotes a line. A C is formed by two same length horizontal lines from two different rows and a vertical line connecting two leftmost ends of the horizontal lines. For example,

```
	Valid C    Invalid C

```

A line cannot be considered partially to form any C. All lines of a C must be of length at least 2.

Prove that you are yourself a *Napa Extra*, so a problem like this is not a headache to you ;)

## Input

Each test case starts with the number of cases $T$ and the $T$ cases follow.

Each case starts with two numbers $N$ and $M$ which denote the number of rows and columns for the case respectively. Then $N$ lines follow with column data of each row.

Each cell in the grid is either a period (.) or the lowercase Latin letter c. A series of c vertically or horizontally represents a line. No line can be considered partially to form any C, but one line can be used many times for different Cs.

NEW
----

Each input file contains multiple test cases. The first line contains the number of test cases t (1 <= t <= 10^4). The description of the test cases follows.

The first line of each test case contains two integers n and m (1 <= n, m <= 10^5). This is followed by n lines, each containing exactly m characters consisting only period (.) and the lowercase English letter 'c'.

Sum of $(n x m)$ over all test cases in an input file does not exceed $10^5$

**Constraints:**
- $1 <= T <= 10^4$
- $1 <= N, M <= 10^5$
- Sum of $(N x M)$ over all cases in a test case does not exceed $10^5$

## Output

Output $t$ lines, where each line contains the answer of the t-th test case.

## Explanation for case-0

### Case 1
Obviously, only one C can be formed.

### Case 2
All three Cs are shown below.

```
One:
ccccccc
c......
c......
c......
ccccccc

Two:
ccccccc
c......
ccccccc
.......
.......

Three:
.......
.......
ccccccc
c......
ccccccc
```

### Case 3
Both Cs are shown below.

```
One:
...cccccc...
...c........
...c........
...c........
...c........
...c........
...c........
...cccccc...

Two:
............
............
ccccccccc...
c...........
c...........
ccccccccc...
............
............
```

### LINES TO ADD

The top and bottom horizontal line segments of a 'C' must start at the same column and end at the same column (i.e., have equal length).