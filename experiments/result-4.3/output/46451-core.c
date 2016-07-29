/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/kernel/events/core.c
static int perf_copy_attr(struct perf_event_attr __user *uattr,
{
get_user(size, &uattr->size);
get_user(val, addr);
copy_from_user(attr, uattr, size);
}
