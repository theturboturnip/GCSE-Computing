#!/usr/bin/env python
import subprocess,sys,time
#seperate date into month,day,and year

date=time.strftime("%y:%m:%d")
folderName="ComputingHomework"+date



subprocess.call(["cd","/Users/samuel/Documents/Homework"])
folderContents=subprocess.check_output(["ls"])
if folderName not in folderContents:
    subprocess.call(["mkdir",folderName])
else:
    sys.exit("That folder already exists!")
numOfProjects=int(raw_input("How many projects?"))

#print folderContents
#print "cd ./"+folderName
#subprocess.call(["cd","./"+folderName])
#subprocess.call(["ls"])

for i in range(numOfProjects):
    projectName=raw_input("What should project "+str(i+1)+" be named?")
    subprocess.call(["mkdir","./"+folderName+"/"+str(i+1)+" - "+projectName])
