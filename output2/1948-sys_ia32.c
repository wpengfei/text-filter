/Users/wpf/Desktop/log/test/linux-2.6.9/arch/ia64/ia32/sys_ia32.c

static void
{
copy_from_user(&ptp->f8, reg, sizeof(*reg));
copy_from_user(&ptp->f9, reg, sizeof(*reg));
copy_from_user(&ptp->f10, reg, sizeof(*reg));
copy_from_user(&ptp->f11, reg, sizeof(*reg));
copy_from_user(&swp->f12 + (regno - 4), reg, sizeof(*reg));
copy_from_user(&ptp->f9, reg, sizeof(*reg));
copy_from_user(&ptp->f10, reg, sizeof(*reg));
copy_from_user(&ptp->f11, reg, sizeof(*reg));
copy_from_user(&swp->f12 + (regno - 4), reg, sizeof(*reg));
copy_from_user(&ptp->f10, reg, sizeof(*reg));
copy_from_user(&ptp->f11, reg, sizeof(*reg));
copy_from_user(&swp->f12 + (regno - 4), reg, sizeof(*reg));
copy_from_user(&ptp->f11, reg, sizeof(*reg));
copy_from_user(&swp->f12 + (regno - 4), reg, sizeof(*reg));
}
static int
{
get_user(num32, (unsigned int __user *)&save->cwd);
get_user(fsrlo, (unsigned int __user *)&save->swd);
get_user(fsrhi, (unsigned int __user *)&save->twd);
get_user(num32, (unsigned int __user *)&save->fip);
get_user(num32, (unsigned int __user *)&save->foo);
get_user(fsrlo, (unsigned int __user *)&save->swd);
get_user(fsrhi, (unsigned int __user *)&save->twd);
get_user(num32, (unsigned int __user *)&save->fip);
get_user(num32, (unsigned int __user *)&save->foo);
get_user(fsrhi, (unsigned int __user *)&save->twd);
get_user(num32, (unsigned int __user *)&save->fip);
get_user(num32, (unsigned int __user *)&save->foo);
get_user(num32, (unsigned int __user *)&save->fip);
get_user(num32, (unsigned int __user *)&save->foo);
}
static int
{
get_user(num32, (unsigned int __user *)&save->cwd);
get_user(fsrlo, (unsigned int __user *)&save->swd);
get_user(fsrhi, (unsigned int __user *)&save->twd);
get_user(num32, (unsigned int __user *)&save->fip);
get_user(num32, (unsigned int __user *)&save->foo);
get_user(mxcsr, (unsigned int __user *)&save->mxcsr);
get_user(fsrlo, (unsigned int __user *)&save->swd);
get_user(fsrhi, (unsigned int __user *)&save->twd);
get_user(num32, (unsigned int __user *)&save->fip);
get_user(num32, (unsigned int __user *)&save->foo);
get_user(mxcsr, (unsigned int __user *)&save->mxcsr);
get_user(fsrhi, (unsigned int __user *)&save->twd);
get_user(num32, (unsigned int __user *)&save->fip);
get_user(num32, (unsigned int __user *)&save->foo);
get_user(mxcsr, (unsigned int __user *)&save->mxcsr);
get_user(num32, (unsigned int __user *)&save->fip);
get_user(num32, (unsigned int __user *)&save->foo);
get_user(mxcsr, (unsigned int __user *)&save->mxcsr);
get_user(num32, (unsigned int __user *)&save->foo);
get_user(mxcsr, (unsigned int __user *)&save->mxcsr);
}
