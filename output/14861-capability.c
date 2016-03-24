/Users/wpf/Desktop/log/test/linux-2.6.9/kernel/capability.c
asmlinkage long sys_capget(cap_user_header_t header, cap_user_data_t dataptr)
{
get_user(version, &header->version))
get_user(pid, &header->pid))
}
asmlinkage long sys_capset(cap_user_header_t header, const cap_user_data_t data)
{
get_user(version, &header->version))
get_user(pid, &header->pid))
copy_from_user(&effective, &data->effective, sizeof(effective)) ||
copy_from_user(&inheritable, &data->inheritable, sizeof(inheritable)) ||
copy_from_user(&permitted, &data->permitted, sizeof(permitted)))
}
