/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/kernel/unaligned.c
static unsigned long fetch_reg(unsigned int reg, struct pt_regs *regs)
{
get_user(value, &win32->locals[reg - 16]);
get_user(value, &win->locals[reg - 16]);
}
int handle_ldf_stq(u32 insn, struct pt_regs *regs)
{
get_user (data[0], (u32 __user *) addr);
get_user (data[i], (u32 __user *)(addr + 4*i));
}
void handle_lddfmna(struct pt_regs *regs, unsigned long sfar, unsigned long sfsr)
{
get_user(insn, (u32 __user *) pc) != -EFAULT) {
get_user(first, (u32 __user *)sfar) ||
get_user(second, (u32 __user *)(sfar + 4))) {
}
