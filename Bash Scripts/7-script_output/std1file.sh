#! /bin/bash

#ls +al >outerrror.txt # export the standard output not the standard error
ls +al > text.txt 2>&1 # export the error and the output too
