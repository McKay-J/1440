//
// Created by McKay Jensen on 4/3/2017.
//

#ifndef GENERICDICTIONARY_DICTIONARY_H
#define GENERICDICTIONARY_DICTIONARY_H
#include <iostream>
#include "KeyValue.h"



enum Exception{DefaultException};

template <typename KeyType, typename ValueType>
class Dictionary {



public:
    Dictionary();
    Dictionary(int size);
    Dictionary(const Dictionary<KeyType, ValueType> &obj);
    ~Dictionary();
    void constructDict(int size);
    void grow();
    void removeByIndex(int index);
    void removeByKey(KeyType key);
    void add(KeyType key, ValueType value);
    int getCount(){ return m_index; }
    KeyValue<KeyType, ValueType>* getByKey(KeyType key) const;
    KeyValue<KeyType, ValueType>* getByIndex(int index) const;
    void reindex(int index);


private:
    KeyValue<KeyType, ValueType>** m_elements = nullptr;
    int    m_allocated=0;
    int    m_index=0;
};



template <typename KeyType, typename ValueType>
Dictionary<KeyType, ValueType>::Dictionary()
{
    constructDict(10);
}


template <typename KeyType, typename ValueType>
Dictionary<KeyType, ValueType>::~Dictionary()
{
    for (int i = 0; i < m_allocated; ++i)
    {
        m_elements[i] = nullptr;
    }
    delete[] m_elements;
    m_elements = nullptr;
}



template <typename KeyType, typename ValueType>
Dictionary<KeyType, ValueType>::Dictionary(int size)
{
    constructDict(size);
}



template <typename KeyType, typename ValueType>
void Dictionary<KeyType, ValueType>::constructDict(int size)
{
    m_elements = new KeyValue<KeyType, ValueType>*[size];
    m_allocated = size;
    for (int i = 0; i < size; i++)
    {
        m_elements[i] = nullptr;
    }
}



template <typename KeyType, typename ValueType>
Dictionary<KeyType, ValueType>::Dictionary(const Dictionary &obj)
{
    constructDict(obj.m_allocated);
    for (int i = 0; i < m_allocated; i++)
    {
        if (obj.m_elements[i] != nullptr)
            m_elements[i] = new KeyValue<KeyType, ValueType>(obj.m_elements[i]->getKey(), obj.m_elements[i]->getValue());
        else
            m_elements[i] = nullptr;
    }
    m_index = obj.m_index;
}



template <typename KeyType, typename ValueType>
void Dictionary<KeyType, ValueType>::grow()
{
    KeyValue<KeyType, ValueType>** temp = new KeyValue<KeyType, ValueType>*[m_allocated*2];
    for (int i = 0 ; i < m_allocated*2; i++){
        if (i < m_allocated)
            temp[i] = m_elements[i];
        else
            temp[i] = nullptr;
    }
    delete m_elements;
    m_elements = temp;
    m_allocated = m_allocated * 2;
}



template <typename KeyType, typename ValueType>
void Dictionary<KeyType, ValueType>::add(KeyType key, ValueType value)
{

    bool keyIsUnique = true;

    for(unsigned int i = 0; i < m_index; i++)
    {

        if(m_elements[i]->getKey() == key)
        {
            keyIsUnique = false;
            break;
        }
    }

    if (keyIsUnique)
    {
        if (m_index == m_allocated)
        {
            grow();
        }
        m_elements[m_index] = new KeyValue<KeyType, ValueType>(key, value);
        m_index++;
    }
    else
    {
        throw DefaultException;
    }


   // m_elements[m_index] = new KeyValue<KeyType, ValueType>(key, value);


}

template <typename KeyType, typename ValueType>
KeyValue<KeyType, ValueType>* Dictionary<KeyType, ValueType>::getByKey(KeyType key) const
{
    for (int i = 0; i < m_index; i++)
    {
        if (m_elements[i]->getKey() == key)
        {
            return m_elements[i];
        }
    }

    throw DefaultException;
};

template <typename KeyType, typename ValueType>
KeyValue<KeyType, ValueType>* Dictionary<KeyType, ValueType>::getByIndex(int index) const
{
    if (index < m_index)
    {
        return m_elements[index];
    }

    throw DefaultException;
}

template <typename KeyType, typename ValueType>
void Dictionary<KeyType, ValueType>::removeByIndex(int index)
{
    if (index < m_index)
    {
        reindex(index);
        return;
    }

    throw DefaultException;
}

template <typename KeyType, typename ValueType>
void Dictionary<KeyType, ValueType>::removeByKey(KeyType key)
{

    for (int i = 0; i < m_index ; ++i)
    {
        if (m_elements[i]->getKey() == key)
        {
            reindex(i);
            return;
        }
    }

    throw DefaultException;
}

//todo: possible bug????????
template <typename KeyType, typename ValueType>
void Dictionary<KeyType, ValueType>::reindex(int index)
{
    bool reachedHole = false;
    KeyValue<KeyType, ValueType>** temp = new KeyValue<KeyType, ValueType>*[m_allocated];

    for (int k = 0; k < m_allocated; ++k)
    {
        temp[k] = (m_elements)[k];
    }

    for (int j = 0; j < m_index; ++j)
    {
        m_elements[j] = new KeyValue<KeyType, ValueType>();
    }


    for(unsigned int i = 0; i < m_index; i++)
    {
        if(i == index)
        {
            reachedHole = true;
            continue;
        }

        if(reachedHole)
        {
            m_elements[i - 1] = temp[i];
        }
        else
        {
            m_elements[i] = temp[i];
        }
    }

    m_index--;
    delete[] temp;
    temp = nullptr;
}
#endif //GENERICDICTIONARY_DICTIONARY_H
