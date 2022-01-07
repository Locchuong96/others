import argparse

parser = argparse.ArgumentParser(prog = 'PROG', description = 'Calculate box square')

parser.add_argument('-v','--verbose',type = int, choices  = [0,1,2], help = 'choice display option')
parser.add_argument('lenght',type = int, help = 'the lenght of box')

args = parser.parse_args()

if __name__ == "__main__":
   if args.verbose == 0:
      print(args.lenght **2)
   elif args.verbose == 1:
      print(f"The box's square is {args.lenght **2}")
   elif args.verbose == 2:
      print(f"{args.lenght ** 2} m2")
   else:
      print("argument is invalid")

