PROJECT_NAME=$1
LIBDIR=/env/lib

cd ./$PROJECT_NAME
make
./librarytest
mv lib$1.a $LIBDIR/lib$1.a
make clean
cd ..
