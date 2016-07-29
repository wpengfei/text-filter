/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/android/binder.c
static void binder_transaction(struct binder_proc *proc,
{
copy_from_user(t->buffer->data, (const void __user *)(uintptr_t)
copy_from_user(offp, (const void __user *)(uintptr_t)
}
static int binder_thread_write(struct binder_proc *proc,
{
get_user(cmd, (uint32_t __user *)ptr))
case BC_DECREFS: {
get_user(target, (uint32_t __user *)ptr))
case BC_ACQUIRE_DONE: {
get_user(node_ptr, (binder_uintptr_t __user *)ptr))
get_user(cookie, (binder_uintptr_t __user *)ptr))
case BC_FREE_BUFFER: {
get_user(data_ptr, (binder_uintptr_t __user *)ptr))
case BC_REPLY: {
copy_from_user(&tr, ptr, sizeof(tr)))
case BC_CLEAR_DEATH_NOTIFICATION: {
get_user(target, (uint32_t __user *)ptr))
get_user(cookie, (binder_uintptr_t __user *)ptr))
case BC_DEAD_BINDER_DONE: {
get_user(cookie, (binder_uintptr_t __user *)ptr))
}
