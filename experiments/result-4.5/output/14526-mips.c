/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/mips/kvm/mips.c
static int kvm_mips_set_reg(struct kvm_vcpu *vcpu,
{
get_user(v, uaddr64) != 0)
get_user(v32, uaddr32) != 0)
copy_from_user(vs, uaddr, 16) ? -EFAULT : 0;
}
