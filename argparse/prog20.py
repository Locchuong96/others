import argparse

parser = argparse.ArgumentParser()

parser.add_argument('lenght',type = int,help = "Box's length")
parser.add_argument('-v',action = 'count',help = 'Set mode by count argument')

args = parser.parse_args()

if args.v == 1:
   print(f"{args.lenght**2}")
elif args.v == 2:
   print(f"{args.lenght**2} (m2)")
else:
   print("Argument's value is invalid")
