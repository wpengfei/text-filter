/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/staging/android/ion/compat_ion.c
static int compat_get_ion_allocation_data(
{
get_user(s, &data32->len);
get_user(s, &data32->align);
get_user(u, &data32->heap_id_mask);
get_user(u, &data32->flags);
get_user(i, &data32->handle);
}
static int compat_put_ion_allocation_data(
{
get_user(s, &data->len);
get_user(s, &data->align);
get_user(u, &data->heap_id_mask);
get_user(u, &data->flags);
get_user(i, &data->handle);
}
static int compat_get_ion_custom_data(
{
get_user(cmd, &data32->cmd);
get_user(arg, &data32->arg);
}
