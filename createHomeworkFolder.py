#!/usr/bin/env python
import subprocess,sys,datetime.date
#seperate date into month,day,and year
day=raw_input("What is the day of the homework?")
month=raw_input("What is the month of the homework?")
year=raw_input("What is the year of the homework?")
stringDay=day
stringMonth=month
stringYear=year

if(day<10):
    stringDay="0"+day
if(month<10):
    stringMonth="0"+month
if(year<10):
    stringYear="0"+year
date=stringYear+":"+stringMonth+":"+stringDay
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
