'''
argparse subparsers
Many programs split up their functionality into a number of sub-commands, for example,
the svn program can invoke sub-commands like svn checkout, svn update, and svn commit.
Splitting up functionality this way can be a particularly good idea when a program performs 
several different functions which require different kinds of command-line arguments. 
'''
import argparse 

# create the top level parser
parser = argparse.ArgumentParser(prog='PROG')
parser.add_argument('--foo',action='store_true',help = 'foo help')
subparsers = parser.add_subparsers(help = 'sub-command help')

# create the parser for the 'a' command
parser_a = subparsers.add_parser('a',help = 'a help')
parser_a.add_argument('bar',type = int, help = 'bar help')

# create the parser for the 'b' command
parser_b = subparsers.add_parser('b',help = 'b help')
parser_b.add_argument('--baz', choices = 'XYZ', help = 'baz help')

# parse some argument lists
print(parser.parse_args(['a','12'])) #
print(parser.parse_args(['--foo','b','--baz','Z']))
