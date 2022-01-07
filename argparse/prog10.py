import argparse

parser = argparse.ArgumentParser()
parser.add_argument('--foo',metavar = 'YYY')
parser.add_argument('bar',metavar = 'XXX')
parser.parse_args('X --foo Y'.split())

parser.print_help()
