import hashlib
import time
key = input("Enter the constant data:\n")

hash = input("Enter the target value in lower case alphabets:\n")

start = time.time()
i=1
while(1):
    nonce_key = key+str(i)
    nonceHash = hashlib.sha256(nonce_key.encode("utf-8")).hexdigest()
    if(nonceHash<hash):
        break
    i = i+1
end = time.time()    
print("The value of variable data (integer) is: ",i)
print("Time taken by it is: ", (end-start)," seconds")