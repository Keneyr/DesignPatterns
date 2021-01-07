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


## 抽象工厂模式

工厂模式确实很容易理解，但是在实际大型项目中，很多时候用的都是抽象工厂模式，所以这里要学会抽象工厂模式。

抽象工厂模式（Abstract Factory Pattern）是围绕一个超级工厂创建其他工厂。该超级工厂又称为其他工厂的工厂。这种类型的设计模式属于创建型模式，它提供了一种创建对象的最佳方式。

在抽象工厂模式中，接口是负责创建一个相关对象的工厂，不需要显式指定它们的类。每个生成的工厂都能按照工厂模式提供对象。

有图就不多BB：

我们将创建 *Shape* 和 *Color* 接口和实现这些接口的实体类。下一步是创建抽象工厂类 *AbstractFactory*。接着定义工厂类 *ShapeFactory* 和 *ColorFactory*，这两个工厂类都是扩展了 *AbstractFactory*。然后创建一个工厂创造器/生成器类 *FactoryProducer*。

*AbstractFactoryPatternDemo* 类使用 *FactoryProducer* 来获取 *AbstractFactory* 对象。它将向 *AbstractFactory* 传递形状信息 *Shape（CIRCLE / RECTANGLE / SQUARE）*，以便获取它所需对象的类型。同时它还向 *AbstractFactory* 传递颜色信息 *Color（RED / GREEN / BLUE）*，以便获取它所需对象的类型。

![类图](images/AbstractFactoryPattern.png)

说白了还是虚函数和多态！！！只是一下子搞了两层的虚函数和多态！！！相当于是工厂也给抽象出基类了，不同的工厂对象，可以取得不同性质的产品：形状和颜色。

可以看到，工厂模式的缺陷还是比较明显的，那就是多一层抽象就会一下子多出来好多类来维护。

## 单例模式




## 观察模式




## 状态模式




## 组合模式





## 享元模式




