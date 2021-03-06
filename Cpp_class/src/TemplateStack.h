/*
 * TemplateStack.h
 *
 *  Created on: 16 Ara 2015
 *      Author: rivendell
 */

#ifndef TEMPLATESTACK_H_
#define TEMPLATESTACK_H_
using namespace std;
template<class T>
class TemplateStack {
public:
	  TemplateStack();
      void push(T i);
      void setSize(int);
      T pop();
  private:
      int top;

      T *st;
};

template <class T>
TemplateStack<T>::TemplateStack(){

       top = -1;
}

template <class T>
void TemplateStack<T>::push(T i)
{
	st[++top] = i;
}

template <class T>
T TemplateStack<T>::pop()
{
	return st[top--];
}

template <class T>
void TemplateStack<T>::setSize(int size)
{
   st = new T[size];
}
#endif /* TEMPLATESTACK_H_ */
