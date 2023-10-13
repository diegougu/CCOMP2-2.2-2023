.data
poly: .space 132  

.text


main:

    li $v0, 5
    syscall
    sw $v0, poly  


    move $t0, $v0       
    addi $t1, $zero, 4 
input:
    beqz $t0, end


    li $v0, 5
    syscall
    sw $v0, poly($t1)


    addi $t0, $t0, -1
    addi $t1, $t1, 4
    j input_loop

end:

    li $v0, 6
    syscall
    mov.s $f0, $f0  

    li $v0, 10
    syscall