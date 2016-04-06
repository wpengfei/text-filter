/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/android/binder.c
static int binder_thread_write(struct binder_proc *proc,
{
get_user(cmd, (uint32_t __user *)ptr))
case BC_RELEASE:
get_user(target, (uint32_t __user *)ptr))
case BC_INCREFS_DONE:
get_user(node_ptr, (binder_uintptr_t __user *)ptr))
get_user(cookie, (binder_uintptr_t __user *)ptr))
case BC_REQUEST_DEATH_NOTIFICATION:
get_user(target, (uint32_t __user *)ptr))
get_user(cookie, (binder_uintptr_t __user *)ptr))
get_user(cookie, (binder_uintptr_t __user *)ptr))
}
