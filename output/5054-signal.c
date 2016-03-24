/Users/wpf/Desktop/log/test/linux-2.6.9/arch/x86_64/kernel/signal.c
static int
{
get_user(tmpflags, &sc->eflags);
get_user(buf, &sc->fpstate);
get_user(*prax, &sc->rax);
}
