#!/usr/bin/env python
from subprocess import call
import time
#call(["git","add","."])
#call(["git", "status"])
call(["git", "commit", "-a","-m", "\""+"AutomatedCommit"+time.strftime("%d/%m/%Y")+"\""])
call(["git", "push","master"])
