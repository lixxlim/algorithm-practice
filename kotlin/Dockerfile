FROM ubuntu

RUN apt update
RUN apt upgrade -y

RUN apt-get install openjdk-17-jre curl unzip zip -y 
RUN curl -s https://get.sdkman.io | bash

RUN apt-get install neovim git -y
RUN export INIT="sdk install kotlin"
