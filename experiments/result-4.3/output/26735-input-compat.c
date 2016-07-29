/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/input/input-compat.c
int input_event_from_user(const char __user *buffer,
{
copy_from_user(&compat_event, buffer,
copy_from_user(event, buffer, sizeof(struct input_event)))
}
int input_ff_effect_from_user(const char __user *buffer, size_t size,
{
copy_from_user(compat_effect, buffer,
copy_from_user(effect, buffer, sizeof(struct ff_effect)))
}
