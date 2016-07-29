/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/frv/kernel/signal.c
asmlinkage int sys_sigreturn(void)
{
get_user(set.sig[0], &frame->sc.sc_oldmask))
copy_from_user(&set.sig[1], &frame->extramask, sizeof(frame->extramask)))
}
