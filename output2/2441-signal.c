/Users/wpf/Desktop/log/test/linux-2.6.9/arch/m68knommu/kernel/signal.c

static inline int rt_restore_fpu_state(struct ucontext *uc)
{
copy_from_user(current->thread.fpcntl,
copy_from_user(current->thread.fp,
}
