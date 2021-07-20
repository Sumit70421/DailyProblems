# Digit Palindromic
# Rahul is a maths genius so he came up with a game and as raj is Rahul's best friend so Rahul decided to play the game with raj. Rahul gives raj two numbers 
# L
#  and 
# R
#  and asks raj to find the count of numbers in the range from 
# L
#  to 
# R
#  (
# L
#  and 
# R
#  inclusive) which are a digit palindromic. A number is a digit palindromic if its first digit is the same as its last digit.

# As raj is not very good at maths so your task is to help Raj find out how many numbers are a digit palindromic in the range 
# L
#  to 
# R
# .

# For example if 
# L
#  = 
# 8
#  and 
# R
#  = 
# 25
#  .The following numbers are a digit palindromic in the range of 
# L
#  to 
# R
# : 8, 9, 11, and 22.

# If 
# L
#  = 
# 1251
#  and 
# R
#  = 
# 1266
# . The digit palindromic numbers are 1251 and 1261.

# Input format
# The first line contains an integer denoting the number of test cases.

# Each test case is described by a single line that contains two integers 
# L
#  and 
# R
# .

# Output format
# For each test case output, an integer denoting how many a digit palindromic numbers are there in the given range.

# Constraints
# 1
# ≤
# T
# ≤
# 5
# ∗
# 10
# 4

# 1
# ≤
# l
# ≤
# r
# ≤
# 10
# 18
# .

# Time Limit
# 1 second

# Example
# Input
# 3
# 8 25
# 1251 1266
# 12 21

# Output
# 4
# 2
# 0
t=int(input())
while(t>0):
  def numdig(num):
    strnum=str(num)
    return len(strnum)
  def palin(L,R):
    count=0
    for i in range(int(L),int(R)+1):
      if(numdig(i)==1):
        count+=1
      else:
        stringinput=str(i)
        if(stringinput[0]==stringinput[-1]):
          count+=1
    
    return count  
  L, R =input().split()
  print(palin(L,R))
  t-=1
