# Problem          : 1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence
# Time Complexity  : O(n)
# Python Solution

class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        map = {}
        res = sentence.split()
        for i, word in enumerate(res, 1):
            map[i] = word
    
        for key, value in map.items():
            if searchWord in value:
                if value[:len(searchWord)] == searchWord:
                    return key
        return -1