# ramnitcode27
# Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :
# 1. Each student gets exactly one packet.
# 2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.


class Solution:
    def findMinDiff(self, a,n,m):
        a.sort();
        diff=a[m-1]-a[0];
        for i in range(0,n-m+1):
            diff=min(diff,a[m-1+i]-a[0+i]);
        return diff;

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        N = int(input())
        A = [int(x) for x in input().split()]
        M = int(input())

        solObj = Solution()
        print(solObj.findMinDiff(A,N,M))