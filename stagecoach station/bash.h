void chainPack(struct package* head, struct packageProp eProp);//��������
struct user* creatuser(void);//�����û������ڱ�(ϵͳ��ʼ��ʱ����)
struct user* creatuser(void);//�����û������ڱ�(ϵͳ��ʼ��ʱ����)
void adduser(struct user* head, int telnum, char* name);//�û�����
struct user* findUser(struct user* head, int telnum);//�����û�
void orgnizePack(struct packageProp& eProp);//���������Ϣ
void addPack(struct user* head, struct packageProp eProp, int telnum, char* name);//�������