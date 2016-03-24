/Users/wpf/Desktop/log/test/linux-2.6.9/arch/ppc64/kernel/rtas.c
asmlinkage int ppc_rtas(struct rtas_args __user *uargs)
{
copy_from_user(&args, uargs, 3 * sizeof(u32)) != 0)
copy_from_user(args.args, uargs->args,
}
