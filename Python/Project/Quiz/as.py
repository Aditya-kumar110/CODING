print("Welcome to my Quiz Game!")

playing = input("Do you want to play ? ")
score = 0

if playing.lower() != "yes" :
    quit()

print("Okay ! Lets play :)")
answer = input("What does CPU stand for ? " )
if answer.lower() == "central processing unit" :
    print("Correct!")
    score += 1
else:
    print("Incorrect!")

answer = input("What does GPU stand for ? " )
if answer.lower() == "graphics processing unit" :
    print("Correct!")
    score += 1
else:
    print("Incorrect!")   

answer = input("What does RAM stand for ? " )
if answer.lower() == "random acess memory" :
    print("Correct!")
    score += 1
else:
    print("Incorrect!")   

answer = input("What does rom stand for ? " )
if answer.lower() == "read only memory" :
    print("Correct!")
    score += 1
else:
    print("Incorrect!")   
print("You got " + str(score) + " questions correct")
print("you got " + str((score/4)*100) + "%")