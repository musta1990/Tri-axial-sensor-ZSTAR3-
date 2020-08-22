#
#	1. Go to directory: cd /home/name/such/and/such
#	2. Generate plot: gnuplot filename.plt
#	
#	Generación de aceleración inercial.
#	
#	Mustafa Ali Saba 2015.

set encoding utf8
set terminal postscript eps enhanced color font "Helvetica,12"
set output "accX.eps"

set title "Experimento 3: Aceleración en x"
set ylabel "g (m/s^2)"
set xlabel "Tiempo (seg.)"

set grid

set yrange[-4:4]
set xrange[0:]
set zeroaxis

plot "EXP3_dataZ.csv" using 1:2 with lines title "Acelaración en x" linestyle 3
