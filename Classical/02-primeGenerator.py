import numpy as np

def isPrime(n):
    if n>1:
        if n % 2 == 0 and n > 2: 
            return False
        return all(n % i for i in range(3, int(np.sqrt(n)) + 1, 2))
    else:
        return False

def primeTill(n):
    primes = []

    for i in range(n):
        if isPrime(i)==True:
            primes.append(i)

    return primes

if __name__ == "__main__":
    testcases = int(input())
    for i in range(testcases):
        
        a, b = input().split()
        a = int(a)
        b = int(b)

        for prime in primeTill(b):
            if prime>=a and prime<=b:
                print(prime)
