import math
import os
import random
import re
import sys
num = int(input())
mod = num % 2
if mod > 0:
    print("Weird")
else:
    if num>=2 and num<6 :
        print("Not Weird")
    elif num >=6 and num<=20 :
        print("Weird")
    else:
        print("Not Weird")
