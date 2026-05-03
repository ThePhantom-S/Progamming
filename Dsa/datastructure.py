#Starting with Data structures in python

"""
Types of sorting : 
-> Selection Sort
-> Bubble Sort
-> Merge Sort
-> Quick Sort
-> Bucket Sort
-> Counting Sort
"""
"""
#Selection Sort O(n²)

arr = [4,3,5,2,1,7]

for i in range(len(arr)):
    sm = i
    for j in range(i+1,len(arr)-1):
        sm = j if arr[sm] > arr[j] else sm
    arr[i], arr[sm]= arr[sm],arr[i]

print(arr)
"""

"""
Types of Searching Algorithm :
    -> Linear Search O(n)
    -> Binary Search O(log₂ n) # Sorted Array
"""

#linear Search Algorithm

arr: List[int] = [1,3,4,2,5,6,9,8,7]
target: int = 5
Found: bool = False
for i in arr:
    if i == target: 
        Found = True
print(Found)
    


