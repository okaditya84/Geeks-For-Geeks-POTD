        t = int(input())

        for _ in range(t):
            n = int(input())
            a = list(map(int, input().split()))
            
            found = False
            sums = {}
            
            for i in range(n-1):
                for j in range(i+1, n):
                    pair_sum = a[i] + a[j]
                    if pair_sum in sums:
                        print("YES")
                        found = True
                        break
                    sums[pair_sum] = (i, j)
                if found:
                    break
            
            if not found:
                print("NO")
