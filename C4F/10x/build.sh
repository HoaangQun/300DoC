#!/bin/zsh

# Kiểm tra thư mục bin
if [ ! -d "bin" ]; then
    echo "bin does not exist, create bin"
    mkdir -p bin
fi

# Biên dịch tất cả các file .cpp vào thư mục bin
for file in *.cpp; do
    g++ "$file" -o "bin/${file%.cpp}"
done

echo "Compilation completed!"
