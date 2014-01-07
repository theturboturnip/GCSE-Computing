#!/usr/bin/env python
from subprocess import call
call(["git","add","."])
call(["git", "status"])
call(["git", "commit", "-m", "\""+"AutomatedCommit"+""])
call(["git", "push","master"])
