section .text
	global _ft_strdup
	extern malloc
	extern _ft_strlen
	extern _ft_strcpy

_ft_strdup:
	mov rbx, rdi
	call _ft_strlen
	
	inc rax
	mov rdi, rax
	call malloc
	cmp rax, 0
	je _ret
	
	mov rdi, rax
	mov rsi, rbx
	call _ft_strcpy

_ret:
	ret 
