#pragma once
//���ǰ���û���ڱ��ڵ���
/*ģ��ڵ�ṹ��*/
template <typename T>   //���ǵ��ṹ�����͵Ĳ�ͬ
struct Node
{
    T data;                                 //�洢�ձ�T����
    Node* next;                             //ָ����һ���ڵ�
    Node(T val): data(val),next(nullptr){}  //���캯��
};



/*��������ͬʱ��ʼ��ͷ�ڵ�*/
template <typename T>
Node<T>* createlinkedlist(T value)
{
    return new Node<T>(value);  //�����ձ�T�ڵ�
}

/*��ӽڵ㵽�����β*/
template <typename T>
void addNode(Node<T>*& head, T value)      //ʹ�����ñ���ָ��ĸ�������
{
    Node<T>* newNode = new Node<T>(value);
    if (head == nullptr)                   //ͷ�ڵ�Ϊ��ʱ
    {
        head = newNode;                    //�����ڵ�
        return;
    }
    Node<T>* temp = head;                 //ͷ�ڵ㲻Ϊ��
    while (temp->next != nullptr)         //��ͷ������nextΪ�սڵ�
    {        
        temp = temp->next;              
    }
    temp->next = newNode;                 //β����ӽڵ�
}

/*ɾ���ڵ�*/
template <typename T>
void delNode(Node<T>*& head, T value)  //ʹ�����ñ���ָ��ĸ�������
{
    if(head == nullptr) return;        //������ֱ�ӷ���

    if(head->data == value)            //ɾ��ͷ�ڵ�
    {                               
        Node<T>* temp = head;          //������ʱ�ڵ�
        head = head->next;             //����ͷ�ڵ�
        delete temp;                   //ɾ��Ŀ��ڵ�
        return;
    }

    Node<T>* temp = head;              //ɾ���м��β�ڵ�
    while (temp->next != nullptr && temp->next->data != value)
    {                                  //������ɾ���ڵ��ǰһ��
        temp = temp->next;
    }

    if (temp->next != nullptr)         // �ҵ�ǰһλ����Ŀ��ڵ��Ҳ�Ϊ��
    {  
        Node<T>* deltemp = temp->next; //������ʱ�ڵ�
        temp->next = temp->next->next; //����Ŀ��ڵ�
        delete deltemp;                //ɾ��Ŀ��ڵ�
    }
    return;
}