import time

t0 = time.time()

def collatz(n):
    count = 0
    while n != 1:
        count += 1
        if n % 2 == 0:
            n /= 2
        else: n = 3 * n + 1
    return count

with open("collatz_py.dat", "w") as fp:
    for n in range (1, 100_001):
        fp.write(str(n)+" "+str(collatz(n))+"\n")

print(time.time() - t0)