
#


########################
#     Owen Kelley      # 
#   Grade Calculator   #
########################
#
# 13 Labs
# 12 Quizzes
# 5  Programs
# 3  Tests
# 1  Final Exam

#input("Enter your 13 Labs, 12 Quizzes, 5 Programs, 3 Tests, and 1 Final")
#########################################################################
#def input():
#  data = input("Enter your 13 Labs, 12 Quizzes, 5 Programs, 3 Tests, and 1 Final")
#  while input
#    if data
#########################################################################
def labCalc():
  i = 0
  oldInput = 0.0
  lab = float(input())
  while i < 12 and lab != -1:
    lab = lab * 10
    lab = oldInput + lab
    oldInput = lab
    lab = float(input())
    i=i+1 
  labAvg = oldInput / 13
  return labAvg
#########################################################################
def quizCalc():
  i = 0
  low = 100.0
  lowest = 100.0
  total = 0.0
# TEST INPUT
# 100 100 100 -1

#  print("Enter your 12 Quizzes: ")
  quiz = float(input())
  while i < 11 and quiz != -1:
    quiz = quiz * 10
    total = total + quiz
    if quiz < low:
      low = quiz
    elif quiz < lowest:
      lowest = quiz
#    print(quiz)
    i = i+1
    quiz = float(input())
  if i == 12:
    total = total - low - lowest
    quizAvg = total / 10
  else:
    if i != 0:
      quizAvg = total / (i) # /10
    else:
      quizAvg = -1
#  print("Low     ", low)
#  print("Lowest  ", lowest)

  return quizAvg
#########################################################################
def progCalc():
  i = 0
  total = 0.0
  prog = float(input())
  while i < 4 and prog != -1:
    total = total + prog
    i=i+1
    prog = float(input())
  if i == 5:
    progAvg = total / 5
  else:
    if i != 0:
      progAvg = total / (i)
    else:
      quizAvg = -1

  return progAvg
#########################################################################
def examCalc():
  exam = float(input())
  return exam
#########################################################################
def testCalc(): #was (exam)
#  exam = examCalc()
  i = 0
  low = 100
  total = 0.0
  test = float(input())
  while i < 2 and test != -1:
    total = total + test
    if test < low:
      low = test
#    if i != -1:
    test = float(input())
    i=i+1

  examAvg = examCalc()
  if low < examAvg:
    total = total - low
    total = total + examAvg

#    test = oldInput + test
#    oldInput = test
  testAvg = total / 3
  return testAvg
#################################
#def testCalc():
#  i = 0
#  low = 100
#  test = float(input())
#  while i < 3 and test != -1:
#    total = total + test
#    if test < low:
#      low = test
#    if i != -1:
#      i=i+1
#    test = float(input())

#  total = total - low
#  testAvg = total / 3
#  return testAvg
#########################################################################

#########################################################################
#Programs 25%
#Tests 30%
#Quizzes 10%
#Labs 15%
#Final 20%
def finalGrade(labAvg, quizAvg, progAvg, testAvg, examAvg):
  if examAvg != -1:
    examAvg = examAvg * .20
    labAvg = labAvg * .15
    quizAvg = quizAvg * .1
    progAvg = progAvg * .25
    testAvg = testAvg *.30
    final = labAvg + quizAvg + progAvg + testAvg + examAvg

  else:
    labAvg = labAvg * .20
    quizAvg = quizAvg * .15
    progAvg = progAvg * .30
    testAvg = testAvg * .35
    final = labAvg + quizAvg + progAvg + testAvg
  return final

#TEST SET
# 0
# 100
# 100
# 100
# 100
#########################################################################
def letter(average):
  if average >= 97:
    return "A+"
  elif average >= 93:
    return "A"
  elif average >= 90:
    return "A-"
  elif average >= 87:
    return "B+"
  elif average >= 83:
    return "B"
  elif average >= 80:
    return "B-"
  elif average >= 77:
    return "C+"
  elif average >= 73:
    return "C"
  elif average >= 70:
    return "C-"
  elif average >= 67:
    return "D+"
  elif average >= 63:
    return "D"
  elif average >= 60:
    return "D-"
  elif average < 60:
    return "F"
#########################################################################
def table(labAvg, quizAvg, progAvg, testAvg, examAvg, final, Llab, Lquiz, Lprog, Ltest, Lexam, Lfinal):
  Lab = "Lab"
  Quiz = "Quiz"
  Test = "Test"
  Program = "Program"
  Exam = "Exam"
  Overall = "Overall Grade"
  if examAvg == -1:
    examAvg = "N/A"
    Lexam = "N/A"
    print("|=============================================|")
    print("| Category      | Average (%) | Letter Grade  |")
    print("|===============|=============|===============|")
    print("|", f"{Lab:<13}", "|", f"{labAvg:<11.1f}", "|", f"{Llab:<13}", "|")
    print("|", f"{Quiz:<13}", "|", f"{quizAvg:<11.1f}", "|", f"{Lquiz:<13}", "|")
    print("|", f"{Test:<13}", "|", f"{testAvg:<11.1f}", "|", f"{Ltest:<13}", "|")
    print("|", f"{Program:<13}", "|", f"{progAvg:<11.1f}", "|", f"{Lprog:<13}", "|")
    print("|", f"{Exam:<13}", "|", f"{examAvg:<11}", "|", f"{Lexam:<13}", "|")
    print("|===============|=============|===============|")
    print("|", f"{Overall:<13}", "|", f"{final:<11.1f}", "|", f"{Lfinal:<13}", "|")
  else:
    print("|=============================================|")
    print("| Category      | Average (%) | Letter Grade  |")
    print("|===============|=============|===============|")
    print("|", f"{Lab:<13}", "|", f"{labAvg:<11.1f}", "|", f"{Llab:<13}", "|")
    print("|", f"{Quiz:<13}", "|", f"{quizAvg:<11.1f}", "|", f"{Lquiz:<13}", "|")
    print("|", f"{Test:<13}", "|", f"{testAvg:<11.1f}", "|", f"{Ltest:<13}", "|")
    print("|", f"{Program:<13}", "|", f"{progAvg:<11.1f}", "|", f"{Lprog:<13}", "|")
    print("|", f"{Exam:<13}", "|", f"{examAvg:<11.1f}", "|", f"{Lexam:<13}", "|")
    print("|===============|=============|===============|")
    print("|", f"{Overall:<13}", "|", f"{final:<11.1f}", "|", f"{Lfinal:<13}", "|")
#########################################################################
print("Enter your 13 Labs, 12 Quizzes, 5 Programs, 3 Tests, and 1 Final")
# INPUT AND CALCULATION FUNCTIONS
labAvg = labCalc()
quizAvg = quizCalc()
progAvg = progCalc()
testAvg = testCalc()
#examAvg = examCalc()
#testAvg = testCalc(examAvg)

# TEST INPUT
#labAvg = 100
#quizAvg = 100
#progAvg = 100
#testAvg = 100
#examAvg = -1
final = 0

# LETTER GRADE CALCULATIONS
Llab = letter(labAvg)
Lquiz = letter(quizAvg)
Lprog = letter(progAvg)
Ltest = letter(testAvg)
Lexam = letter(examAvg)

# FINAL GRADE CALCULATIONS
final = finalGrade(labAvg, quizAvg, progAvg, testAvg, examAvg)
Lfinal = letter(final)

# OUTPUT TABLE
table(labAvg, quizAvg, progAvg, testAvg, examAvg, final, Llab, Lquiz, Lprog, Ltest, Lexam, Lfinal)


