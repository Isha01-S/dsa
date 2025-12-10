def Factorial(n):

    if (n==1 or n==0):
        return 1
    else:
        return n*Factorial(n-1)
a = int(input("Enter n: "))
fact=Factorial(a)
print(f"factorial of {a} is {fact}")
