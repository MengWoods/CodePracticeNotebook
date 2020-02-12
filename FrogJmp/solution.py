import math

def solution2 (X, Y, D): 
    return math.ceil((Y-X)/D)
                
if __name__ == '__main__':
    B = solution2(10,85,30)
    print(B)
    
