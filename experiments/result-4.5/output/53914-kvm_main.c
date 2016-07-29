/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/virt/kvm/kvm_main.c
static int hva_to_pfn_slow(unsigned long addr, bool *async, bool write_fault,
{
get_user_page_nowait(current, current->mm,
get_user_pages_unlocked(current, current->mm, addr, 1,
get_user_pages_fast(addr, 1, 1, wpage);
}
static long kvm_vcpu_ioctl(struct file *filp,
{
case KVM_SET_SIGNAL_MASK: {
copy_from_user(&kvm_sigmask, argp,
copy_from_user(&sigset, sigmask_arg->sigset,
}
static long kvm_vcpu_compat_ioctl(struct file *filp,
{
case KVM_SET_SIGNAL_MASK: {
copy_from_user(&kvm_sigmask, argp,
copy_from_user(&csigset, sigmask_arg->sigset,
}
static long kvm_vm_ioctl(struct file *filp,
{
case KVM_SET_GSI_ROUTING: {
copy_from_user(&routing, argp, sizeof(routing)))
copy_from_user(entries, urouting->entries,
}
