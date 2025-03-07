# 2523. Closest Prime Numbers in Range
# Time Complexity: O(Rlog(log(R))+R−L)
# Space Complexity: O(R)
# Python Solution

class Solution:
    def sieve_of_eratosthenes(self, max_num: int) -> List[bool]:
        is_prime = [True] * (max_num + 1)
        p = 2
        while (p * p <= max_num):
            if (is_prime[p] == True):
                for i in range(p * p, max_num + 1, p):
                    is_prime[i] = False
            p += 1
        is_prime[0], is_prime[1] = False, False
        return is_prime

    def generate_primes_between(self, left: int, right: int) -> List[int]:
        if left < 2:
            left = 2
        max_num = right
        prime_list = self.sieve_of_eratosthenes(max_num)
        primes_in_range = [num for num in range(left, right + 1) if prime_list[num]]
        return primes_in_range

    def closestPrimes(self, left: int, right: int) -> List[int]:
        primes = self.generate_primes_between(left, right)
        if len(primes) < 2:
            return [-1, -1]
        
        min_diff = float('inf')
        closest_pair = [-1, -1]
        
        for i in range(len(primes) - 1):
            diff = primes[i + 1] - primes[i]
            if diff < min_diff:
                min_diff = diff
                closest_pair = [primes[i], primes[i + 1]]
        
        return closest_pair