#/bin/sh

systemctl stop gdaq
/usr/bin/enable-iio-single.sh
dmesg | tail
cat /sys/verd_debug/read_calib_data
/usr/bin/demo-iio
dmesg | tail
sleep 3
rmmod max11166 && modprobe max11166 flash_fw_chain0=1 flash_fw_chain1=1
dmesg | tail
cd /lib/modules/4.4.15-ti-r37/extra
