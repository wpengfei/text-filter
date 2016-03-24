/Users/wpf/Desktop/log/test/linux-2.6.9/net/wanrouter/wanmain.c
static int wanrouter_device_setup(struct wan_device *wandev,
{
copy_from_user(conf, u_conf, sizeof(wandev_conf_t))) {
copy_from_user(data, conf->data, conf->data_size)) {
}
