.data

.text


pot:

    addi $sp, $sp, -8
    sw $ra, 4($sp)  
    sw $a0, 0($sp)  
    

    beq $a1, $zero, exponenete_cero
    beq $a0, $zero, exponenete_cero
    bgez $a1, exponenete_positivo

exponenete_cero:
    li $v0, 1  
    lw $ra, 4($sp)  
    addi $sp, $sp, 8  
    jr $ra

manejarbase:
    li $v0, 0  
    lw $ra, 4($sp)  
    addi $sp, $sp, 8  
    jr $ra

exponenete_positivo:
    li $v0, 1  
    lw $t0, 0($sp)  

multiply_loop:
    mul $v0, $v0, $t0 
    addi $a1, $a1, -1  
    bnez $a1, multiply_loop  

    lw $ra, 4($sp) 
    addi $sp, $sp, 8  
    jr $ra  