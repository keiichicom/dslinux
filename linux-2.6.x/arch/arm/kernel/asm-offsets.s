	.file	"asm-offsets.c"
	.text
	.align	2
	.global	main
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	@ lr needed for prologue
	
->TSK_ACTIVE_MM #124 offsetof(struct task_struct, active_mm)
	
->
	
->TI_FLAGS #0 offsetof(struct thread_info, flags)
	
->TI_PREEMPT #4 offsetof(struct thread_info, preempt_count)
	
->TI_ADDR_LIMIT #8 offsetof(struct thread_info, addr_limit)
	
->TI_TASK #12 offsetof(struct thread_info, task)
	
->TI_EXEC_DOMAIN #16 offsetof(struct thread_info, exec_domain)
	
->TI_CPU #20 offsetof(struct thread_info, cpu)
	
->TI_CPU_DOMAIN #24 offsetof(struct thread_info, cpu_domain)
	
->TI_CPU_SAVE #28 offsetof(struct thread_info, cpu_context)
	
->TI_USED_CP #76 offsetof(struct thread_info, used_cp)
	
->TI_TP_VALUE #92 offsetof(struct thread_info, tp_value)
	
->TI_FPSTATE #96 offsetof(struct thread_info, fpstate)
	
->TI_VFPSTATE #236 offsetof(struct thread_info, vfpstate)
	
->TI_IWMMXT_STATE #96 (offsetof(struct thread_info, fpstate)+4)&~7
	
->
	
->S_R0 #0 offsetof(struct pt_regs, ARM_r0)
	
->S_R1 #4 offsetof(struct pt_regs, ARM_r1)
	
->S_R2 #8 offsetof(struct pt_regs, ARM_r2)
	
->S_R3 #12 offsetof(struct pt_regs, ARM_r3)
	
->S_R4 #16 offsetof(struct pt_regs, ARM_r4)
	
->S_R5 #20 offsetof(struct pt_regs, ARM_r5)
	
->S_R6 #24 offsetof(struct pt_regs, ARM_r6)
	
->S_R7 #28 offsetof(struct pt_regs, ARM_r7)
	
->S_R8 #32 offsetof(struct pt_regs, ARM_r8)
	
->S_R9 #36 offsetof(struct pt_regs, ARM_r9)
	
->S_R10 #40 offsetof(struct pt_regs, ARM_r10)
	
->S_FP #44 offsetof(struct pt_regs, ARM_fp)
	
->S_IP #48 offsetof(struct pt_regs, ARM_ip)
	
->S_SP #52 offsetof(struct pt_regs, ARM_sp)
	
->S_LR #56 offsetof(struct pt_regs, ARM_lr)
	
->S_PC #60 offsetof(struct pt_regs, ARM_pc)
	
->S_PSR #64 offsetof(struct pt_regs, ARM_cpsr)
	
->S_OLD_R0 #68 offsetof(struct pt_regs, ARM_ORIG_r0)
	
->S_FRAME_SIZE #72 sizeof(struct pt_regs)
	
->
	
->VMA_VM_MM #0 offsetof(struct vm_area_struct, vm_mm)
	
->VMA_VM_FLAGS #20 offsetof(struct vm_area_struct, vm_flags)
	
->
	
->VM_EXEC #4 VM_EXEC
	
->
	
->PAGE_SZ #4096 PAGE_SIZE
	
->VIRT_OFFSET #33554432 PAGE_OFFSET
	
->
	
->SYS_ERROR0 #10420224 0x9f0000
	
->
	
->SIZEOF_MACHINE_DESC #48 sizeof(struct machine_desc)
	mov	r0, #0
	bx	lr
	.size	main, .-main
	.ident	"GCC: (GNU) 4.0.4"
