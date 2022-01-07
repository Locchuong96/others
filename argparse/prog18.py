import argparse

parser = argparse.ArgumentParser()
parser.add_argument('--foo',action = 'store_true')
parser.add_argument('bar')
parser.parse_known_args(['--foo','--badger','BAR','spam'])

args = parser.parse_args()

print(args)
