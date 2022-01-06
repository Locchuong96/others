import argparse
import math
from utils.markup import print_banner

def parser():
   parser_ = argparse.ArgumentParser(description = "Calculate volume of cylinder")
   parser_.add_argument('-r',type = int, help = "cylinder's radius")
   parser_.add_argument('-H',type = int, help = "cylinder's height")
   args = parser_.parse_args()
   return args

def cylinder_volume(radius,height):
   assert type(radius) == int, f'radius must be int' # if the condition is false, print out error
   assert type(height) == int, f'height must be int' # if the condition is false, print out error
   return radius**2 * math.pi * height

def main(args):
   print_banner()
   print(cylinder_volume(args.r,args.H)) #print(cylinder_volume(args.radius,args.height)) 

if __name__ == "__main__":
   main(args=parser())
