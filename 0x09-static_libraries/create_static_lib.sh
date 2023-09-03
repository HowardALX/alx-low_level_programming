#!/bin/bash
c_files=$(ls *.c)
ar -cr liball.a $c_files
