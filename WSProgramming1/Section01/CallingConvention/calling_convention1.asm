; Listing generated by Microsoft (R) Optimizing Compiler Version 19.33.31629.0 

	TITLE	C:\practice\CPPBasic\WSProgramming\Section01\CallingConvention\calling_convention1.obj
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB LIBCMT
INCLUDELIB OLDNAMES

PUBLIC	___local_stdio_printf_options
PUBLIC	__vfprintf_l
PUBLIC	_printf
PUBLIC	_add
PUBLIC	_main
EXTRN	___acrt_iob_func:PROC
EXTRN	___stdio_common_vfprintf:PROC
_DATA	SEGMENT
COMM	?_OptionsStorage@?1??__local_stdio_printf_options@@9@9:QWORD							; `__local_stdio_printf_options'::`2'::_OptionsStorage
_DATA	ENDS
_DATA	SEGMENT
$SG10094 DB	'result : %d', 0aH, 00H
_DATA	ENDS
; Function compile flags: /Odtp
; File C:\practice\CPPBasic\WSProgramming\Section01\CallingConvention\calling_convention1.c
_TEXT	SEGMENT
_ret$ = -4						; size = 4
_main	PROC

; 11   : {

	push	ebp
	mov	ebp, esp
	push	ecx

; 12   : 	int ret = 0;

	mov	DWORD PTR _ret$[ebp], 0

; 13   : 
; 14   : 	ret = add(1, 2);

	push	2
	push	1
	call	_add
	add	esp, 8
	mov	DWORD PTR _ret$[ebp], eax

; 15   : 
; 16   : 	printf("result : %d\n", ret);

	mov	eax, DWORD PTR _ret$[ebp]
	push	eax
	push	OFFSET $SG10094
	call	_printf
	add	esp, 8

; 17   : }

	xor	eax, eax
	mov	esp, ebp
	pop	ebp
	ret	0
_main	ENDP
_TEXT	ENDS
; Function compile flags: /Odtp
; File C:\practice\CPPBasic\WSProgramming\Section01\CallingConvention\calling_convention1.c
_TEXT	SEGMENT
_c$ = -4						; size = 4
_a$ = 8							; size = 4
_b$ = 12						; size = 4
_add	PROC

; 5    : {

	push	ebp
	mov	ebp, esp
	push	ecx

; 6    : 	int c = a + b;

	mov	eax, DWORD PTR _a$[ebp]
	add	eax, DWORD PTR _b$[ebp]
	mov	DWORD PTR _c$[ebp], eax

; 7    : 	return c;

	mov	eax, DWORD PTR _c$[ebp]

; 8    : }

	mov	esp, ebp
	pop	ebp
	ret	0
_add	ENDP
_TEXT	ENDS
; Function compile flags: /Odtp
; File C:\Program Files (x86)\Windows Kits\10\include\10.0.19041.0\ucrt\stdio.h
;	COMDAT _printf
_TEXT	SEGMENT
__Result$ = -8						; size = 4
__ArgList$ = -4						; size = 4
__Format$ = 8						; size = 4
_printf	PROC						; COMDAT

; 956  :     {

	push	ebp
	mov	ebp, esp
	sub	esp, 8

; 957  :         int _Result;
; 958  :         va_list _ArgList;
; 959  :         __crt_va_start(_ArgList, _Format);

	lea	eax, DWORD PTR __Format$[ebp+4]
	mov	DWORD PTR __ArgList$[ebp], eax

; 960  :         _Result = _vfprintf_l(stdout, _Format, NULL, _ArgList);

	mov	ecx, DWORD PTR __ArgList$[ebp]
	push	ecx
	push	0
	mov	edx, DWORD PTR __Format$[ebp]
	push	edx
	push	1
	call	___acrt_iob_func
	add	esp, 4
	push	eax
	call	__vfprintf_l
	add	esp, 16					; 00000010H
	mov	DWORD PTR __Result$[ebp], eax

; 961  :         __crt_va_end(_ArgList);

	mov	DWORD PTR __ArgList$[ebp], 0

; 962  :         return _Result;

	mov	eax, DWORD PTR __Result$[ebp]

; 963  :     }

	mov	esp, ebp
	pop	ebp
	ret	0
_printf	ENDP
_TEXT	ENDS
; Function compile flags: /Odtp
; File C:\Program Files (x86)\Windows Kits\10\include\10.0.19041.0\ucrt\stdio.h
;	COMDAT __vfprintf_l
_TEXT	SEGMENT
__Stream$ = 8						; size = 4
__Format$ = 12						; size = 4
__Locale$ = 16						; size = 4
__ArgList$ = 20						; size = 4
__vfprintf_l PROC					; COMDAT

; 644  :     {

	push	ebp
	mov	ebp, esp

; 645  :         return __stdio_common_vfprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _Stream, _Format, _Locale, _ArgList);

	mov	eax, DWORD PTR __ArgList$[ebp]
	push	eax
	mov	ecx, DWORD PTR __Locale$[ebp]
	push	ecx
	mov	edx, DWORD PTR __Format$[ebp]
	push	edx
	mov	eax, DWORD PTR __Stream$[ebp]
	push	eax
	call	___local_stdio_printf_options
	mov	ecx, DWORD PTR [eax+4]
	push	ecx
	mov	edx, DWORD PTR [eax]
	push	edx
	call	___stdio_common_vfprintf
	add	esp, 24					; 00000018H

; 646  :     }

	pop	ebp
	ret	0
__vfprintf_l ENDP
_TEXT	ENDS
; Function compile flags: /Odtp
; File C:\Program Files (x86)\Windows Kits\10\include\10.0.19041.0\ucrt\corecrt_stdio_config.h
;	COMDAT ___local_stdio_printf_options
_TEXT	SEGMENT
___local_stdio_printf_options PROC			; COMDAT

; 90   :     {

	push	ebp
	mov	ebp, esp

; 91   :         static unsigned __int64 _OptionsStorage;
; 92   :         return &_OptionsStorage;

	mov	eax, OFFSET ?_OptionsStorage@?1??__local_stdio_printf_options@@9@9 ; `__local_stdio_printf_options'::`2'::_OptionsStorage

; 93   :     }

	pop	ebp
	ret	0
___local_stdio_printf_options ENDP
_TEXT	ENDS
END
