'''
Create a mutually exclusive group. 
argparse will make sure that only one of the arguments in the mutually exclusive group was present on the command line
'''

import argparse

parser = argparse.ArgumentParser(prog = 'PROG')
group = parser.add_mutually_exclusive_group(required = True)
group.add_argument('--foo',action = 'store_false')
group.add_argument('--bar',action = 'store_true')

parser.parse_args([])
