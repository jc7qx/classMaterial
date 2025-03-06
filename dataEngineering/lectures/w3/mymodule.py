# mymodule.py
def compBMI(wt, ht) -> float:
    wt = float(wt)
    ht = float(ht)/100
    return wt/(ht**2)

def C2F(c: int=0) -> float:
  f = c*9/5+32
  return f

def myabs(num: int) -> int:
  if num >= 0:
    return num
  else:
    return -num

def findSolution(a: int, b: int, c:int ):
    d = (b**2-4*a*c)
    if d < 0:
        return "無解"
    elif d == 0:
        return "有一解 = %f" % (-b/(2*a))
    else:
        d = d**0.5
        return "有二解 (%f, %f)" % ((-b-d)/(2*a), (-b+d)/(2*a))