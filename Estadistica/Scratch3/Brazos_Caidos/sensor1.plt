#
#	1. Go to directory: cd /home/name/such/and/such
#	2. Generate plot: gnuplot filename.plt
#	
#	BRAZOS CAIDOS.
#		El sujeto fue puesto de tal forma,
#		que sus brazos estaban completamente inmóviles
#		hacia abajo, sujetos al cuerpo (caídos).
#	
#	Mustafa Ali Saba, INAOE 2015.
#

set encoding utf8
set terminal postscript eps enhanced color font "Helvetica,12"
set output "sensor1.eps"

set title "Brazos Caídos: Sensor 1"
set ylabel "g (m/s^2)"
set xlabel "Tiempo (seg.)"

set grid

set yrange[-1.0:1.5]
set xrange[0.065:15.231]
#set zeroaxis

plot "sensor1.csv" using 1:2 with lines title "Acelaración en x", "" using 1:3 with lines title "Aceleración en y", "" using 1:4 with lines title "Aceleración en z"
