'''
Sometimes, several parsers share a common set of arguments. Rather than repeating the definitions of these arguments, a single parser with all the shared arguments and passed 
'''

import argparse

parent_parser = argparse.ArgumentParser(add_help = False) # parent parser
parent_parser.add_argument('--parent',type = int)
parent_args = parent_parser.parse_args()

foo_parser = argparse.ArgumentParser(parents = [parent_parser]) # child parser
foo_parser.add_argument('foo')
foo_parser.parse_args(['--parent','2','XXX'])
#foo_args = foo_parser.parse_args()

bar_parser = argparse.ArgumentParser(parents = [parent_parser]) # child parser
bar_parser.add_argument('bar')
bar_parser.parse_args(['--parent','2','YYY'])
#bar_args = bar_parser.parse_args()

print(parent_args)



