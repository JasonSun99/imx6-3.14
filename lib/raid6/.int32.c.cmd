cmd_lib/raid6/int32.c := awk -f/home/study/imx-linux/SolidRun/linux-fslc/lib/raid6/unroll.awk -vN=32 < lib/raid6/int.uc > lib/raid6/int32.c || ( rm -f lib/raid6/int32.c && exit 1 )
