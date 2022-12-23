; call_argument1.asm
.model flat
public _asm_main
.code
_asm_main:

	call	_add
	ret

_add:
	mov		eax, 100
	ret

end