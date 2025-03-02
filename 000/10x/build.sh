#!/bin/bash

# Thư mục chứa mã nguồn
SRC_CPP="sourcec"
SRC_JAVA="sourcej"

# Thư mục output
BIN_CPP="binc"
BIN_JAVA="binj"

# Kiểm tra xem thư mục bin đã tồn tại chưa
if [[ -d "$BIN_CPP" && -d "$BIN_JAVA" ]]; then
    echo "bin does exist"
else
    mkdir -p "$BIN_CPP" "$BIN_JAVA"
    echo "bin does not exist, create bin"
fi

# Biên dịch tất cả các file C++
echo "Compiling C++..."
for file in "$SRC_CPP"/*.cpp; do
    if [[ -f "$file" ]]; then
        filename=$(basename "$file" .cpp)
        g++ "$file" -o "$BIN_CPP/$filename"
        if [[ $? -eq 0 ]]; then
            echo "Compiled Successfully: $filename"
        else
            echo "Compilation Error: $filename"
        fi
    fi
done

# Biên dịch tất cả các file Java
echo "Compiling Java..."
javac -d "$BIN_JAVA" $(find "$SRC_JAVA" -name "*.java")

if [[ $? -eq 0 ]]; then
    echo "Java Compiled Successfully!"
else
    echo "Java Compilation Error!"
fi

echo "Compilation Successfully."

