class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """# most imp question : asked in capegemini 2027 round / hcl 
        left = 0 
        right= len(s)-1
        while left<right :
            s[left] ,s[right] = s[right] ,s[left] 
            left +=1
            right -=1
        