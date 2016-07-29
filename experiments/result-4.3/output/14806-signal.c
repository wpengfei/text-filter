/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/nios2/kernel/signal.c
static inline int rt_restore_ucontext(struct pt_regs *regs,
{
get_user(temp, &uc->uc_mcontext.version);
get_user(regs->r1, &gregs[0]);
get_user(regs->r2, &gregs[1]);
get_user(regs->r3, &gregs[2]);
get_user(regs->r4, &gregs[3]);
get_user(regs->r5, &gregs[4]);
get_user(regs->r6, &gregs[5]);
get_user(regs->r7, &gregs[6]);
get_user(regs->r8, &gregs[7]);
get_user(regs->r9, &gregs[8]);
get_user(regs->r10, &gregs[9]);
get_user(regs->r11, &gregs[10]);
get_user(regs->r12, &gregs[11]);
get_user(regs->r13, &gregs[12]);
get_user(regs->r14, &gregs[13]);
get_user(regs->r15, &gregs[14]);
get_user(sw->r16, &gregs[15]);
get_user(sw->r17, &gregs[16]);
get_user(sw->r18, &gregs[17]);
get_user(sw->r19, &gregs[18]);
get_user(sw->r20, &gregs[19]);
get_user(sw->r21, &gregs[20]);
get_user(sw->r22, &gregs[21]);
get_user(sw->r23, &gregs[22]);
get_user(sw->fp, &gregs[24]);  /* Verify, should this be
get_user(sw->gp, &gregs[25]);  /* Verify, should this be
get_user(temp, &gregs[26]);  /* Not really necessary no user
get_user(regs->ea, &gregs[27]);
get_user(regs->ra, &gregs[23]);
get_user(regs->sp, &gregs[28]);
}
