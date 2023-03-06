	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_rect_area                      ; -- Begin function rect_area
	.p2align	2
_rect_area:                             ; @rect_area
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	ldr	w9, [x8]
	ldr	x8, [sp, #8]
	ldr	w10, [x8, #4]
	mul	w0, w9, w10
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64                     ; =64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48                    ; =48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	mov	w8, #0
	stur	wzr, [x29, #-4]
	stur	w0, [x29, #-8]
	stur	x1, [x29, #-16]
	add	x0, sp, #24                     ; =24
	mov	w9, #10
	str	w9, [sp, #24]
	mov	w9, #25
	str	w9, [sp, #28]
	str	w8, [sp, #16]                   ; 4-byte Folded Spill
	bl	_rect_area
	str	w0, [sp, #20]
	ldr	w8, [sp, #20]
                                        ; implicit-def: $x1
	mov	x1, x8
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	mov	x10, sp
	str	x1, [x10]
	bl	_printf
	ldr	w8, [sp, #16]                   ; 4-byte Folded Reload
	mov	x0, x8
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64                     ; =64
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"Area: %d\n"

.subsections_via_symbols
