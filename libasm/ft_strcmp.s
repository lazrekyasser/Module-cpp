section .text
	global _ft_strcmp
_ft_strcmp:
	mov rcx, 0
	mov rax, 0 ; ret
	mov rdx, 0
	jmp _tstNULL

_incriment:
	inc rcx
	jmp _tstNULL

_cmpr:
	mov dl, BYTE [rdi + rcx]
	cmp dl, BYTE [rsi + rcx]
	jne _return
	jmp _incriment

_tstNULL:
	cmp BYTE [rsi + rcx], 0
	je _return
	cmp BYTE [rdi + rcx], 0
	je _return
	jmp _cmpr

_return:
	mov al, BYTE [rdi + rcx]
	mov dl, BYTE [rsi + rcx]
	sub rax, rdx
	mov rdx, 0
	ret 
