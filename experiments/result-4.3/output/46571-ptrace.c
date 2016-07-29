/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/kernel/ptrace.c
int ptrace_request(struct task_struct *child, long request,
{
case PTRACE_SETREGSET: {
get_user(kiov.iov_base, &uiov->iov_base) ||
get_user(kiov.iov_len, &uiov->iov_len))
}
int compat_ptrace_request(struct task_struct *child, compat_long_t request,
{
case PTRACE_SETREGSET:
get_user(ptr, &uiov->iov_base) ||
get_user(len, &uiov->iov_len))
}
