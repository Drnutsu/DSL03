//#include <iostream>
//
//using namespace std;
//
//int sack[8] = {0};
///* 
//  �Դ������С�ë��ͧ͢ 1 ����繡�ü�ҹ� 1 �����
//  level | 1 | 2 | 3 | 4 |
//        | 20|   |   |   |
//		| 10| 5 | 5 |   |
//*/
//void knapsack(int *arrProduct,int money,int sum,int count,int begin,int end){
//	if(sum < money){
//		for(int i = begin;i < end;i++){ // �ӡ������͹������¨����Ҩж֧�ӹǹ�Թ ���е�ͧ�������͹����ش level �ѹ��͹ deepest tree
//			sack[count] = arrProduct[i];
//			knapsack(arrProduct,money,sum+arrProduct[i],count+1,i+1,end); // �ӡ������͹�������ա����������
//			//��ѧ�ҡ������� case sum == money ���Ǩ�����ա��ǹ recursive �ա��ͺ����ѹ����ش�͡�ҹ͡ knapsack �ѹ���١���¡��ѧ�ش �����͡��ǹ loop ����
//			// �ӡ���ͧ����¹��� level �ش���´� �¡������¹��� i ��������������� recursive ����º��º����͹���
//			sack[count] = 0; //�絵��˹觷�診��ѧ͡�ҡ recursive ����� 0 �����������ѹ�������Թ�ش���
//		}
//	}else if(sum == money){ // ���������͹���ͨӹǹ�Թ���١��ͧ�������ӡ���ʴ����͡��
//		for(int i = 0;i < sizeof(sack)/sizeof(sack[0]);i++){
//			if(sack[i] == 0)break; // �ҡ�� 0 �����ش loop ��þ���ѹ��
//			cout << sack[i] << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	int k = 20;
//	int product[8] = {20, 10, 5, 5, 3, 2, 20, 10};
//
//	knapsack(product,k,0,0,0,8);
//
//}
