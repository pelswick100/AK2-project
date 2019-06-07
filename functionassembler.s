.data


.global dodawanie
.global odejmowanie
.global mnozenie
.global dzielenie
.global sinus
.global cosinus
.global tangens
.global cotangens
.global xdoy
.global sqrt
.global log_2

.type dodawanie, @function
dodawanie:
    push %rbp
    mov %rsp, %rbp

    sub $8, %rsp
    movsd %xmm0, (%rsp)
    fldl (%rsp)
    movsd %xmm1, (%rsp)
    fldl (%rsp)
    fwait
    fadd %st(1), %st
    fstpl (%rsp)
    movsd (%rsp), %xmm0
    fstpl (%rsp)

    mov %rbp, %rsp
    pop %rbp
ret


.type odejmowanie, @function
odejmowanie:
    push %rbp
    mov %rsp, %rbp

    sub $8, %rsp
    movsd %xmm0, (%rsp)
    fldl (%rsp)
    movsd %xmm1, (%rsp)
    fldl (%rsp)
    fwait
    fsub %st(1), %st
    fstpl (%rsp)
    movsd (%rsp), %xmm0
    fstpl (%rsp)

    mov %rbp, %rsp
    pop %rbp
ret


.type mnozenie, @function
mnozenie:
    push %rbp
    mov %rsp, %rbp

    sub $8, %rsp
    movsd %xmm0, (%rsp)
    fldl (%rsp)
    movsd %xmm1, (%rsp)
    fldl (%rsp)
    fwait
    fmul %st(1), %st
    fstpl (%rsp)
    movsd (%rsp), %xmm0
    fstpl (%rsp)

    mov %rbp, %rsp
    pop %rbp
ret


.type dzielenie, @function
dzielenie:
    push %rbp
    mov %rsp, %rbp

    sub $8, %rsp
    movsd %xmm0, (%rsp)
    fldl (%rsp)
    movsd %xmm1, (%rsp)
    fldl (%rsp)
    fwait
    fdiv %st(1), %st
    fstpl (%rsp)
    movsd (%rsp), %xmm0
    fstpl (%rsp)

    mov %rbp, %rsp
    pop %rbp
ret


.type sinus, @function
sinus:
    push %rbp
    mov %rsp, %rbp

    sub $8, %rsp
    movsd %xmm0, (%rsp)
    fldl (%rsp)
    fsin
    fstpl (%rsp)
    movsd (%rsp), %xmm0


    mov %rbp, %rsp
    pop %rbp
ret


.type cosinus, @function
cosinus:
    push %rbp
    mov %rsp, %rbp

    sub $8, %rsp
    movsd %xmm0, (%rsp)
    fldl (%rsp)
    fcos
    fstpl (%rsp)
    movsd (%rsp), %xmm0

    mov %rbp, %rsp
    pop %rbp
ret


.type tangens, @function
tangens:
    push %rbp
    mov %rsp, %rbp

    sub $8, %rsp
    movsd %xmm0, (%rsp)
    fldl (%rsp)
    fldl (%rsp)
    fcos
    fxch %st(1)
    fsin
    fdiv %st(1), %st(0)
    fstpl (%rsp)
    movsd (%rsp), %xmm0
    fstpl (%rsp)

    mov %rbp, %rsp
    pop %rbp
ret


.type cotangens, @function
cotangens:
    push %rbp
    mov %rsp, %rbp

    sub $8, %rsp
    movsd %xmm0, (%rsp)
    fldl (%rsp)
    fldl (%rsp)
    fsin
    fxch %st(1)
    fcos
    fdiv %st(1), %st(0)
    fstpl (%rsp)
    movsd (%rsp), %xmm0
    fstpl (%rsp)

    mov %rbp, %rsp
    pop %rbp
ret


.type xdoy, @function
xdoy:
    push %rbp
    mov %rsp, %rbp

    sub $8, %rsp
    movsd %xmm0, (%rsp)
    fldl (%rsp)
    movsd %xmm1, (%rsp)
    fldl (%rsp)
    fwait
    fscale
    fstpl (%rsp)
    movsd (%rsp), %xmm0
    fstpl (%rsp)

    mov %rbp, %rsp
    pop %rbp
ret


.type sqrt, @function
sqrt:
    push %rbp
    mov %rsp, %rbp

    sub $8, %rsp
    movsd %xmm0, (%rsp)
    fldl (%rsp)
    fsqrt
    fstpl (%rsp)
    movsd (%rsp), %xmm0


    mov %rbp, %rsp
    pop %rbp
ret


.type log_2, @function
log_2:
    push %rbp
    mov %rsp, %rbp

    sub $8, %rsp
    movsd %xmm0, (%rsp)
    fldl (%rsp)
    movsd %xmm1, (%rsp)
    fldl (%rsp)
    fwait
    fyl2x
    fstpl (%rsp)
    movsd (%rsp), %xmm0
    fstpl (%rsp)

    mov %rbp, %rsp
    pop %rbp
ret
