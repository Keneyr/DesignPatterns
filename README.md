# DesignPatterns

偶然之间，看到了侯捷巨佬的[C++视频](https://www.bilibili.com/video/BV1gb411g7pa)

(是我看到的对C++讲的最好的人呐~)，于是对软件工程中的设计模式产生了兴趣。在加上最近项目中也确实看到了很多设计模式的实现，所以有必要梳理一下~

C++实现编程中常见设计模式(工厂/单例/组合/享元/观察/状态等)

参考[设计模式相关教程网站](https://www.runoob.com/design-pattern/design-pattern-tutorial.html)

首先实现常见的几种设计模式，剩下的慢慢来更···

## 工厂模式

工厂模式（Factory Pattern）是比较最常用的设计模式之一。这种类型的设计模式属于创建型模式，它提供了一种创建对象的最佳方式。

在工厂模式中，我们在创建对象时不会对客户端暴露创建逻辑，并且是通过使用一个共同的接口来指向新创建的对象。

有图就不多BB：

我们将创建一个 *Shape* 接口和实现 *Shape* 接口的实体类。下一步是定义工厂类 *ShapeFactory*。

*FactoryPatternDemo* 类使用 *ShapeFactory* 来获取 *Shape* 对象。它将向 *ShapeFactory* 传递信息（CIRCLE / RECTANGLE / SQUARE），以便获取它所需对象的类型。

![类图](images/FactoryPattern.png)

说白了就是虚函数和多态！！！

有个客户通过工厂的getShape接口，说，我要个Circle的形状，那么工厂就返回给他一个Circle的形状；
客户变卦了，通过工厂的getShape接口，说，我要个Square的形状，那么工厂就返回给他一个Square的形状。

这就是通过同一个接口，返回不同的产品对象，实现不同的逻辑；这个接口是被这个工厂管理的。所以叫做工厂模式。

## 单例模式




## 观察模式




## 状态模式




## 组合模式





## 享元模式




