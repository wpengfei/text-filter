/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/kernel/sched/core.c
static int sched_copy_attr(struct sched_attr __user *uattr,
{
get_user(size, &uattr->size);
get_user(val, addr);
copy_from_user(attr, uattr, size);
}
