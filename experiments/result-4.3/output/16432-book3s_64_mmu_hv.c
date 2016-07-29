/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/powerpc/kvm/book3s_64_mmu_hv.c
static ssize_t kvm_htab_write(struct file *file, const char __user *buf,
{
copy_from_user(&hdr, buf, sizeof(hdr)))
get_user(hpte_v, lbuf) ||
get_user(hpte_r, lbuf + 1))
}
