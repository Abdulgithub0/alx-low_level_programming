#!/bin/python3
import ctypes
converter = ctypes.CDLL('libdynamic.so')
chara = input("Enter a character: ")
print("char 'A' {} and char 'a' is {}".format(converter._isupper(chara), converter._isupper(chara)))
