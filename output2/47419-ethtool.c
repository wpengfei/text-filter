/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/net/core/ethtool.c
static int ethtool_set_features(struct net_device *dev, void __user *useraddr)
{
copy_from_user(&cmd, useraddr, sizeof(cmd)))
copy_from_user(features, useraddr, sizeof(features)))
}
static int ethtool_set_tunable(struct net_device *dev, void __user *useraddr)
{
copy_from_user(&tuna, useraddr, sizeof(tuna)))
copy_from_user(data, useraddr, tuna.len))
}
