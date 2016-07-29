/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/fs/exec.c
static const char __user *get_user_arg_ptr(struct user_arg_ptr argv, int nr)
{
get_user(compat, argv.ptr.compat + nr))
get_user(native, argv.ptr.native + nr))
}
static int copy_strings(int argc, struct user_arg_ptr argv,
{
get_user_arg_ptr(argv, argc);
copy_from_user(kaddr+offset, str, bytes_to_copy)) {
}
