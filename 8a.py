def isHeap(arr, i, n):
    if i > int((n - 2) / 2):
        return True
    if(arr[i]>=arr[2*i+1] and arr[i]>=arr[2*i+2] and isHeap(arr, 2*i+1,n) and isHeap(arr,2*i+2,n)):
        return True
    return False

arr=[90,15,10,7,12,2,3,7]
n=len(arr)-1
if isHeap(arr,0,n):
    print("yes")
else:
    print("no")
    
