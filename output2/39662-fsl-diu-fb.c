/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/video/fbdev/fsl-diu-fb.c
static int fsl_diu_ioctl(struct fb_info *info, unsigned int cmd,
{
case MFB_SET_CHROMA_KEY:
copy_from_user(&ck, buf, sizeof(ck)))
copy_from_user(data->gamma, buf, sizeof(data->gamma)))
}
