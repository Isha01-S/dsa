

def sorted(arr,i):
    count =0
    n=len(arr)

    if (i==n):
        return count
    
    if (arr[i]<arr[i-1]):
        count+=1
        return count
    return sorted(arr,i+1)

arr= [1,2,3,4,5]
count=0
i=1
count=sorted(arr,i)
if (count==0):
    print("array is sorted\n")

else:
    print("array is not sorted.\n")


    