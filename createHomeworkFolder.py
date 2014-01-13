#!/usr/bin/env python
import subprocess
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
date=stringYear+":"+stringMonth+":"+stringDay+"/"
cdDate=stringYear+"\:"+stringMonth+"\:"+stringDay+"/"
folderName="ComputingHomework"+date
cdFolderName="ComputingHomework"+cdDate


numOfProjects=int(raw_input("How many projects?"))

subprocess.call(["cd","/Users/samuel/Documents/Homework"])
folderContents=subprocess.check_output(["ls"])
print folderContents
call(["mkdir",folderName])
print "cd ./"+cdFolderName
call(["cd","./"+cdFolderName])
call(["ls"])

#for i in range(numOfProjects):
#    call(["mkdir",str(i+1)+" - "])
#call(["cd","../"])
