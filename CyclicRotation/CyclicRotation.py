A = [3, 8, 9, 7, 6] 
B = [0]*len(A)

K = 10

def solution (A,K):
    for i in range(0,len(A)):       
        B[(i+K)%(len(A))] = A[i]           
    return(B)
                
if __name__ == '__main__':
    B = solution(A,K)
    print(B)
