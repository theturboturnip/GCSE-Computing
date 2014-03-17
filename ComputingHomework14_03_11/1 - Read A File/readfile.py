#!/usr/bin/env python
import os
path=os.path.split(os.path.abspath(__file__))[0]+"/"

def printfile(path):
    file = open(path,"r")
    lines=file.readlines()
    for line in lines:
        print line
    file.close()
print_path=path+raw_input("print_path: ")
printfile(print_path)
        
        
    
    
