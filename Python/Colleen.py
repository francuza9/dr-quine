#hello
def quine():
	code = "#hello{0}def quine():{0}	code = {1}{2}{1}{0}	print(code.format(chr(10), chr(34), code)){0}quine(){0}def main():{0}	#hi{0}	return 0"
	print(code.format(chr(10), chr(34), code))
quine()
def main():
	#hi
	return 0
