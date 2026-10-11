import time

start = time.time()

total = 0

for i in range(1, 1_000_000_001):
    total += i

end = time.time()

print("Sum =", total)
print("Time =", end - start, "seconds")
