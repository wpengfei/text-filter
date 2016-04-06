/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/arch/ppc/kernel/ptrace.c
static inline int set_vrregs(struct task_struct *task, unsigned long __user *data)
{
get_user(task->thread.vr[i].u[j], data))
get_user(task->thread.vscr.u[i], data))
get_user(task->thread.vrsave, data))
}
