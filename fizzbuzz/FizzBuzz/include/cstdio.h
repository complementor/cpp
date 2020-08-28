.LC0:
        .string "%zu\n"
        .string ""
        .string ""
        .string ""
        .string "Fizz\n"
        .string ""
        .string ""
        .string "Buzz\n"
        .string ""
        .string ""
        .string "FizzBuzz\n"
main:
        push    r12
        mov     r12d, 1
        push    rbx
        mov     ebx, 15
        push    rcx
.L2:
        mov     rax, r12
        xor     edx, edx
        mov     edi, 19142723
        mov     rsi, r12
        div     rbx
        inc     r12
        xor     eax, eax
        lea     rcx, [rdx+rdx]
        sar     edi, cl
        sal     rdi, 3
        and     edi, 24
        add     rdi, OFFSET FLAT:.LC0
        call    printf
        cmp     r12, 50
        jne     .L2
        pop     rdx
        xor     eax, eax
        pop     rbx
        pop     r12
        ret
