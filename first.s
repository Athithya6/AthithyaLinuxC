	.file	"stack.c"
	.comm	stack,804,32
	.globl	top
	.data
	.align 4
	.type	top, @object
	.size	top, 4
top:
	.long	-1
	.comm	a,4,4
	.section	.rodata
	.align 4
.LC0:
	.string	"\nStack Overflow-no more elements can be added"
.LC1:
	.string	"\nThe added element is:%d"
	.text
	.globl	push
	.type	push, @function
push:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	a, %eax
	leal	-1(%eax), %edx
	movl	top, %eax
	cmpl	%eax, %edx
	jne	.L2
	subl	$12, %esp
	pushl	$.LC0
	call	printf
	addl	$16, %esp
	jmp	.L3
.L2:
	movl	top, %eax
	addl	$1, %eax
	movl	%eax, top
	movl	top, %eax
	movl	8(%ebp), %edx
	movl	%edx, stack(,%eax,4)
.L3:
	movl	top, %eax
	movl	stack(,%eax,4), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC1
	call	printf
	addl	$16, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	push, .-push
	.section	.rodata
	.align 4
.LC2:
	.string	"\nStack empty-no more elements to be deleted"
.LC3:
	.string	"\nThe deleted element is:%d"
	.text
	.globl	pop
	.type	pop, @function
pop:
.LFB1:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	top, %eax
	cmpl	$-1, %eax
	jne	.L5
	subl	$12, %esp
	pushl	$.LC2
	call	printf
	addl	$16, %esp
	jmp	.L6
.L5:
	movl	top, %eax
	movl	stack(,%eax,4), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC3
	call	printf
	addl	$16, %esp
.L6:
	movl	top, %eax
	subl	$1, %eax
	movl	%eax, top
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	pop, .-pop
	.section	.rodata
.LC4:
	.string	"Stack:"
.LC5:
	.string	"\n%d"
	.text
	.globl	print
	.type	print, @function
print:
.LFB2:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	subl	$12, %esp
	pushl	$.LC4
	call	puts
	addl	$16, %esp
	movl	$0, -12(%ebp)
	jmp	.L8
.L9:
	movl	-12(%ebp), %eax
	movl	stack(,%eax,4), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC5
	call	printf
	addl	$16, %esp
	addl	$1, -12(%ebp)
.L8:
	movl	top, %eax
	cmpl	%eax, -12(%ebp)
	jle	.L9
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE2:
	.size	print, .-print
	.section	.rodata
	.align 4
.LC6:
	.string	"Enter the stack size(MAX=200):"
.LC7:
	.string	"%d"
	.align 4
.LC8:
	.string	"\nSTACK OPERATIONS USING ARRAY:"
	.align 4
.LC9:
	.string	"\n1.Push \n2.Pop \n3.Print Stack \n4.Quit"
.LC10:
	.string	"\nEnter your choice:"
.LC11:
	.string	"Enter a value to be pushed:"
	.align 4
.LC12:
	.string	"Enter a valid choice: 1,2,3 or 4"
	.text
	.globl	main
	.type	main, @function
main:
.LFB3:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$20, %esp
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	subl	$12, %esp
	pushl	$.LC6
	call	puts
	addl	$16, %esp
	subl	$8, %esp
	pushl	$a
	pushl	$.LC7
	call	__isoc99_scanf
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC8
	call	puts
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC9
	call	printf
	addl	$16, %esp
.L18:
	subl	$12, %esp
	pushl	$.LC10
	call	puts
	addl	$16, %esp
	subl	$8, %esp
	leal	-20(%ebp), %eax
	pushl	%eax
	pushl	$.LC7
	call	__isoc99_scanf
	addl	$16, %esp
	movl	-20(%ebp), %eax
	cmpl	$2, %eax
	je	.L12
	cmpl	$2, %eax
	jg	.L13
	cmpl	$1, %eax
	je	.L14
	jmp	.L11
.L13:
	cmpl	$3, %eax
	je	.L15
	cmpl	$4, %eax
	je	.L16
	jmp	.L11
.L14:
	subl	$12, %esp
	pushl	$.LC11
	call	puts
	addl	$16, %esp
	subl	$8, %esp
	leal	-16(%ebp), %eax
	pushl	%eax
	pushl	$.LC7
	call	__isoc99_scanf
	addl	$16, %esp
	movl	-16(%ebp), %eax
	subl	$12, %esp
	pushl	%eax
	call	push
	addl	$16, %esp
	jmp	.L17
.L12:
	call	pop
	jmp	.L17
.L15:
	call	print
	jmp	.L17
.L16:
	subl	$12, %esp
	pushl	$0
	call	exit
.L11:
	subl	$12, %esp
	pushl	$.LC12
	call	printf
	addl	$16, %esp
.L17:
	movl	-20(%ebp), %eax
	cmpl	$4, %eax
	jne	.L18
	movl	$0, %eax
	movl	-12(%ebp), %edx
	xorl	%gs:20, %edx
	je	.L20
	call	__stack_chk_fail
.L20:
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
