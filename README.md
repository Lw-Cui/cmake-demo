# CMake Demo

[![Build Status](https://travis-ci.org/Lw-Cui/cmake-demo.svg?branch=master)](https://travis-ci.org/Lw-Cui/cmake-demo)
[![Packagist](https://img.shields.io/packagist/l/doctrine/orm.svg?maxAge=2592000?style=flat-square)](../master/LICENSE)


这是一个使用`CMake`完成项目构建、使用`Google Test`框架进行测试、使用`easylogging++`打印日志、使用`Travis CI`进行持续集成的项目。

这个项目需要安装`SFML`图形库。推荐使用`CLion`作为IDE。

通过将程序划分为三个大的模块，我们可以分别编写、分别测试，尽最大可能地实现程序的模块化；而模块间的依赖可以方便地通过`CMake`来完成。

## 如何提交代码

### 向主代码库提交代码

通过fork 主代码库到自己的账户下以进行开发，完成后通过pull request 到主代码库。当代码合格后该代码会被 merge 进入主代码库。

### 向成员提交代码

成员之间的互助可以通过提出issue、fork 该成员的代码、改进并pull request 来完成。