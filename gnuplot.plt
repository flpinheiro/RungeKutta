reset
set key off
set yr [0:]
set title "massa em função do tempo"
set xl "t"
set yl "M(t)"
set term jpeg enhanced 10 lw 1 dl 1
set out 'jpg/GrowthCosBRand M_0=0.1 M=1 epsilon=0.1 omega=0.7 epsilon_2=0.9.jpg'
plot 'out/GrowthCosBRand M_0=0.1 M=1 epsilon=0.1 omega=0.7 epsilon_2=0.9.out' 
