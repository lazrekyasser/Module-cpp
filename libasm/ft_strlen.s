section .text
	global _ft_strlen
_ft_strlen:
	mov rax, 0
	jmp _cmpr
_incriment:
	inc rax
_cmpr:
	cmp BYTE [rdi + rax], 0
	jne _incriment
_return:
	ret
