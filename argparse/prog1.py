import argparse

parser = argparse.ArgumentParser(prog = 'PROG', # the program name
				usage = '%(prog)s [option]', #  the usage of program
				description = "A foo that bars", # a brief description of what program does and how it work
				epilog = "And that's how you'd foo a bar", # an additional description of the program after the description of the arguments
				)
parser.add_argument('--foo',nargs='?',help='foo help')
parser.add_argument('--bar',nargs='+',help='bar help')
print(parser.print_help())
