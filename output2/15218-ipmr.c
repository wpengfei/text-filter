/Users/wpf/Desktop/log/test/linux-2.6.9/net/ipv4/ipmr.c

int ip_mroute_setsockopt(struct sock *sk,int optname,char __user *optval,int optlen)
{
copy_from_user(&vif,optval,sizeof(vif)))
copy_from_user(&mfc,optval, sizeof(mfc)))
get_user(v,(int __user *)optval))
get_user(v,(int __user *)optval))
}
int ipmr_ioctl(struct sock *sk, int cmd, void __user *arg)
{
copy_from_user(&vr,arg,sizeof(vr)))
copy_from_user(&sr,arg,sizeof(sr)))
}
