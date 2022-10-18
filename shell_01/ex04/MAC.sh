ifconfig -a -L | awk '/ether/{print$2}'
