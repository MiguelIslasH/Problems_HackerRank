#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumSwaps function below.
def minimumSwaps(arr):
    diccionario = {}
    swaps=0
    for i,numero in enumerate(arr):
        diccionario[numero] = i 

    for i in range(len(arr)):
        #4 3 1 2
        #0 1 2 3
        if(i+1 != arr[i]):
            swaps+=1
            aux = arr[i]
            diccionario[aux] = diccionario[i+1]
            arr[diccionario[i+1]] = aux
            diccionario[i+1] = i       
            arr[i] = i+1


    return swaps
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    res = minimumSwaps(arr)

    fptr.write(str(res) + '\n')

    fptr.close()
