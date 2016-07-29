/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/s390/kvm/interrupt.c
static inline int copy_irq_from_user(struct kvm_s390_interrupt_info *inti,
{
get_user(inti->type, (u64 __user *)addr))
default:
copy_from_user(target, source, size))
}
