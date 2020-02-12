A = [3,1,2,4,3] 
di_list = []

def solution1 (A):  # time complexity is O(N*N)
    for i in range(1,len(A)-1):
        p1 = sum(A[:i])
        p2 = sum(A[i:])
        di = abs(p1-p2)
        di_list.append(di)
        
    return min(di_list)


def solution2 (A):
    s = sum(A)
    m = float('inf')    
    left_sum = 0
    for i in A[:-1]:
        print(i)
        left_sum += i
        m = min(abs(s-left_sum-left_sum),m)
    return m
        
          
                
if __name__ == '__main__':
    B = solution2(A)
    print(B)
