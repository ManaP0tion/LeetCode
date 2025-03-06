class Solution:
    def reverse(self, x: int) -> int:
        if x == 0:
            return x
        # 음수인지 아닌지 판단
        isNegative = False
        if x < 0:
            isNegative = True

        if isNegative == True:
            s = str(x*-1)
        else:
            s = str(x)

        # 뒤집기
        r = s[::-1]
        if r[0] == "0":
            r = r[1::]
        if int(r) > 2147483647 or int(r) < -2147483648:
            return 0
        
        if isNegative == True:
            return int(r)*-1
        else:
            return int(r)
        
                

        

