/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/virt/kvm/kvm_main.c
static long kvm_vcpu_ioctl(struct file *filp,
{
case KVM_RUN:
copy_from_user(&mp_state, argp, sizeof(mp_state)))
copy_from_user(&tr, argp, sizeof(tr)))
copy_from_user(&dbg, argp, sizeof(dbg)))
copy_from_user(&kvm_sigmask, argp,
}
static long kvm_vm_ioctl(struct file *filp,
{
case KVM_CREATE_VCPU:
copy_from_user(&kvm_userspace_mem, argp,
copy_from_user(&log, argp, sizeof(log)))
copy_from_user(&zone, argp, sizeof(zone)))
copy_from_user(&zone, argp, sizeof(zone)))
copy_from_user(&data, argp, sizeof(data)))
copy_from_user(&data, argp, sizeof(data)))
copy_from_user(&msi, argp, sizeof(msi)))
case KVM_IRQ_LINE_STATUS:
copy_from_user(&irq_event, argp, sizeof(irq_event)))
copy_from_user(&routing, argp, sizeof(routing)))
copy_from_user(&cd, argp, sizeof(cd)))
}
