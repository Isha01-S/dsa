

def Factorial(n):

    if (n==1 or n==0):
        return 1
    
    else:
        return n*Factorial(n-1)
    


n= int(input("Enter n: "))
factorial=Factorial(n)
print(f"Factoria of {n} is: {factorial}")

    
