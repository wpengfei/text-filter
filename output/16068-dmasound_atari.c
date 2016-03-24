/Users/wpf/Desktop/log/test/linux-2.6.9/sound/oss/dmasound/dmasound_atari.c
static ssize_t ata_ct_u8(const u_char *userPtr, size_t userCount,
{
get_user(data, userPtr++))
get_user(data, ((u_short *)userPtr)++))
}
static ssize_t ata_ct_s16be(const u_char *userPtr, size_t userCount,
{
get_user(data, ((u_short *)userPtr)++))
copy_from_user(p, userPtr, count))
}
static ssize_t ata_ct_u16be(const u_char *userPtr, size_t userCount,
{
get_user(data, ((u_short *)userPtr)++))
get_user(data, ((u_int *)userPtr)++))
}
static ssize_t ata_ct_s16le(const u_char *userPtr, size_t userCount,
{
get_user(data, ((u_short *)userPtr)++))
get_user(data, ((u_int *)userPtr)++))
}
static ssize_t ata_ct_u16le(const u_char *userPtr, size_t userCount,
{
get_user(data, ((u_short *)userPtr)++))
get_user(data, ((u_int *)userPtr)++))
}
static ssize_t ata_ctx_law(const u_char *userPtr, size_t userCount,
{
get_user(c, userPtr++))
get_user(c, userPtr++))
get_user(c, userPtr++))
}
static ssize_t ata_ctx_s8(const u_char *userPtr, size_t userCount,
{
get_user(data, userPtr++))
get_user(data, ((u_short *)userPtr)++))
}
static ssize_t ata_ctx_u8(const u_char *userPtr, size_t userCount,
{
get_user(data, userPtr++))
get_user(data, ((u_short *)userPtr)++))
}
static ssize_t ata_ctx_s16be(const u_char *userPtr, size_t userCount,
{
get_user(data, ((u_short *)userPtr)++))
get_user(data, ((u_int *)userPtr)++))
}
static ssize_t ata_ctx_u16be(const u_char *userPtr, size_t userCount,
{
get_user(data, ((u_short *)userPtr)++))
get_user(data, ((u_int *)userPtr)++))
}
static ssize_t ata_ctx_s16le(const u_char *userPtr, size_t userCount,
{
get_user(data, ((u_short *)userPtr)++))
get_user(data, ((u_int *)userPtr)++))
}
static ssize_t ata_ctx_u16le(const u_char *userPtr, size_t userCount,
{
get_user(data, ((u_short *)userPtr)++))
get_user(data, ((u_int *)userPtr)++))
}
