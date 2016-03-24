/Users/wpf/Desktop/log/test/linux-2.6.9/arch/x86_64/kernel/traps.c
void handle_BUG(struct pt_regs *regs)
{
copy_from_user(&f, (struct bug_frame *) regs->rip, 
get_user(tmp, f.filename))
} 
