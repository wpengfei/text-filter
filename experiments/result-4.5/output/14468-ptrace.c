/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/mips/kernel/ptrace.c
int ptrace_setregs(struct task_struct *child, struct user_pt_regs __user *data)
{
get_user(regs->regs[i], (__s64 __user *)&data->regs[i]);
get_user(regs->lo, (__s64 __user *)&data->lo);
get_user(regs->hi, (__s64 __user *)&data->hi);
get_user(regs->cp0_epc, (__s64 __user *)&data->cp0_epc);
}
int ptrace_setfpregs(struct task_struct *child, __u32 __user *data)
{
get_user(fpr_val, i + (__u64 __user *)data);
get_user(value, data + 64);
}
int ptrace_set_watch_regs(struct task_struct *child,
{
get_user(lt[i], &addr->WATCH_STYLE.watchlo[i]);
get_user(ht[i], &addr->WATCH_STYLE.watchhi[i]);
}
