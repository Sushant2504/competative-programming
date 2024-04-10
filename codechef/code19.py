
def solve(n):
    
    root = n ** (1/8)
    
    if(root != 0):
        print("YES")
        return
    else:
        print("NO")
        
        
t = int(input())
for i in range(t):
        n = int(input())
        sum = int(0)
        arr = []
        for i in range(n):
            arr = int(input())
        for i in range(n):
             sum = sum + int(arr[i])
        
        solve(sum)     