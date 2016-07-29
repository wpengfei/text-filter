/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/sound/oss/dmasound/dmasound_paula.c
static ssize_t ami_ct_s8(const u_char __user *userPtr, size_t userCount,
{
copy_from_user(p, userPtr, count))
get_user(*left++, userPtr++)
get_user(*right++, userPtr++))
}
static ssize_t funcname(const u_char __user *userPtr, size_t userCount,	\
{
get_user(data, userPtr++))			\
get_user(data, userPtr++))			\
get_user(data, userPtr++))			\
}
static ssize_t funcname(const u_char __user *userPtr, size_t userCount,	\
{
get_user(data, ptr++))			\
get_user(data, ptr++))			\
get_user(data, ptr++))			\
}
