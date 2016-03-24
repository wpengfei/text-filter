/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/ewrk3.c

static int ewrk3_ethtool_ioctl(struct net_device *dev, void __user *useraddr)
{
copy_from_user(&ecmd, useraddr, sizeof(ecmd)))
copy_from_user(&edata, useraddr, sizeof(edata)))
}
static int ewrk3_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
{
copy_from_user(tmp->addr, ioc->data, ETH_ALEN)) {
copy_from_user(tmp->addr, ioc->data, ETH_ALEN * ioc->len)) {
copy_from_user(tmp->addr, ioc->data, 1)) {
copy_from_user(tmp->addr, ioc->data, EEPROM_MAX)) {
copy_from_user(tmp->addr, ioc->data, ETH_ALEN * ioc->len)) {
copy_from_user(tmp->addr, ioc->data, 1)) {
copy_from_user(tmp->addr, ioc->data, EEPROM_MAX)) {
copy_from_user(tmp->addr, ioc->data, 1)) {
copy_from_user(tmp->addr, ioc->data, EEPROM_MAX)) {
}
