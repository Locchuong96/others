#! /bin/bash

declare -r pwdfile=/etc/passwd # define the pwdfile is read only variable

echo $pwdfile

# can not redefine the only read variable pwdfile=/etc/abc.txx
