FROM phusion/baseimage:0.9.19

ENV LANG=en_US.UTF-8
ENV WDIR=/usr/local/crea
ENV SMOKETEST=$WDIR/smoketest

RUN apt-get update
RUN apt-get install -y apt-utils
RUN apt-get install -y libreadline-dev
RUN apt-get install -y python3
RUN apt-get install -y python3-pip
RUN apt-get install -y net-tools
RUN apt-get install -y cpio
RUN pip3 install --upgrade pip
RUN pip3 install pyresttest

COPY . $WDIR/

RUN apt-get clean
RUN rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

#reference: volume points to reference cread
#tested: volume points to tested cread
#ref_blockchain: volume points to reference folder, where blockchain folder exists
#tested_blockchain: volume points to tested folder, where blockchain folder exists
#logs_dir: location where non-empty logs will be copied
VOLUME ["reference", "tested", "ref_blockchain", "tested_blockchain", "logs_dir", "run"]

EXPOSE 1886
EXPOSE 1996

#CMD pyresttest
CMD cd $SMOKETEST && \
   ./smoketest.sh /reference/cread /tested/cread /ref_blockchain /tested_blockchain $STOP_REPLAY_AT_BLOCK $JOBS $COPY_CONFIG 2>&1 | tee log.txt || \
   find ./ -type f -path */logs/* -not -name logs | cpio -pd /logs_dir && \
   cp log.txt /logs_dir && \
   chmod -R a+rw /logs_dir
