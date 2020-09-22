section .text
	global _ft_strcpy
_ft_strcpy:
	mov rcx, 0
	mov rdx, 0
	cmp rsi, 0
	jz _return
	jmp _copy

_incriment:
	inc rcx
	cmp rsi, 0
	jz _return

_copy:
	mov dl, BYTE [rsi + rcx]
	mov BYTE [rdi + rcx], dl
	cmp dl, 0
	jnz _incriment

_return:
	mov rax, rdi
	ret
