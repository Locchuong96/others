'''
Most command-line options will use - as the prefix, e.g. -f/--foo. 
Parsers that need to support different or additional prefix characters, e.g. for options like +f or /foo, 
may specify them using the prefix_chars= argument to the ArgumentParser constructor
'''

import argparse
import textwrap

parser = argparse.ArgumentParser(prog = 'PROG',prefix_chars = '-+')
parser.add_argument('+f')
parser.add_argument('++bar')
args = parser.parse_args('+f X ++bar Y'.split())

print(args)
print(parser.parse_args())

