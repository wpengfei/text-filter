/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/char/ds1620.c
static int
{
case CMD_SET_THERMOSTATE2:
get_user(therm.hi, uarg.i))
copy_from_user(&therm, uarg.therm, sizeof(therm)))
}
