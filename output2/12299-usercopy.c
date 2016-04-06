/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/metag/lib/usercopy.c
unsigned long __copy_user_zeroing(void *pdst, const void __user *psrc,
{
copy_from_user_1(dst, src, retn);
case - byte copy */
copy_from_user_1(dst, src, retn);
copy_from_user_2(dst, src, retn);
case - word copy */
copy_from_user_2(dst, src, retn);
copy_from_user_64bit_rapf_loop(dst, src, retn,
copy_from_user_8x64(dst, src, retn);
copy_from_user_32bit_rapf_loop(dst, src, retn,
copy_from_user_8x64(dst, src, retn);
copy_from_user_4(dst, src, retn);
case 1:
copy_from_user_1(dst, src, retn);
case 2:
copy_from_user_2(dst, src, retn);
case 3:
copy_from_user_3(dst, src, retn);
}
