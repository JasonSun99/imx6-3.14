cmd_Documentation/networking/timestamping/hwtstamp_config := gcc -Wp,-MD,Documentation/networking/timestamping/.hwtstamp_config.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89    -I/home/study/imx-linux/SolidRun/linux-fslc/usr/include -o Documentation/networking/timestamping/hwtstamp_config Documentation/networking/timestamping/hwtstamp_config.c  

source_Documentation/networking/timestamping/hwtstamp_config := Documentation/networking/timestamping/hwtstamp_config.c

deps_Documentation/networking/timestamping/hwtstamp_config := \
  /usr/include/stdc-predef.h \
  /usr/include/errno.h \
  /usr/include/features.h \
  /usr/include/x86_64-linux-gnu/sys/cdefs.h \
  /usr/include/x86_64-linux-gnu/bits/wordsize.h \
  /usr/include/x86_64-linux-gnu/gnu/stubs.h \
  /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
  /usr/include/x86_64-linux-gnu/bits/errno.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/linux/errno.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm/errno.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm-generic/errno.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm-generic/errno-base.h \
  /usr/include/stdio.h \
  /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h \
  /usr/include/x86_64-linux-gnu/bits/types.h \
  /usr/include/x86_64-linux-gnu/bits/typesizes.h \
  /usr/include/libio.h \
  /usr/include/_G_config.h \
  /usr/include/wchar.h \
  /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
  /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
  /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
  /usr/include/x86_64-linux-gnu/bits/stdio.h \
  /usr/include/x86_64-linux-gnu/bits/stdio2.h \
  /usr/include/stdlib.h \
  /usr/include/x86_64-linux-gnu/bits/waitflags.h \
  /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
  /usr/include/endian.h \
  /usr/include/x86_64-linux-gnu/bits/endian.h \
  /usr/include/x86_64-linux-gnu/bits/byteswap.h \
  /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
  /usr/include/x86_64-linux-gnu/sys/types.h \
  /usr/include/time.h \
  /usr/include/x86_64-linux-gnu/sys/select.h \
  /usr/include/x86_64-linux-gnu/bits/select.h \
  /usr/include/x86_64-linux-gnu/bits/sigset.h \
  /usr/include/x86_64-linux-gnu/bits/time.h \
  /usr/include/x86_64-linux-gnu/bits/select2.h \
  /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
  /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
  /usr/include/alloca.h \
  /usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h \
  /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
  /usr/include/x86_64-linux-gnu/bits/stdlib.h \
  /usr/include/string.h \
  /usr/include/xlocale.h \
  /usr/include/x86_64-linux-gnu/bits/string.h \
  /usr/include/x86_64-linux-gnu/bits/string2.h \
  /usr/include/x86_64-linux-gnu/bits/string3.h \
  /usr/include/x86_64-linux-gnu/sys/socket.h \
  /usr/include/x86_64-linux-gnu/sys/uio.h \
  /usr/include/x86_64-linux-gnu/bits/uio.h \
  /usr/include/x86_64-linux-gnu/bits/socket.h \
  /usr/include/x86_64-linux-gnu/bits/socket_type.h \
  /usr/include/x86_64-linux-gnu/bits/sockaddr.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm/socket.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm-generic/socket.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm/sockios.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm-generic/sockios.h \
  /usr/include/x86_64-linux-gnu/bits/socket2.h \
  /usr/include/x86_64-linux-gnu/sys/ioctl.h \
  /usr/include/x86_64-linux-gnu/bits/ioctls.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm/ioctls.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm-generic/ioctls.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/linux/ioctl.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm/ioctl.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm-generic/ioctl.h \
  /usr/include/x86_64-linux-gnu/bits/ioctl-types.h \
  /usr/include/x86_64-linux-gnu/sys/ttydefaults.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/linux/if.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/linux/types.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm/types.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm-generic/int-ll64.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm/bitsperlong.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/linux/posix_types.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/linux/stddef.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm/posix_types.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/asm-generic/posix_types.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/linux/socket.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/linux/hdlc/ioctl.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/linux/net_tstamp.h \
  /home/study/imx-linux/SolidRun/linux-fslc/usr/include/linux/sockios.h \

Documentation/networking/timestamping/hwtstamp_config: $(deps_Documentation/networking/timestamping/hwtstamp_config)

$(deps_Documentation/networking/timestamping/hwtstamp_config):
