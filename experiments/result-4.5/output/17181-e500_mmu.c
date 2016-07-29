/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/powerpc/kvm/e500_mmu.c
int kvm_vcpu_ioctl_config_tlb(struct kvm_vcpu *vcpu,
{
copy_from_user(&params, (void __user *)(uintptr_t)cfg->params,
get_user_pages_fast(cfg->array, num_pages, 1, pages);
}
