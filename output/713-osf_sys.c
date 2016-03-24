/Users/wpf/Desktop/log/test/linux-2.6.9/arch/alpha/kernel/osf_sys.c
asmlinkage long
{
get_user(error, &args->set.nbytes))
get_user(error, &args->fset.nbytes))
get_user(min_buf_size_ptr, &args->get.min_buf_size);
get_user(min_buf_size_ptr, &args->fget.min_buf_size);
}
asmlinkage unsigned long
{
get_user(swcr, (unsigned long __user *)buffer))
get_user(exc, (unsigned long __user *)buffer))
get_user(v, 2*i + (unsigned int __user *)buffer))
get_user(w, 2*i + 1 + (unsigned int __user *)buffer))
}
static inline long
{
get_user(o->tv_sec, &i->tv_sec) |
get_user(o->tv_usec, &i->tv_usec)));
}
static inline long
{
get_user(o->it_interval.tv_sec, &i->it_interval.tv_sec) |
get_user(o->it_interval.tv_usec, &i->it_interval.tv_usec) |
get_user(o->it_value.tv_sec, &i->it_value.tv_sec) |
get_user(o->it_value.tv_usec, &i->it_value.tv_usec)));
}
asmlinkage int
{
get_user(sec, &tvp->tv_sec))
get_user(usec, &tvp->tv_usec)))
}
asmlinkage int
{
copy_from_user(&txc, txc_p, offsetof(struct timex32, time)) ||
copy_from_user(&txc.tick, &txc_p->tick, sizeof(struct timex32) - 
}
