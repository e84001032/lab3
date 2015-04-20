E84001032@2015cpp:~/lab/lab3$ ./lab3_B
1000
sort(): 0.00000 seconds
v1/v2 are different.
insertion_sort(): 0.01000 seconds
v1/v2 are the same.
E84001032@2015cpp:~/lab/lab3$ ./lab3_B
10000
sort(): 0.00000 seconds
v1/v2 are different.
insertion_sort(): 1.28000 seconds
v1/v2 are the same.
E84001032@2015cpp:~/lab/lab3$ ./lab3_B
100000
sort(): 0.04000 seconds
v1/v2 are different.
insertion_sort(): 128.12000 seconds
v1/v2 are the same.
E84001032@2015cpp:~/lab/lab3$ ./lab3_B
1000000
sort(): 0.50000 seconds
v1/v2 are different.
^C

insertion_sort的複雜度為O(n^2)
algorithm所提供的sort()的複雜度為O(nlogn)
在n=100000 時 差距約為 6000倍 (100000^2/100000*log(2)100000)
由0.04*6000 = 240 差不多跟128.12為同樣的scale

而n=1000000時 差距則約50000倍
0.5*50000 = 25000 預計需費時數小時

在n越大時時間複雜度的影響會越明顯
