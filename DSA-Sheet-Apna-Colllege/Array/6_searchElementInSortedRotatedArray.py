# ramnitcode27
# Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an element key. The task is to find the index of the given element key in the array A.

class Solution:
    # Time Complexity: O(N)
    def searchN(self, A : list, l : int, h : int, key : int):
      for i in range(len(A)):
          if key == A[i]:
              return i
          else:
              continue
      return -1
    
    # Time Complexity: O(log N).
    # Auxiliary Space: O(1).
    def search(self, A : list, l : int, h : int, key : int):
        if l>h:
            return -1
        
        mid=(l+h)//2
        if A[mid]==key:
            return mid
        
        if A[l]<=A[mid]:
            if key >= A[l] and key <= A[mid]:
                return self.search(A, l, mid - 1, key)
            return self.search(A, mid + 1, h, key)
            
        if key >= A[mid] and key <= A[h]:
            return self.search(A, mid + 1, h, key)

        return self.search(A, l, mid - 1, key)

if __name__ == '__main__':
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        A = [int(x) for x in input().split()]
        k = int(input())
        ob=Solution()
        print(ob.search(A, 0, n - 1, k))