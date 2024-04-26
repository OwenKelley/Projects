
# USING STRIP AND GETLINE FUNCTIONS

numList=[]
def load_Float(numList):
#  numList = []
    inFile = open("TESTDATA.txt", 'r')
#    for line in inFile:
#      line = line.strip(' ')
#      numList.append(line)
#    inFile.close()

   
    # reading each line    
    for line in inFile:
        # reading each word        
        for word in line.split(): 
            # displaying the words           
            numList.append(word)


#  return numList
def main():
#  ary = load_Float()
  print(numList)

load_Float(numList)
main()


