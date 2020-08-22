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
set output "sensor2.eps"

set title "Volteado"
set ylabel "g (m/s^2)"
set xlabel "Tiempo (seg.)"

set grid

set yrange[-1.0:1.5]
set xrange[0.0:11.5]
set zeroaxis

plot "sensor2.csv" using 1:2 with lines title "Acelaración en x", "" using 1:3 with lines title "Aceleración en y", "" using 1:4 with lines title "Aceleración en z"
