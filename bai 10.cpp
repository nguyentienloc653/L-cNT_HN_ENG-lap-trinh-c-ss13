#include<stdio.h>
void addallitem(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("phan tu thu arr[%d] :", i);
		scanf("%d",&arr[i]);
	}
}
void showitems(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("phan tu thu arr[%d] co gia tr %d \n",i,arr[i]);
	}
}
void additems(int arr[], int size){
          int position, value;
				printf("Nhap vi tri ban muon them: ");
				scanf("%d",&position);
				printf("Nhap vao gia tri moi: ");
				scanf("%d",&value);
				for(int i=size;i>position;i--){
					arr[i]=arr[i-1];
				}
				arr[position]=value;
				size++;
				printf("Mang sau khi them:");
	            for(int i= 0; i<size ;i++){
		        printf("%d ", arr[i]);
           	}
}
void fixitems(int arr[], int size){
	int index;
	int valueItem;
	printf("Nhap vi tri muon sua:");
	scanf("%d",&index);
	printf("Nhap gia tri muon sua: ");
	scanf("%d", &valueItem);
	for(int i=0; i<size; i++){
		if(i==index){
			arr[i]=valueItem;
		}
	}
	printf("Mang sau khi sua:");
	for(int i= 0; i<size ;i++){
		printf("%d ", arr[i]);
	}
}
void deleteitems(int arr[], int size){
		int index;
	printf("nhap vi tri phan tu muon xoa: ");
	scanf("%d", &index);
	if(index<0 || index>=size){
		printf("Vi tri khong hop le");
		}else{
			for(int i=index ; i< size-1; i++){
					arr[i]=arr[i+1];
				}
				size--;
				printf("Mang sau khi xoa:");
				for(int i=0; i<size; i++){
					printf("%d ", arr[i]);
				}
		}
}
int main(){
	int arr[100];
	int size;
	int choose;
	do{
		printf("1. Them so luong phan tu va nhap gia tri \n");
		printf("2.In ra cac phan tu dang quan ly \n");
		printf("3.Them mot phan tu vao vi tri chi dinh \n");
		printf("4.Sua mot phan tu o vi tri chi dinh \n");
		printf("5.Xoa mot phan tu o vi tri chi dinh \n");
		printf("moi ban chon case");
		scanf("%d",&choose);
		switch(choose){
			case 1:
				printf("moi nhap so luong phan tu : \n");
				scanf("%d",&size);
				addallitem(arr,size);
				break;
			case 2:
			     showitems(arr,size);
				 break;
		    case 3:
		    	additems(arr,size);
		    	break;
		    case 4:
		    	fixitems(arr,size);
		    	break;
		    case 5:
		    	deleteitems(arr,size);
		    	break;
		    	printf("Lua chon khong hop le");
		default : {
			break;
		}
		}
	}while(choose!=8);
	return 0;
}
