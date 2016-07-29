/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/x86/kernel/fpu/signal.c
static inline int check_for_xstate(struct fxregs_state __user *buf,
{
copy_from_user(fx_sw, &buf->sw_reserved[0], sizeof(*fx_sw)))
case where the user just copied the legacy
get_user(magic2, (__u32 __user *)(fpstate + fx_sw->xstate_size))
}
static int __fpu__restore_sig(void __user *buf, void __user *buf_fx, int size)
{
copy_from_user(&fpu->state.xsave, buf_fx, state_size) ||
copy_from_user(&env, buf, sizeof(env))) {
}
