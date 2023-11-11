class Solution:
    
    #Function to check if two strings are isomorphic.
    def areIsomorphic(self,str1,str2):
        maps1,maps2 = {},{}
        if len(str1)!=len(str2):
            return 0
        
        for c1 , c2 in zip (str1,str2):
            if ((c1 in maps1 and maps1[c1]!= c2)or
                (c2 in maps2 and maps2[c2]!= c1)):
                    return 0
            maps1[c1]=c2
            maps2[c2]=c1
        return 1