'''
These actions can do just about anything with  the commnad-line arguments associated with them 
though most actions simply add an attribute to the object returned by parse_args().
The action keyword argument specifies how the command-line arguments should be handled
'''
import argparse

parser = argparse.ArgumentParser()
'''
store, the default action
'''
parser.add_argument('--foo',action = 'store')
# parser.parse_args('--foo 1'.split())
'''
store_const
'''
parser.add_argument('--faa',action = 'store_const',const = 42, help = 'store a constant')
'''
store_true, or store_false, this is special case of store_const, use for storing the values, true or false respectively
when you add argument into command line, it will be activate the value follow the action
'''
parser.add_argument('--bar',action = 'store_true')
parser.add_argument('--baz',action = 'store_false')
# parser.parse_args('--foo --bar'.split())
'''
append_const this stores a list, and appends the value specificed by the const keyword argument to the listy
'''
parser.add_argument('--str', dest = 'types', action = 'append_const', const = str)
parser.add_argument('--int', dest = 'types', action = 'append_const', const = int)
parser.parse_args('--str --int'.split())
'''
count, this counts the number of times a keyword argument occurs, for example, this is useful for increasing verbosity levels
default value is 0
'''
parser.add_argument('--verbose','-v',action = 'count',default = 0)
'''
You may also specify an abitrary action by passing an action subclas or other object the imnplements the same interface
The BooleanOptionalAction is avaiable in argparse and adds support for boolean actions such as --foo and --no-foo
python version > 3.6.x
'''

args = parser.parse_args()
print(args)
