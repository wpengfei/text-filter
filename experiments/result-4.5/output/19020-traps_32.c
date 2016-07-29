/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/sh/kernel/traps_32.c
asmlinkage void do_address_error(struct pt_regs *regs,
{
copy_from_user(&instruction, (insn_size_t *)(regs->pc & ~1),
copy_from_user(&instruction, (void __user *)(regs->pc),
}
asmlinkage void do_illegal_slot_inst(void)
{
get_user(inst, (unsigned short *)regs->pc + 1);
get_user(inst, (unsigned short *)regs->pc);
}
