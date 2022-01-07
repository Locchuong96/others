import argparse

parser = argparse.ArgumentParser()
parser.add_argument('--raw',type = argparse.FileType('wb',0))
parser.add_argument('out',type = argparse.FileType('w',encoding = 'UTF-8'))
args = parser.parse_args(['--raw','raw.dat','file.txt'])

