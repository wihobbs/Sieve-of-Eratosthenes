## copyright 2021 hobbs
## python program for generating prime numbers
## "sieve of eratosthenes" method
## my attempt at parallel computing
## import multiprocessing as mp

def sieve(n):
    n = int(n)
    numbers = [False] * n

    for i in range(2, n): ## where 0 == integer 1
        if numbers[i] is False:
            for j in (range i, n):
                if (numbers[i*j] is False):
                    numbers[i*j] = True


sieve(1000)
