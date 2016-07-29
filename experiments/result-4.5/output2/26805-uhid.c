/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/hid/uhid.c
static int uhid_event_from_user(const char __user *buffer, size_t len,
{
copy_from_user(compat, buffer,
copy_from_user(event, buffer, min(len, sizeof(*event))))
}
