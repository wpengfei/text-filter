/Users/wpf/Desktop/log/test/linux-2.6.9/fs/compat_ioctl.c
static int get_video_tuner32(struct video_tuner *kp, struct video_tuner32 __user *up)
{
get_user(kp->tuner, &up->tuner))
get_user(kp->name[i], &up->name[i]);
get_user(kp->rangelow, &up->rangelow);
get_user(kp->rangehigh, &up->rangehigh);
get_user(kp->flags, &up->flags);
get_user(kp->mode, &up->mode);
get_user(kp->signal, &up->signal);
}
static int get_video_buffer32(struct video_buffer *kp, struct video_buffer32 __user *up)
{
get_user(tmp, &up->base))
get_user(kp->height, &up->height);
get_user(kp->width, &up->width);
get_user(kp->depth, &up->depth);
get_user(kp->bytesperline, &up->bytesperline);
}
static int do_set_window(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(nclips, &up->clipcount))
get_user(n, &up->x) || put_user(n, &vw->x) ||
get_user(n, &up->y) || put_user(n, &vw->y) ||
get_user(n, &up->width) || put_user(n, &vw->width) ||
get_user(n, &up->height) || put_user(n, &vw->height) ||
get_user(n, &up->chromakey) || put_user(n, &vw->chromakey) ||
get_user(n, &up->flags) || put_user(n, &vw->flags) ||
get_user(n, &up->clipcount) || put_user(n, &vw->clipcount) ||
get_user(n, &up->clips) || put_user(p, &vw->clips))
get_user(v, &u->x) ||
get_user(v, &u->y) ||
get_user(v, &u->width) ||
get_user(v, &u->height) ||
}
static int dev_ifconf(unsigned int fd, unsigned int cmd, unsigned long arg)
{
copy_from_user(&ifc32, compat_ptr(arg), sizeof(struct ifconf32)))
copy_from_user(&ifc, uifc, sizeof(struct ifconf))) 
}
static int bond_ioctl(unsigned int fd, unsigned int cmd, unsigned long arg)
{
copy_from_user(&kifr, ifr32, sizeof(struct ifreq32)))
get_user(data, &ifr32->ifr_ifru.ifru_data))
}
int siocdevprivate_ioctl(unsigned int fd, unsigned int cmd, unsigned long arg)
{
copy_from_user(&tmp_buf[0], &(u_ifreq32->ifr_ifrn.ifrn_name[0]),
get_user(data32, &u_ifreq32->ifr_ifru.ifru_data))
}
static int dev_ifsioc(unsigned int fd, unsigned int cmd, unsigned long arg)
{
copy_from_user(&ifr, uifr32, sizeof(ifr.ifr_name));
get_user(ifr.ifr_map.mem_start, &uifmap32->mem_start);
get_user(ifr.ifr_map.mem_end, &uifmap32->mem_end);
get_user(ifr.ifr_map.base_addr, &uifmap32->base_addr);
get_user(ifr.ifr_map.irq, &uifmap32->irq);
get_user(ifr.ifr_map.dma, &uifmap32->dma);
get_user(ifr.ifr_map.port, &uifmap32->port);
copy_from_user(&ifr, uifr32, sizeof(*uifr32)))
}
static int routing_ioctl(unsigned int fd, unsigned int cmd, unsigned long arg)
{
copy_from_user (&r6.rtmsg_dst, &(ur6->rtmsg_dst),
get_user (r6.rtmsg_type, &(ur6->rtmsg_type));
get_user (r6.rtmsg_dst_len, &(ur6->rtmsg_dst_len));
get_user (r6.rtmsg_src_len, &(ur6->rtmsg_src_len));
get_user (r6.rtmsg_metric, &(ur6->rtmsg_metric));
get_user (r6.rtmsg_info, &(ur6->rtmsg_info));
get_user (r6.rtmsg_flags, &(ur6->rtmsg_flags));
get_user (r6.rtmsg_ifindex, &(ur6->rtmsg_ifindex));
copy_from_user (&r4.rt_dst, &(ur4->rt_dst),
get_user (r4.rt_flags, &(ur4->rt_flags));
get_user (r4.rt_metric, &(ur4->rt_metric));
get_user (r4.rt_mtu, &(ur4->rt_mtu));
get_user (r4.rt_window, &(ur4->rt_window));
get_user (r4.rt_irtt, &(ur4->rt_irtt));
get_user (rtdev, &(ur4->rt_dev));
copy_from_user (devname, compat_ptr(rtdev), 15);
}
static int fb_getput_cmap(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(data, &cmap32->red) ||
get_user(data, &cmap32->green) ||
get_user(data, &cmap32->blue) ||
get_user(data, &cmap32->transp) ||
}
static int sg_build_iovec(sg_io_hdr_t __user *sgio, void __user *dxferp, u16 iovec_count)
{
get_user(base, &iov32[i].iov_base) ||
get_user(len, &iov32[i].iov_len) ||
}
static int sg_ioctl_trans(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(iovec_count, &sgio32->iovec_count))
get_user(data, &sgio32->dxferp))
get_user(data, &sgio32->cmdp))
get_user(data, &sgio32->sbp))
get_user(data, &sgio32->usr_ptr))
get_user(datap, &sgio->usr_ptr) ||
}
static int ppp_sock_fprog_ioctl_trans(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(flen, &u_fprog32->len) ||
get_user(fptr32, &u_fprog32->filter))
}
static int ppp_gidle(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(xmit, &idle->xmit_idle) ||
get_user(recv, &idle->recv_idle) ||
}
static int mt_ioctl_trans(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(info.mt_type, &uinfo32->mt_type);
get_user(info.ifc_type, &uinfo32->ifc_type);
get_user(info.irqnr, &uinfo32->irqnr);
get_user(info.dmanr, &uinfo32->dmanr);
get_user(info.port, &uinfo32->port);
get_user(info.debug, &uinfo32->debug);
copy_from_user((char *)&info.debug
}
static int cdrom_do_generic_command(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(data, &cgc32->buffer) ||
get_user(data, &cgc32->sense) ||
get_user(dir, &cgc32->data_direction) ||
get_user(itmp, &cgc32->quiet) ||
get_user(itmp, &cgc32->timeout) ||
get_user(data, &cgc32->reserved[0]) ||
}
static int loop_status(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(l.lo_number, &ul->lo_number);
get_user(l.lo_device, &ul->lo_device);
get_user(l.lo_inode, &ul->lo_inode);
get_user(l.lo_rdevice, &ul->lo_rdevice);
copy_from_user(&l.lo_offset, &ul->lo_offset,
}
static int do_fontx_ioctl(unsigned int fd, unsigned int cmd, unsigned long arg, struct file *file)
{
get_user(op.height, &user_cfd->charheight) ||
get_user(op.charcount, &user_cfd->charcount) ||
get_user(data, &user_cfd->chardata))
get_user(op.height, &user_cfd->charheight) ||
get_user(op.charcount, &user_cfd->charcount) ||
get_user(data, &user_cfd->chardata))
}
static int do_atm_iobuf(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(len, &iobuf32->length) ||
get_user(data, &iobuf32->buffer))
}
static int blkpg_ioctl_trans(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(n, &ua32->op);
get_user(n, &ua32->flags);
get_user(n, &ua32->datalen);
get_user(udata, &ua32->data);
}
static int fd_ioctl_trans(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(f->size, &uf->size);
get_user(f->sect, &uf->sect);
get_user(f->head, &uf->head);
get_user(f->track, &uf->track);
get_user(f->stretch, &uf->stretch);
get_user(f->gap, &uf->gap);
get_user(f->rate, &uf->rate);
get_user(f->spec1, &uf->spec1);
get_user(f->fmt_gap, &uf->fmt_gap);
get_user(name, &uf->name);
get_user(f->cmos, &uf->cmos);
get_user(f->max_dtr, &uf->max_dtr);
get_user(f->hlt, &uf->hlt);
get_user(f->hut, &uf->hut);
get_user(f->srt, &uf->srt);
get_user(f->spinup, &uf->spinup);
get_user(f->spindown, &uf->spindown);
get_user(f->spindown_offset, &uf->spindown_offset);
get_user(f->select_delay, &uf->select_delay);
get_user(f->rps, &uf->rps);
get_user(f->tracks, &uf->tracks);
get_user(f->timeout, &uf->timeout);
get_user(f->interleave_sect, &uf->interleave_sect);
copy_from_user(&f->max_errors, &uf->max_errors, sizeof(f->max_errors));
get_user(f->flags, &uf->flags);
get_user(f->read_track, &uf->read_track);
copy_from_user(f->autodetect, uf->autodetect, sizeof(f->autodetect));
get_user(f->checkfreq, &uf->checkfreq);
get_user(f->native_format, &uf->native_format);
}
static int get_raw32_request(struct raw_config_request *req, struct raw32_config_request __user *user_req)
{
get_user(req->raw_minor, &user_req->raw_minor);
get_user(req->block_major, &user_req->block_major);
get_user(req->block_minor, &user_req->block_minor);
}
static int serial_struct_ioctl(unsigned fd, unsigned cmd, unsigned long arg)
{
copy_from_user(&ss, ss32, offsetof(SS32, iomem_base));
get_user(udata, &ss32->iomem_base);
get_user(ss.iomem_reg_shift, &ss32->iomem_reg_shift);
get_user(ss.port_high, &ss32->port_high);
}
static int do_usbdevfs_bulk(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(n, &p32->ep) || put_user(n, &p->ep) ||
get_user(n, &p32->len) || put_user(n, &p->len) ||
get_user(n, &p32->timeout) || put_user(n, &p->timeout) ||
get_user(addr, &p32->data) || put_user(compat_ptr(addr), &p->data))
}
static int get_urb32(struct usbdevfs_urb *kurb,
{
get_user(kurb->type, &uurb->type) ||
get_user(kurb->endpoint, &uurb->endpoint) ||
get_user(kurb->status, &uurb->status) ||
get_user(kurb->flags, &uurb->flags) ||
get_user(kurb->buffer_length, &uurb->buffer_length) ||
get_user(kurb->actual_length, &uurb->actual_length) ||
get_user(kurb->start_frame, &uurb->start_frame) ||
get_user(kurb->number_of_packets, &uurb->number_of_packets) ||
get_user(kurb->error_count, &uurb->error_count) ||
get_user(kurb->signr, &uurb->signr))
}
static int do_usbdevfs_discsignal(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(kdis.signr, &udis->signr) ||
get_user(uctx, &udis->context))
}
static int do_i2c_rdwr_ioctl(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(nmsgs, &udata->nmsgs) || __put_user(nmsgs, &tdata->nmsgs))
get_user(datap, &udata->msgs))
get_user(datap, &umsgs[i].buf) ||
}
static int do_wireless_ioctl(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(pointer, &iwp_u->pointer) ||
get_user(length, &iwp_u->length) ||
get_user(flags, &iwp_u->flags))
}
static int do_ncp_getobjectname(unsigned int fd, unsigned int cmd, unsigned long arg)
{
copy_from_user(&n32, p32, sizeof(n32)) ||
get_user(auth_type, &p->auth_type) ||
get_user(name_len, &p->object_name_len) ||
}
static int do_ncp_getprivatedata(unsigned int fd, unsigned int cmd, unsigned long arg)
{
copy_from_user(&n32, p32, sizeof(n32)) ||
get_user(len, &p->len) ||
}
