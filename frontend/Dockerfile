FROM ioft/i386-ubuntu:14.04
RUN apt-get -y update && \
apt-get install -y vim gcc-4.4 g++-4.4 gfortran-4.4 make openssh-client openjdk-6-jdk wget git xz-utils && \
ln -s /usr/bin/gcc-4.4 /usr/bin/gcc && \
ln -s /usr/bin/g++-4.4 /usr/bin/g++ && \
ln -s /usr/bin/gfortran-4.4 /usr/bin/gfortran && \
useradd -m -p stng -s /bin/bash stng && \
sudo -u stng bash -c 'cd ~stng; git clone https://github.com/uwplse/stng.git; cd stng/frontend; make;' && \
ln -s /home/stng/stng/frontend/bin/translator /bin
