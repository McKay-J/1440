//
// Created by McKay Jensen on 4/3/2017.
//

#ifndef GENERICDICTIONARY_KEYVALUE_H
#define GENERICDICTIONARY_KEYVALUE_H

template <typename KeyType, typename ValueType>
class KeyValue {

private:
    KeyType m_key;
    ValueType m_value;

public:
    KeyValue<KeyType, ValueType>(KeyType key, ValueType value) : m_key(key), m_value(value) //overloaded
    {}
    KeyValue<KeyType, ValueType>()   //default constructor
    {}

     KeyType getKey() const { return m_key; }
     ValueType getValue() const { return m_value; }

    KeyValue(const KeyValue<KeyType, ValueType>& obj);  //copy constructor
};

template <typename KeyType, typename ValueType>
KeyValue<KeyType, ValueType>::KeyValue(const KeyValue<KeyType, ValueType>& obj)   //implementing copy constructor
{
    m_key = obj.m_key;
    m_value = obj.m_value;
}

#endif //GENERICDICTIONARY_KEYVALUE_H
