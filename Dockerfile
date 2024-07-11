FROM ubuntu:latest

# 使用阿里云的镜像源
RUN sed -i 's/archive.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list && \
    sed -i 's/security.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list

# 设置非交互模式
ENV DEBIAN_FRONTEND=noninteractive

# 更新包列表并安装必要的工具和Qt开发环境
RUN apt-get update && apt-get install -y \
    build-essential \
    qt6-base-dev \
    libsqlite3-dev \
    && rm -rf /var/lib/apt/lists/*

# 设置工作目录
WORKDIR /app

# 复制项目文件到容器中
COPY . /app

# 使用 qmake6 生成 Makefile 并编译项目
RUN qmake6 basic.pro \
    && make

# 定义容器启动时执行的命令
# CMD ["./basic"]
