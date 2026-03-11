# Last updated: 3/11/2026, 12:09:00 PM
1class Solution(object):
2    def detectCapitalUse(self, word):
3        """
4        :type word: str
5        :rtype: bool
6        """
7        return word.istitle() or word.isupper() or word.islower()