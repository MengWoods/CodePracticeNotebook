
A = [9, 3, 9, 3, 9, 7, 9] 

def solution1 (A):  # can only handle small test
    for i in range(0,len(A)):   
        count = 0
        for j in range(0, len(A)):
            if A[i] == A[j]:
                count += 1
        if count == 1:
            return A[i]
                

def solution2 (A):
    missing_int = 0
    for value in A:
        missing_int ^=value
    return missing_int

'''Complexity:
expected worst-case time complexity is O(N);
expected worst-case space complexity is O(1)
Execution:
This problem can be found in many algorithm books. A xor A cancels itself and B xor 0 is B. Therefore A xor A xor B xor C xor C is B.
 '''
            
                
if __name__ == '__main__':
    B = solution2(A)
    print(B)
