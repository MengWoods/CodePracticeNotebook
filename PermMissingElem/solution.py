A = [2,3,1,5,6,4,8,9] 

                

def solution1 (A):
    should_be = len(A)
    sum_is = 0
    
    for idx in range(len(A)):
        sum_is += A[idx]
        should_be += idx+1
   
    return should_be - sum_is + 1

def solution2(A):
    missing_element = len(A) + 1
    
    for idx, value in enumerate(A):
        missing_element = missing_element ^ value ^ (idx+1)
        
    return missing_element

def solution3(A):
    N = len(A) 
    s = (1 + N)*N/2
    res = s - (sum(A) - (N+1))
    return res
        
          
                
if __name__ == '__main__':
    B = solution3(A)
    print(B)
