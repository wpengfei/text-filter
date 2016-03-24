/Users/wpf/Desktop/log/test/linux-2.6.9/sound/pci/emu10k1/emufx.c
static int snd_emu10k1_verify_controls(emu10k1_t *emu, emu10k1_fx8010_code_t *icode)
{
copy_from_user(&id, _id, sizeof(id)))
copy_from_user(&gctl, _gctl, sizeof(gctl)))
copy_from_user(&gctl, _gctl, sizeof(gctl)))
}
static int snd_emu10k1_fx8010_ioctl(snd_hwdep_t * hw, struct file *file, unsigned int cmd, unsigned long arg)
{
copy_from_user(icode, argp, sizeof(*icode))) {
copy_from_user(icode, argp, sizeof(*icode))) {
copy_from_user(ipcm, argp, sizeof(*ipcm))) {
copy_from_user(ipcm, argp, sizeof(*ipcm))) {
get_user(addr, (unsigned int __user *)argp))
get_user(addr, (unsigned int __user *)argp))
}
