import argparse
import math

'''
# positional arguments
# python3 prog6.py 2 4
parser = argparse.ArgumentParser(description = "Calculate cylinder volume")
parser.add_argument('radius',type = int, help = 'Radius of cylinder')
parser.add_argument('height',type = int,help = 'The height of cylinder')
args = parser.parse_args()
'''

# optional arguments
# python3 prog6.py -r 2 -H 4 or python3 prog6.py --radius 2 --help 4
parser = argparse.ArgumentParser(description = 'Calculate cylinder volume')
parser.add_argument('-r','--radius', type = int, help = 'Radius of cylinder')
parser.add_argument('-H','--height', type = int, help = 'The height of cylinder') # can not use -h, conflict with help short type
args = parser.parse_args()


def cylinder_volume(radius,height):
   vol = math.pi * radius**2 * height
   return vol

if __name__ == "__main__":
   print(cylinder_volume(args.radius,args.height)) # split the sign prefix 
