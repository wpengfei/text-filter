/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/sound/oss/emu10k1/cardwo.c
static void copy_block(void **dst, u32 str, u8 __user *src, u32 len)
{
copy_from_user((u8 *)dst[pg] + pgoff, src, k))
copy_from_user(dst[++pg], src + k, PAGE_SIZE))
copy_from_user(dst[++pg], src + k, len))
copy_from_user((u8 *)dst[pg] + pgoff, src, len);
}
