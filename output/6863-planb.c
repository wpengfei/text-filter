/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/media/video/planb.c
static int planb_ioctl(struct video_device *dev, unsigned int cmd, void *arg)
{
copy_from_user(&v, arg,sizeof(v)))
copy_from_user(&i, arg, sizeof(i)))
copy_from_user(&v, arg,sizeof(v)))
copy_from_user(&v, arg, sizeof(v)))
copy_from_user(&vp,arg,sizeof(vp)))
copy_from_user(&vw,arg,sizeof(vw)))
copy_from_user(&clip, vw.clips + i,
copy_from_user((void *)&i,arg,sizeof(int)))
copy_from_user((void *) &vm,(void *)arg,sizeof(vm)))
copy_from_user(&preg, arg, sizeof(preg)))
copy_from_user(&preg, arg, sizeof(preg)))
copy_from_user(&v, arg, sizeof(v)))
copy_from_user(&i, arg, sizeof(i)))
copy_from_user(&any, arg, sizeof(any)))
}
