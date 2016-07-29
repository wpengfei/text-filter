/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/mips/include/asm/compat-signal.h
static inline int __copy_conv_sigset_from_user(sigset_t *d,
{
get_user(u->c.sig[1], &s->sig[0]);
get_user(u->c.sig[0], &s->sig[1]);
get_user(u->c.sig[3], &s->sig[2]);
get_user(u->c.sig[2], &s->sig[3]);
get_user(u->c.sig[0], &s->sig[0]);
get_user(u->c.sig[1], &s->sig[1]);
get_user(u->c.sig[2], &s->sig[2]);
get_user(u->c.sig[3], &s->sig[3]);
}
