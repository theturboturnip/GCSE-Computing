#!/usr/bin/env python
import os,subprocess
path=os.path.split(os.path.abspath(__file__))[0]+"/"

def findreplace(to_look,to_replace,replace_with):
    all_strings=to_look.split()
    new_string=""
    for string in all_strings:
        if string==to_replace:
            string = replace_with
        new_string+=string+" "
    return new_string
    
def openfile(old_path,new_path):
    oldfile = open(old_path,"r")
    newfile = open(new_path,"w+")
    oldlines=oldfile.readlines()

    while True:
        to_replace=raw_input("toreplace: ")
        replace_with=raw_input("replacewith: ") 
        newfile.seek(0,0)
        for line in oldlines:
            prevline=line
            line = findreplace(line,to_replace,replace_with)
            oldlines[oldlines.index(prevline)]=line
            newfile.write(line)
    oldfile.close()
    newfile.close()
old_path=path+raw_input("oldpath: ")
new_path=path+raw_input("newpath: ")
if old_path not in subprocess.check_output(["ls"]) or new_path not in subprocess.check_output(["ls"]):
    print "Error: A file you referenced does not exist."
openfile(old_path,new_path)
        
    
    
