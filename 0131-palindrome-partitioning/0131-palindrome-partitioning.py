class Solution:
    def partition(self, s: str) -> List[List[str]]:
        n=len(s)
        d=[[]for _ in range(n+1)]
        d[n]=[[]]
        for begin in range(n-1,-1,-1):
            for end in range(begin+1,n+1):
                can=s[begin:end]
                if can==can[::-1]:
                    for each in d[end]:
                        ne=[can]
                        ne.extend(each)
                        d[begin].append(ne)
        return d[0]
        