import math 
import numpy 
import random
from sympy import randprime


#Functions 
def IsPrime(n): 
    if(n==1 or n==0):
        return False
    for j in range(2,n):
        if(n%j==0): 
            return False
    return True
def gcd(a,b): 
    n=1
    while(n<=a and n<=b): 
        if(a%n==0 and b%n==0): 
            gcd=n
        n+=1
    return gcd
def IsRelativelyPrime(a,b): 
    if(gcd(a,b)==1): 
        return True
    return False

def ModularInverse(a,c): 
    r0,r1=a,c
    s0,s1=1,0
    t0,t1=0,1
 
    while(r1>0):
        q=r0//r1
        r0,r1=r1, r0%r1
        s0,s1=s1,s0-q*s1
        t0,t1=t1,t0-q*t1
    return r0  

def GetDigit(n,i): 
    digit=(n//pow(10,i))%10
    return digit
def NumberToASCII(n): 
    return chr(n)   
def ASCIItoNumber(m): 
    message=""
    for c in m:
        message+=str(ord(c))
    return int(message)

#The RSA Class
class RSA: 
    def __init__(self,p,q,m,n,e,d):
        self.p=p
        self.q=q
        self.m=m
        self.n=n
        self.e=e
        self.d=d
    def PrintNumbers(self): 
        print("p = ", self.p)
        print("q = ", self.q)
    def EulerTotient(self): 
        return ((self.p)-1)*((self.q)-1)
    def Encrypt(self):
        m=ASCIItoNumber(self.m)
        if m >= self.n: 
            print("Message Too Large")
            return None
        c=pow(m,self.e)%(self.n)
        return c
    def Decrypt(self,c): 
        m=pow(c,self.d,self.n)
        return ASCIItoNumber(m)



#Execute The Code        
def main(): 
   
   p=53
   q=67
   m="Hello"
   n=p*q
   phi_n=(p-1)*(q-1)
   e=0 

   for j in range(2, phi_n): 
        if(IsRelativelyPrime(j,phi_n)):
            e=j
            break
   d=ModularInverse(e,phi_n)
   R = RSA(p,q,m,n,e,d)

   private_key=(e,n)
   public_key=(d,n)

   print("Private Key: (e,n) = (", e, ",", n,")")
   print("Public Key: (d,n) = (", d, ",", n,")")

  #It is time to encrypt and decrypt the message. 
   c=R.Encrypt()
   if c is not None: 
        print("Encrypted Number: ", c)

        #Decrypt The Message 
        decypt_message=R.Decrypt(c)
        print("Decrypted Message: ", decypt_message)

    
main()





#Excess Code: 
#  a=24
#  b=68

#  print("GCD of ",a," and ", b, " is ", gcd(a,b))
# w=random.getrandbits(4096)
'''
p=randprime(2**4095, 2**4096)
q=randprime(2**4095, 2**4096)
'''

