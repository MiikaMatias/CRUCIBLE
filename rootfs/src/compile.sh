PROJECT_NAME=$1
LIBDIR=/env/lib

cd ./$PROJECT_NAME
make
make clean
cd ..
