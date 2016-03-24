/Users/wpf/Desktop/log/test/linux-2.6.9/arch/parisc/hpux/sys_hpux.c
int hpux_statfs(const char *path, struct hpux_statfs *buf)
{
copy_from_user(kpath, (char *)path, len+1) ) {
copy_from_user kpath\n");
}
int hpux_utssys(char *ubuf, int n, int type)
{
copy_from_user(system_utsname.sysname, ubuf, len)) {
copy_from_user(system_utsname.release, ubuf, len)) {
}
int hpux_sysfs(int opcode, unsigned long arg1, unsigned long arg2)
{
copy_from_user(fsname, (char *)arg1, len+1) ) {
copy_from_user fsname\n");
}
