from collections import defaultdict
import math
from bisect import bisect_left as bl
from bisect import bisect_right as br

def findPrimes(n: int):
        n = 1000
        res = [1]*(n+1)
        d = defaultdict(lambda:1)
        for i in range(2,int(math.sqrt(n))+1):
            if res[i]:
                for j in range(i,n//i+1):
                    res[i*j] = 0
                    d[i*j] = 0
        
        t = []
        for i,v in enumerate(res[2:]):
            if v:
                t.append(i+2)
        return t, d


def mysol(n,arr):
    maxele = max(arr)
    all_primes, all_p_dict = findPrimes(maxele+1)
    print(arr)
    res = 0
    for i,v in enumerate(arr):
        if all_p_dict[v]!=1:
            l = bl(all_primes, v)
            r = br(all_primes, v)
            res += min(abs(v-all_primes[l]),abs(all_primes[r]-v))
            

    print(res)

mysol(5, [9,5,5,6])