/Users/wpf/Desktop/log/test/linux-2.6.9/arch/i386/kernel/signal.c
asmlinkage int 
{
get_user(new_ka.sa.sa_handler, &act->sa_handler) ||
get_user(new_ka.sa.sa_restorer, &act->sa_restorer))
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(mask, &act->sa_mask);
}
static int
{
get_user(tmp, &sc->seg);				\
get_user(tmp, &sc->seg);				\
get_user(tmp, &sc->seg);				\
get_user(tmpflags, &sc->eflags);
get_user(buf, &sc->fpstate);
get_user(*peax, &sc->eax);
}
asmlinkage int sys_sigreturn(unsigned long __unused)
{
get_user(set.sig[0], &frame->sc.oldmask)
copy_from_user(&set.sig[1], &frame->extramask,
}	
