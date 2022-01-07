'''
By default argument parser groups command line arguments into 'positional arguments' and 'optional arguments'
when displaying help messages, when there is a better conceptual grouping of arguments than this default one,
appropriate groups can be created using the add_argument_group()
'''
import argparse

parser = argparse.ArgumentParser(prog = 'Add argument group',add_help = True)
group = parser.add_argument_group('group')
group.add_argument('--foo',help = 'foo help')
group.add_argument('bar', help = 'bar help')
print(parser.print_help())
