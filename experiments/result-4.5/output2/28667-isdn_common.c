/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/isdn/i4l/isdn_common.c
static int
{
case IIOCSETPRF:
copy_from_user(dev->mdm.info[i].emu.profile, p,
copy_from_user(dev->mdm.info[i].emu.plmsn, p, ISDN_LMSNLEN))
copy_from_user(dev->mdm.info[i].emu.pmsn, p, ISDN_MSNLEN))
}
