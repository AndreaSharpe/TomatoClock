
FROM ubuntu:latest

# 使用阿里云的镜像源
RUN sed -i 's/archive.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list && \
    sed -i 's/security.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list

# 设置非交互模式
ENV DEBIAN_FRONTEND=noninteractive

# 设置时区
ENV TZ=Asia/Shanghai
RUN ln -fs /usr/share/zoneinfo/$TZ /etc/localtime && \
    echo $TZ > /etc/timezone && \
    apt-get update && \
    apt-get install -y tzdata


# 更新apt源并安装必要的软件包和依赖
RUN apt-get update 
RUN apt-get install -y build-essential \
                    qt6-base-dev \
                    qmake6 \
                    qt6-charts-dev \
                    libmysqlclient-dev \
                    linguist-qt6 \
                    libqt6sql6-mysql \
                    qt6-l10n-tools
RUN apt-get install qtmultimedia5-dev -y
RUN apt-get install libpulse-dev -y
RUN apt-get install libqt5multimedia5 libqt5multimediawidgets5

# 设置工作目录
WORKDIR /app

# 复制项目文件到容器中
COPY . /app

# 使用 qmake6 生成 Makefile 并编译项目
RUN qmake6 tomatoClock/tomatoClock.pro
RUN make

# 定义容器启动时执行的命令
# CMD ["./basic"]
