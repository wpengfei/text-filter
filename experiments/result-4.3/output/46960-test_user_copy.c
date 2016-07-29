/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/lib/test_user_copy.c
static int __init test_user_copy_init(void)
{
copy_from_user(kmem, usermem, PAGE_SIZE),
copy_from_user failed");
get_user(value, (unsigned long __user *)usermem),
get_user failed");
copy_from_user(kmem, (char __user *)(kmem + PAGE_SIZE),
copy_from_user passed");
copy_from_user(bad_usermem, (char __user *)kmem,
copy_from_user passed");
get_user(value, (unsigned long __user *)kmem),
get_user passed");
}
