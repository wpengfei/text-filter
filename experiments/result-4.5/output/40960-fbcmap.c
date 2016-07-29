/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/video/fbdev/core/fbcmap.c
int fb_set_user_cmap(struct fb_cmap_user *cmap, struct fb_info *info)
{
copy_from_user(umap.red, cmap->red, size) ||
copy_from_user(umap.green, cmap->green, size) ||
copy_from_user(umap.blue, cmap->blue, size) ||
copy_from_user(umap.transp, cmap->transp, size))) {
}
