count = 0
count2 = 0
str = input("Enter a string ")
for i in str :
    if i in "aeiouAEIOU" :
        count = count + 1
    else:
        count2 = count2 + 1

print("vowels",count)
print("Consonenets",count2)