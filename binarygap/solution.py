N = 99

s = bin(N)
maxzero = 0
count = 0
print(s)
print(len(s))

for i in range (1, len(s)-1):
    if s[len(s)-i]=='1':
        flag = 1
        maxzero = count if maxzero <= count else maxzero
        count = 0
    if s[len(s)-i]=='0':
        if flag == 1:
            count += 1

        
      
            
print('count',count)
print('maxzero',maxzero)
    
