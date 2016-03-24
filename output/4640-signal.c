/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/solaris/signal.c
asmlinkage int solaris_sigaction(int sig, u32 act, u32 old)
{
get_user (tmp, &p->sa_flags))
get_user (tmp, &p->sa_handler) ||
copy_from_user (tmp2, &p->sa_mask, 2*sizeof(u32)))
}
