/Users/wpf/Desktop/log/test/linux-2.6.9/arch/ppc/kernel/ptrace.c
static inline int set_vrregs(struct task_struct *task, unsigned long __user *data)
{
get_user(task->thread.vr[i].u[j], data))
get_user(task->thread.vscr.u[i], data))
get_user(task->thread.vrsave, data))
}
static inline int set_evrregs(struct task_struct *task, unsigned long *data)
{
get_user(task->thread.spefscr, &data[34]))
get_user(task->thread.evr[i], data))
get_user64(task->thread.acc, (unsigned long long*)data))
}
