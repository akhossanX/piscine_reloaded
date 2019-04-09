ifconfig | grep -i 'ether ' | sed 's/\(.*\)ether //g; s/ //g'
