/Users/wpf/Desktop/log/test/linux-2.6.9/sound/oss/dmasound/dmasound_paula.c
static ssize_t ami_ct_s8(const u_char *userPtr, size_t userCount,
{
copy_from_user(p, userPtr, count))
get_user(*left++, userPtr++)
get_user(*right++, userPtr++))
}
static ssize_t funcname(const u_char *userPtr, size_t userCount,	\
{
get_user(data, userPtr++))			\
get_user(data, userPtr++))			\
get_user(data, userPtr++))			\
}
static ssize_t funcname(const u_char *userPtr, size_t userCount,	\
{
get_user(data, ((u_short *)userPtr)++))	\
get_user(data, ((u_short *)userPtr)++))	\
get_user(data, ((u_short *)userPtr)++))	\
}
