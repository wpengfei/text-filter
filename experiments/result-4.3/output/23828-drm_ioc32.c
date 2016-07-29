/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/gpu/drm/drm_ioc32.c
static int compat_drm_version(struct file *file, unsigned int cmd,
{
copy_from_user(&v32, (void __user *)arg, sizeof(v32)))
get_user(v32.version_major, &version->version_major)
get_user(v32.version_minor, &version->version_minor)
get_user(v32.version_patchlevel, &version->version_patchlevel)
get_user(v32.name_len, &version->name_len)
get_user(v32.date_len, &version->date_len)
get_user(v32.desc_len, &version->desc_len))
}
static int compat_drm_getunique(struct file *file, unsigned int cmd,
{
copy_from_user(&uq32, (void __user *)arg, sizeof(uq32)))
get_user(uq32.unique_len, &u->unique_len))
}
static int compat_drm_getmap(struct file *file, unsigned int cmd,
{
get_user(idx, &argp->offset))
get_user(m32.offset, &map->offset)
get_user(m32.size, &map->size)
get_user(m32.type, &map->type)
get_user(m32.flags, &map->flags)
get_user(handle, &map->handle)
get_user(m32.mtrr, &map->mtrr))
}
static int compat_drm_addmap(struct file *file, unsigned int cmd,
{
copy_from_user(&m32, argp, sizeof(m32)))
get_user(m32.offset, &map->offset)
get_user(m32.mtrr, &map->mtrr)
get_user(handle, &map->handle))
}
static int compat_drm_getclient(struct file *file, unsigned int cmd,
{
get_user(idx, &argp->idx))
get_user(c32.idx, &client->idx)
get_user(c32.auth, &client->auth)
get_user(c32.pid, &client->pid)
get_user(c32.uid, &client->uid)
get_user(c32.magic, &client->magic)
get_user(c32.iocs, &client->iocs))
}
static int compat_drm_getstats(struct file *file, unsigned int cmd,
{
get_user(s32.count, &stats->count))
get_user(s32.data[i].value, &stats->data[i].value)
get_user(s32.data[i].type, &stats->data[i].type))
}
static int compat_drm_addbufs(struct file *file, unsigned int cmd,
{
get_user(agp_start, &argp->agp_start)
get_user(agp_start, &buf->agp_start)
}
static int compat_drm_infobufs(struct file *file, unsigned int cmd,
{
copy_from_user(&req32, argp, sizeof(req32)))
get_user(actual, &request->count))
}
static int compat_drm_mapbufs(struct file *file, unsigned int cmd,
{
copy_from_user(&req32, argp, sizeof(req32)))
get_user(actual, &request->count))
get_user(addr, &list[i].address)
get_user(addr, &request->virtual)
}
static int compat_drm_getsareactx(struct file *file, unsigned int cmd,
{
get_user(ctx_id, &argp->ctx_id))
get_user(handle, &request->handle)
}
static int compat_drm_resctx(struct file *file, unsigned int cmd,
{
copy_from_user(&res32, argp, sizeof(res32)))
get_user(res32.count, &res->count)
}
static int compat_drm_dma(struct file *file, unsigned int cmd,
{
copy_from_user(&d32, argp, sizeof(d32)))
get_user(d32.request_size, &d->request_size)
get_user(d32.granted_count, &d->granted_count)
}
static int compat_drm_agp_info(struct file *file, unsigned int cmd,
{
get_user(i32.agp_version_major, &info->agp_version_major)
get_user(i32.agp_version_minor, &info->agp_version_minor)
get_user(i32.mode, &info->mode)
get_user(i32.aperture_base, &info->aperture_base)
get_user(i32.aperture_size, &info->aperture_size)
get_user(i32.memory_allowed, &info->memory_allowed)
get_user(i32.memory_used, &info->memory_used)
get_user(i32.id_vendor, &info->id_vendor)
get_user(i32.id_device, &info->id_device))
}
static int compat_drm_agp_alloc(struct file *file, unsigned int cmd,
{
copy_from_user(&req32, argp, sizeof(req32)))
get_user(req32.handle, &request->handle)
get_user(req32.physical, &request->physical)
}
static int compat_drm_sg_alloc(struct file *file, unsigned int cmd,
{
get_user(x, &argp->size)
get_user(x, &request->handle)
}
static int compat_drm_wait_vblank(struct file *file, unsigned int cmd,
{
copy_from_user(&req32, argp, sizeof(req32)))
get_user(req32.reply.type, &request->reply.type)
get_user(req32.reply.sequence, &request->reply.sequence)
get_user(req32.reply.tval_sec, &request->reply.tval_sec)
get_user(req32.reply.tval_usec, &request->reply.tval_usec))
}
static int compat_drm_mode_addfb2(struct file *file, unsigned int cmd,
{
copy_from_user(&req32, argp, sizeof(req32)))
get_user(req32.fb_id, &req64->fb_id))
}
