class Solution:
    def smithNum(self, n):
        def cd(n):
            ans = 0
            while n > 0:
                ans += (n % 10)
                n //= 10
            return ans
        digitsum = cd(n)
        primefact = 0
        temp = n
        div = 2
        while temp > 0 and div < n:
            while temp % div == 0:
                primefact += cd(div)
                temp //= div
            div += 1
        if temp > 1:
            return 0
        if digitsum == primefact:
            return 1
        return 0