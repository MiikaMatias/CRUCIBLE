# CRUCIBLE
Building C ML algs from scratch until it feels trivial. 

## ENVIRONMENT
I'm doing all this on a __bare bones__ alpine linux environment. If I need any utils beyond `gcc` and C dev utils, I need to make it myself. 

## RUNNING
Run project with

```sh
docker compose up
./run.sh sh 
```

You are now in the runtime. Run binaries defined in `/env/bin`.

## INPUT DATA
All input data should be in a csv format.

## MODELS
All models I've implemented thus far

### LINREG
See ./rootfs/src/linreg