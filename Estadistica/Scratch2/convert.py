# -*- coding:utf8 -*-

import csv

csvfile = open('acc_x2.csv')
csvnew = open('acc_x2_Out.csv', 'w')

for line in csvfile:
	# Remplaza la coma [,] por el punto [.]
	dotCommaToNone = line.replace(';',' ')
	csvnew.write(dotCommaToNone)
	print(dotCommaToNone)
