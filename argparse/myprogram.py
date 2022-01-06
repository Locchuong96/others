import argparse

parser = argparse.ArgumentParser(prog='program') # prog default is your program name
parser.add_argument('--foo',help= 'foo help')
args = parser.parse_args()
print(args)
