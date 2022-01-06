import math
import argparse
from utils.markup import print_banner

parser = argparse.ArgumentParser(description = 'Calculate volume of a cylinder')
parser.add_argument('-r','--radius',type = int, help = "cylinder's radius")
parser.add_argument('-H','--height',type = int, help = "cylinder's height")
group = parser.add_mutually_exclusive_group()
group.add_argument('-q','--quiet',action = 'store_true',help ='print quiet') # when you call the action with it's tag store_true become true
group.add_argument('-v','--verbose',action = 'store_true',help = 'print verbose')
args = parser.parse_args()

def cylinder_volume(radius,height):
   return radius**2 * math.pi * height

if __name__ == "__main__":
   volume = cylinder_volume(args.radius,args.height)
   if args.quiet:
      print(volume)
   elif args.verbose:
      print("Volume of a Cylinder with radius %s and height %s is %s " % (args.radius,args.height,volume))
   else:
      print("Volume of Cylinder = %s" % volume)
