/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/x86/include/asm/pmem.h
static inline void arch_memcpy_to_pmem(void __pmem *dst, const void *src,
{
copy_from_user_inatomic_nocache() returns an error (page
copy_from_user_inatomic_nocache((void __force *) dst,
}
