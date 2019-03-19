目前的板子因为只能容纳一个sample,我担心不清楚因此在HINT里面写另外的3个

Input:
2 1 0
10 10
Output:
20

Input:
1 2 1
5 2
Output:
2

Input:
3 2 1
1 2 3 4 5 6
Output:
0


In the first example you can form the following barrels: [1, 2], [2, 2], [2, 3], [2, 3].

In the second example you can form the following barrels: [10], [10].

In the third example you can form the following barrels: [2, 5].

In the fourth example difference between volumes of barrels in any partition is at least 2 so it is impossible to make barrels equal enough.
