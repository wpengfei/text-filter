/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/sh/kernel/traps_64.c
static int read_opcode(reg_size_t pc, insn_size_t *result_opcode, int from_user_mode)
{
get_user_error;
get_user_error = -EFAULT;
get_user(opcode, (insn_size_t *)aligned_pc);
get_user_error;
}
void do_reserved_inst(unsigned long error_code, struct pt_regs *regs)
{
get_user_error;
get_user_error = -EFAULT;
get_user(opcode, (insn_size_t *)aligned_pc);
get_user_error < 0) {
}
