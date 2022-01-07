import argparse

parser = argparse.ArgumentParser()
subparsers = parser.add_subparsers(dest = 'subparser_name')
subparser1 = subparsers.add_parser('1')
subparser1.add_argument('-x')
subparser2 = subparsers.add_parser('2')
subparser2.add_argument('y')

args = parser.parse_args(['2','frobble']) # choice subparser2
print(args)
