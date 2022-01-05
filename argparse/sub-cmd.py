# if you want to print out the arguments description: python3 exp1.py --help
# argparse follow the convention of  gnu (a Unix-like operating system), posix ( operating system interface )

import argparse
import pprint
from typing import Optional, Sequence

# define opsitive_int type
def positive_int(s: str) -> int:
   try:
      value = int(s)
   except ValueError:
         raise argparse.ArgumentTypeError(f'expected integer, got {s!r}')
   if value <= 0:
      raise argparse.ArgumentTypeError(f'expected positive interger, got {value}')
   return value

def main(argv: Optional[Sequence[str]] = None) -> int:
   parser = argparse.ArgumentParser() # This is the beginning of all argument parse
   """
   # positional
   # - help
   # parser.add_argument('filename',help = 'directory to target folder', required = False) # help define argument's usage
   # optional
   # - short vs long opts
   # - aliases
   # - defaults
   parser.add_argument('-c','--config','--jsonfile',
			default='config.json',
			required = False,
			help = "specify the config file, default = %(default)s") # %(default)s is your default define
   # types
   parser.add_argument('--nums',
			type = int, # the argument's type int,positive_int
			help = "int type argument",
			)
   # custom types
   parser.add_argument('--days', type = positive_int, help = 'positive custom type  argument')

   # count is an action return int value
   parser.add_argument('-v','--verbose',action='count',default = 0) # -vvvvv

   # boolean options is an action return true or false
   parser.add_argument('--force',action='store_true') #

   # append is an action append element in the list
   parser.add_argument('--log', action='append', default=[]) # log your argument into a list

   # choices is an action to constrict the value to a particular option
   parser.add_argument('--color', choices = ('auto','always','never'))
   """
   # sub-commands is a way to run custom sub-command, similar like git status, git checkout, git clone...
   subparsers = parser.add_subparsers(dest = 'command')
   subparsers.required = True
   # add your command
   status_parser = subparsers.add_parser('status')
   status_parser.add_argument('--force',action='store_true',help = "show status")

   checkout_parser = subparsers.add_parser('checkout')
   checkout_parser.add_argument('--verbose',action='count',default = 0,help = "show alot of stuff")

   args = parser.parse_args(argv) # retrive the arguments
   pprint.pprint(vars(args)) # print out the argument
   return 0

if __name__ == "__main__":
	exit(main())
