.data
    MULTIPLICANDO: .asciiz "inserta el multiplicando: "
    MULTIPLICADOR: .asciiz "inserta el multiplicador: "
    VALOR_HI:       .asciiz ":"
    VALOR_LO:       .asciiz ": "
    LINEA:         .asciiz "\n"

.text
    main:

        li $v0, 4
        la $a0, MULTIPLICANDO
        syscall

        li $v0, 5
        syscall
        move $s0, $v0


        li $v0, 4
        la $a0, MULTIPLICADOR
        syscall

        li $v0, 5
        syscall
        move $s1, $v0


        move $v0, $s0
        move $v1, $s1
        jal multfac

        mfhi $s3
        mflo $s4



        li $v0, 4
        la $a0, VALOR_HI
        syscall

        li $v0, 1
        move $a0, $s3
        syscall

        li $v0, 4
        la $a0, LINEA
        syscall


        li $v0, 4
        la $a0, VALOR_LO
        syscall

        li $v0, 1
        move $a0, $s4
        syscall

        li $v0, 4
        la $a0, LINEA
        syscall


        j exit

    multfac:

        addi $t5, $zero, 0


        addi $t6, $zero, 32


        addi $t2, $zero, 0


        addi $t0, $zero, 0


        addi $t1, $v1, 0

        loop:

            andi $t4, $t0, 1


            andi $t3, $t1, 1


            xor $t7, $t3, $t2
            beq $t7, $zero, paso3

            paso2:
                beq $t2, $zero, subtrac
                add $t0, $t0, $v0
                j paso3

                subtrac:
                    sub $t0, $t0, $v0
                    j paso3

            paso3:

                andi $t4, $t0, 1


                andi $t3, $t1, 1


                sra $t0, $t0, 1


                srl $t1, $t1, 1



                add $t2, $t3, $zero


                sll $t4, $t4, 31
                add $t1, $t1, $t4

            paso4:

                addi $t5, $t5, 1
                slt $t8, $t5, $t6
                bne $t8, $zero, loop

        ultimo:
            mthi $t0
            mtlo $t1
            jr $ra

    exit:
