# dlHandler
运行期间链接动态库接口封装  
# 使用方式
cd example && make clean && make && cd ../  
cd src && make clean && make  
echo "../example/dlHandlerExample.so test1 " | ./dlHandler.bin 
