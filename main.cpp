#include "widget.h"
#include <QApplication>

//快捷键
// 注释 ctrl + /
// 运行 ctrl + r
// 编译 ctrl + b
// 缩放 ctrl + 鼠标滚轮
// 查找 ctrl + f
// 整行移动 ctrl + shift + ↑ or ↓
// 自动对齐 ctrl + i
// 帮助文档 F1
// 同名之间 h 与cpp 切换F4
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    //widget显示
    w.show();

    //消息循环
    return a.exec();
}
