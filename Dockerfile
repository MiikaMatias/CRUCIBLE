FROM alpine:latest

RUN apk add --no-cache gcc musl-dev make

RUN find /bin /usr/bin -type l ! -name "sh" ! -name "rm" -delete

RUN export PATH=/env/bin/:$PATH

WORKDIR /env