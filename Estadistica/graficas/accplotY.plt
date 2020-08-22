#
#	1. Go to directory: cd /home/name/such/and/such
#	2. Generate plot: gnuplot filename.plt
#	
#	Generación de aceleración inercial.
#	
#	Mustafa Ali Saba 2015.
#

set encoding utf8
set terminal postscript eps enhanced color font "Helvetica,12"
set output "accZ.eps"

set title "Experimento 2: Aceleración en z"
set ylabel "g (m/s^2)"
set xlabel "Tiempo (seg.)"

set grid

set yrange[-4:4]
set xrange[0:]
set zeroaxis

plot "EXP2_dataY.csv" using 1:4 with lines title "Acelaración en z" linestyle 2
