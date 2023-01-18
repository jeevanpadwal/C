	.file	"add.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d%d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	call	___main
	movl	$0, 44(%esp)
	movl	$0, 40(%esp)
	movl	$0, 36(%esp)
	movl	$2, 20(%esp)
	movl	$7, 24(%esp)
	movl	$11, 28(%esp)
	movl	$15, 32(%esp)
	movl	$0, 44(%esp)
	jmp	L2
L6:
	movl	$0, 40(%esp)
	jmp	L3
L5:
	movl	44(%esp), %eax
	movl	20(%esp,%eax,4), %edx
	movl	40(%esp), %eax
	movl	20(%esp,%eax,4), %eax
	addl	%edx, %eax
	cmpl	$9, %eax
	jne	L4
	movl	40(%esp), %eax
	movl	%eax, 8(%esp)
	movl	44(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
L4:
	addl	$1, 40(%esp)
L3:
	cmpl	$3, 40(%esp)
	jle	L5
	addl	$1, 44(%esp)
L2:
	cmpl	$3, 44(%esp)
	jle	L6
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
