# if you want to print out the arguments description: python3 exp1.py --help
import argparse
import pprint
from typing import Optional, Sequence

def main(argv: Optional[Sequence[str]] = None) -> int:
   parser = argparse.ArgumentParser() # This is the beginning of all argument parse
   # positional
   # optional
   # short vs long opts
   # aliases
   # help
   # defaults
   # types
   # custom types
   # count
   # append
   # boolean options
   # choices
   # sub-commands

   args = parser.parse_args(argv) # retrive the arguments
   pprint.pprint(vars(args)) # print out the argument
   return 0

if __name__ == "__main__":
	exit(main())
