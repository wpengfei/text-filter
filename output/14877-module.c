/Users/wpf/Desktop/log/test/linux-2.6.9/kernel/module.c
static struct module *load_module(void __user *umod,
{
copy_from_user(hdr, umod, len) != 0) {
copy_from_user(args, uargs, arglen) != 0) {
}
