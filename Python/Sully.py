import os
FILENAME = "Sully_{0}.py"
i = 5
if i <= -1:
	exit()
filename = FILENAME.format(i)
current = os.path.basename(__file__)
if filename == current:
	i-=1
	filename = FILENAME.format(i)
fp = open(filename, "w")
if not fp:
	exit()
code = "import os{0}FILENAME = {1}Sully_{4}0{5}.py{1}{0}i = {2}{0}if i <= -1:{0}	exit(){0}filename = FILENAME.format(i){0}current = os.path.basename(__file__){0}if filename == current:{0}	i-=1{0}	filename = FILENAME.format(i){0}fp = open(filename, {1}w{1}){0}if not fp:{0}	exit(){0}code = {1}{3}{1}{0}fp.write(code.format(chr(10), chr(34), i, code, chr(123), chr(125))){0}fp.close(){0}if i > 0:{0}	os.system({1}python3 {1} + filename)"
fp.write(code.format(chr(10), chr(34), i, code, chr(123), chr(125)))
fp.close()
if i > 0:
	os.system("python3 " + filename)