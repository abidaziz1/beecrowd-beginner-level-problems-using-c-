def calculate_sqrt(n):
    def recurs(N):
        if N == 0:
            return 0
        else:
            return 1 / (6 + recurs(N - 1))

    result = 3 + recurs(n)
    return result

n = int(input().strip())
apx = calculate_sqrt(n)
print(f"{apx:.10f}")
