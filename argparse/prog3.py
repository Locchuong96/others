'''
ArgumentParser objects allow the help formatting to be customized by specifying an alternate formatting class.
Currently, there are four such classes:

	- class argparse.RawDescriptionHelpFormatter
	- class argparse.RawTextHelpFormatter          : maintains whitespace for all sorts of help text, including argument descriptions. However, multiple new lines are replaced with one. If you wish to preserve multiple blank lines, add spaces between the newlines.
	- class argparse.ArgumentDefaultsHelpFormatter : automatically adds information about default values to each of the argument help messages
	- class argparse.MetavarTypeHelpFormatter      : uses the name of the type argument for each argument as the display name for its values 
'''

import argparse
import textwrap
"""
parser = argparse.ArgumentParser(prog= 'PROG',
				formatter_class = argparse.RawDescriptionHelpFormatter,
				description = textwrap.dedent('''\
				Please don't mess up this text!
				-------------------------------
					I have indented it
					exactly the way
					I want it
				'''))

"""

parser = argparse.ArgumentParser( prog = 'PROG', formatter_class = argparse.MetavarTypeHelpFormatter )
parser.add_argument('--foo',type = int)
parser.add_argument('--bar',type = float)
parser.print_help()

print(parser.print_help())
