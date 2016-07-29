/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/gpu/drm/tegra/drm.c
static int host1x_reloc_copy_from_user(struct host1x_reloc *dest,
{
get_user(cmdbuf, &src->cmdbuf.handle);
get_user(dest->cmdbuf.offset, &src->cmdbuf.offset);
get_user(target, &src->target.handle);
get_user(dest->target.offset, &src->target.offset);
get_user(dest->shift, &src->shift);
}
int tegra_drm_submit(struct tegra_drm_context *context,
{
copy_from_user(&cmdbuf, cmdbufs, sizeof(cmdbuf))) {
copy_from_user(&job->relocarray[num_relocs],
copy_from_user(job->waitchk, waitchks,
copy_from_user(&syncpt, (void __user *)(uintptr_t)args->syncpts,
}
