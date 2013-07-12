//#include <iostream>
//
//using namespace std;
//
//int sack[8] = {0};
///* 
//  คิดว่าแต่ละการซื้อของ 1 ชิ้นเป็นการผ่านไป 1 เลเวล
//  level | 1 | 2 | 3 | 4 |
//        | 20|   |   |   |
//		| 10| 5 | 5 |   |
//*/
//void knapsack(int *arrProduct,int money,int sum,int count,int begin,int end){
//	if(sum < money){
//		for(int i = begin;i < end;i++){ // ทำการเลื่อนไปเรื่อยจนกว่าจะถึงจำนวนเงิน เพราะต้องการเลื่อนให้สุด level มันก่อน deepest tree
//			sack[count] = arrProduct[i];
//			knapsack(arrProduct,money,sum+arrProduct[i],count+1,i+1,end); // ทำการเลื่อนเลเวลไปอีกตัวเรื่อยๆ
//			//หลังจากที่ไปเข้า case sum == money แล้วจะไม่มีการวน recursive อีกในรอบนั้นมันจะหลุดออกมานอก knapsack อันที่ถูกเรียกหลังสุด แล้วออกมาวน loop เพื่อ
//			// ทำการลองเปลี่ยนค่า level สุดท้ายดู โดยการเปลี่ยนค่า i ไปเรื่อยๆแล้วเข้า recursive ไปเปรียบเทียบเหมือนเดิม
//			sack[count] = 0; //เซ็ตตำแหน่งที่จบหลังอกจาก recursive ให้เป็น 0 เพื่อไม่ให้มันปริ้นมาเกินจุดนี้
//		}
//	}else if(sum == money){ // เมื่อเลื่อนจนเจอจำนวนเงินที่ถูกต้องแล้วให้ทำการแสดงผลออกมา
//		for(int i = 0;i < sizeof(sack)/sizeof(sack[0]);i++){
//			if(sack[i] == 0)break; // หากเจอ 0 ให้หยุด loop การพิมทันที
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
