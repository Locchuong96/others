"""
Sometimes, for example when dealing with a particularly long argument lists, 
it may make sense to keep the list of arguments in a file rather than typing it out at the command line.
If the fromfile_prefix_chars= argument is given to the ArgumentParser constructor, 
then arguments that start with any of the specified characters will be treated as files,
and will be replaced by the arguments they contain.
"""

import argparse

'''
create a text file for contain the list of arguments 
'''

with open('args.txt','w') as f:
   f.write('-f\nbar')

parser = argparse.ArgumentParser(fromfile_prefix_chars = '@')
parser.add_argument('-f')
parser.parse_args(['-f','foo','@args.txt'])
