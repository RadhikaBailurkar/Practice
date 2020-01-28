#Swapping three variables, Assign C to A, A to B and B to C
def swapThree(a,b,c):
    a = a + b + c
    b = a - (b + c)
    c = a - (b + c)
    a = a - (b + c)
    print("After Swapping a =", a,"b = ",b,"c = ",c)

#Driver code
if __name__ = '__main__':
    a = 10
    b = 20
    c = 30
    prirnt("Before Swapping a = ",a,"b = ",b,"c = ",c)

    swapThree(a, b, c)
