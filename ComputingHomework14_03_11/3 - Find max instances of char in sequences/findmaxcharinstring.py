#!/usr/bin/env python
import os
path=os.path.split(os.path.abspath(__file__))[0]+"/"


def addtonum(char):
    global currentnum,tofind
    if char is tofind:
        currentnum+=1
tofind=raw_input("tofind: ")
i=0
lines=[0,0,0,0,0]
while i<5:
    lines[i]=raw_input("Sequence "+str(i+1)+":")
    i+=1
maxnum=0
currentnum=0
for line in lines:
    map(addtonum,line)
    if currentnum>maxnum:
        maxnum=currentnum
    currentnum=0
print "Character "+tofind+" occurred a maximum of "+str(maxnum)+" times."
        
