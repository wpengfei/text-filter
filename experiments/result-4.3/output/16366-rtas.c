/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/powerpc/kernel/rtas.c
asmlinkage int ppc_rtas(struct rtas_args __user *uargs)
{
copy_from_user(&args, uargs, 3 * sizeof(u32)) != 0)
copy_from_user(args.args, uargs->args,
}
