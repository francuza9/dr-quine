FILENAME = "Grace_kid.py"
CODE = "FILENAME = {1}Grace_kid.py{1}{0}CODE = {1}{2}{1}{0} #Hello{0}with open(FILENAME, {1}w{1}) as f:{0}	f.write(CODE.format(chr(10), chr(34), CODE))"
 #Hello
with open(FILENAME, "w") as f:
	f.write(CODE.format(chr(10), chr(34), CODE))