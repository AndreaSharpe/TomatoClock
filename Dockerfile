FROM python:3.10
RUN mkdir -p /dtc
WORKDIR /dtc
COPY ./ /dtc
RUN cd /dtc
RUN pip install -r requirements.txt -i https://pypi.tuna.tsinghua.edu.cn/simple/
EXPOSE 5000
ENTRYPOINT ["python","app.py"]