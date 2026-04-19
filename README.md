# Install Dependency

```sh
git clone https://github.com/antlr/antlr4.git
cd antlr4/runtime/Cpp
mkdir build
cd build
cmake ..
make
sudo make install
cd ../../../../
rm -rf antlr4
```

# Compile

```sh
# if antlr4 parser generator is in ~/
alias antlr4='java -jar ~/antlr-4.13.2-complete.jar'
antlr4 -Dlanguage=Cpp -visitor src/antlr/lycoris.g4
```



