########################################
# Program: alg14.py || list01
# Author: Raissa Cavalcanti
# Description: Average discipline
########################################

# Considering all grades are different

first_subject = float(input("What is your grade in the first subject? \n"))
second_subject = float(input("What is your grade in the second subject? \n"))
third_subject = float(input("What is your grade in the third subject? \n"))

average = ((first_subject + second_subject + third_subject) / 3)

if average < 5:
    if first_subject < second_subject and first_subject < third_subject:
        print("I suggest you drop your first subject, as your grade is very low.")
    elif second_subject < first_subject and second_subject < third_subject:
        print("I suggest you drop your second subject, as your grade is very low.")
    else:
        print("I suggest you drop your third subject, as your grade is very low.")
elif average >= 5 and average < 7:
    if first_subject < second_subject and first_subject < third_subject:
        print("I suggest you be careful with your first subject, as your grade is very low.")
    elif second_subject < first_subject and second_subject < third_subject:
        print("I suggest you be careful with your second subject, as your grade is very low.")
    else:
        print("I suggest you be careful with your third subject, as your grade is very low.")
else:
    print("Your grades are good, keep it up!")
