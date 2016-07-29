/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/hwmon/dell-smm-hwmon.c
static int
{
case I8K_SET_FAN:
copy_from_user(&val, argp, sizeof(int)))
copy_from_user(&speed, argp + 1, sizeof(int)))
}
