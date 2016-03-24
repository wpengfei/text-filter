/Users/wpf/Desktop/log/test/linux-2.6.9/sound/oss/dmasound/trans_16.c
static ssize_t pmac_ct_law(const u_char __user *userPtr, size_t userCount,
{
get_user(data, userPtr++))
get_user(data, userPtr++))
}
static ssize_t pmac_ct_s8(const u_char __user *userPtr, size_t userCount,
{
get_user(data, userPtr++))
get_user(data, userPtr++))
}
static ssize_t pmac_ct_u8(const u_char __user *userPtr, size_t userCount,
{
get_user(data, userPtr++))
get_user(data, userPtr++))
}
static ssize_t pmac_ct_s16(const u_char __user *userPtr, size_t userCount,
{
get_user(data, up++))
copy_from_user(fp, userPtr, count * 4))
}
static ssize_t pmac_ct_u16(const u_char __user *userPtr, size_t userCount,
{
get_user(data, up++))
get_user(data, up++))
}
static ssize_t pmac_ctx_law(const u_char __user *userPtr, size_t userCount,
{
get_user(c, userPtr++))
get_user(c, userPtr++))
}
static ssize_t pmac_ctx_s8(const u_char __user *userPtr, size_t userCount,
{
get_user(c, userPtr++))
get_user(c, userPtr++))
}
static ssize_t pmac_ctx_u8(const u_char __user *userPtr, size_t userCount,
{
get_user(c, userPtr++))
get_user(c, userPtr++))
}
static ssize_t pmac_ctx_s16(const u_char __user *userPtr, size_t userCount,
{
get_user(data, up++))
get_user(c, up++))
}
static ssize_t pmac_ctx_u16(const u_char __user *userPtr, size_t userCount,
{
get_user(data, up++))
get_user(c, up++))
}
