'''
By default argument parser groups command line arguments into 'positional arguments' and 'optional arguments'
when displaying help messages, when there is a better conceptual grouping of arguments than this default one,
appropriate groups can be created using the add_argument_group()
'''
import argparse

parser = argparse.ArgumentParser(prog = 'Add argument group',add_help = True)
group1 = parser.add_argument_group('group')
group1.add_argument('--foo',help = 'foo help')
group1.add_argument('bar', help = 'bar help')
group2 = parser.add_argument_group('group2')
group2.add_argument('--baz',help = 'group2 baz help',type = int, default = 0)
print(parser.print_help())
