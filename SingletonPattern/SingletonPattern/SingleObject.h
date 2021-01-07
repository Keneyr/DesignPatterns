#pragma once

class SingleObject
{
public:
    
    static SingleObject* getInstance();
    void showMessage();

private:
    static SingleObject* instance;
    SingleObject() {};
    ~SingleObject() { delete instance; }
};