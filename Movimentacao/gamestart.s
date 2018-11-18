.data
NOTAS: .word 

1,0,72,100,79

84,0,74,100,78

167,0,76,100,78

250,1,41,100,245

250,0,77,100,245

500,0,81,100,245

750,1,36,100,245

750,0,79,100,245

1000,0,82,100,245

1250,0,81,100,120

1250,1,41,100,245

1375,0,82,100,120

1500,0,84,100,120

1625,0,81,100,120

1750,1,43,100,120

1750,0,79,100,245

1875,1,45,100,120

2000,1,46,100,120

2000,0,82,100,245

2125,1,43,100,120

2250,0,81,100,120

2250,1,45,100,120

2375,1,43,100,120

2375,0,82,100,120

2500,1,41,100,120

2500,0,84,100,120

2625,1,45,100,120

2625,0,81,100,120

2750,0,82,100,120

2750,1,43,100,120

2875,1,41,100,120

2875,0,84,100,120

3000,1,40,100,120

3000,0,86,100,120

3125,1,43,100,120

3125,0,88,100,120

3250,1,41,100,245

3250,0,89,100,245

3500,1,36,100,245

3500,0,88,100,245

3750,1,41,100,245

3750,0,89,100,245



.text
	la s0,NOTAS		# define o endere�o das notas
	li t0,0			# zera o contador de notas
	li a2,24		# define o instrumento
	li s3,0			# tempo anterior
	li s5,0			# canal a ser tocado
	li s1,550		# numero de notas
	
LOOP:	beq t0,s1, FIM	# contador chegou no final? ent�o  v� para FIM
	lw s2,0(s0)		# le tempo inicial
	lw s4,4(s0)		# le canal
	bne s4,s5,PULA
	lw a0,8(s0)		# le o valor da nota
	lw a3,12(s0)		# le o volume
	lw a1,16(s0)		# le a duracao da nota

	li a7,31		# define a chamada de syscall
	ecall			# toca a nota
	beq s2,s3,PULA
	mv a0,a1		# passa a dura��o da nota para a pausa
	li a7,32		# define a chamada de syscal 
	ecall			# realiza uma pausa de $a0 ms
	mv s3,s2		# copia o tempo
PULA:	addi s0,s0,20		# incrementa para o endere�o da pr�xima nota
	addi t0,t0,1		# incrementa o contador de notas
	j LOOP			# volta ao loop
	
FIM:	
	li a7,10		# define o syscall Exit
	ecall			# exit

