/*
	Merge Sort �˰��� ������.
*/
# include <stdio.h>
# define MAX_SIZE 8

int sorted[MAX_SIZE];


/* ���ĵ� ����Ʈ���� �ϳ��� ���� */
void merge(int list[], int left, int mid, int right){
  int i, j, k, l;
  i = left;
  j = mid+1;
  k = left;

	/*
	i: ���ĵ� ���� ����Ʈ�� ���� �ε���	
	j: ���ĵ� ������ ����Ʈ�� ���� �ε���	
	k: ���ĵ� ����Ʈ�� ���� �ε��� 
	*/ 
  while(i<=mid && j<=right){
    if(list[i]<=list[j])//���� ����Ʈ ���� �� ū ���, �ش� ���� sorted�迭�� �ְ� ���� ����Ʈ�� ��ġ �̵�. 
      sorted[k++] = list[i++];
    else//������ ����Ʈ ���� �� ū ���, �ش� ���� sorted�迭�� �ְ� ������ ����Ʈ�� ��ġ �̵�. 
      sorted[k++] = list[j++];
  }

  if(i>mid){//������ ����Ʈ�� ���� �������� ��� 
    for(l=j; l<=right; l++)
		sorted[k++] = list[l];
  }
  else{//���� ����Ʈ�� ���� �������� ��� 
    for(l=i; l<=mid; l++)
		sorted[k++] = list[l];
  }

  // �ӽ� �迭�� ����Ʈ�� �迭 list[]�� �纹��
  for(l=left; l<=right; l++){
    list[l] = sorted[l];
  }
}

// �պ� ����
void merge_sort(int list[], int left, int right){
  int mid;

  if(left<right){
    mid = (left+right)/2; // �߰� ��ġ�� ����Ͽ� ����Ʈ�� �յ� ���� -����(Divide)
    merge_sort(list, left, mid); // ���� �κ� ����Ʈ ���� -����(Conquer)
    merge_sort(list, mid+1, right); // ���� �κ� ����Ʈ ���� -����(Conquer)
    merge(list, left, mid, right); // ���ĵ� 2���� �κ� �迭�� �պ��ϴ� ���� -����(Combine)
  }
  
}

int main(){
  int i;
  int n = MAX_SIZE;
  int list[n] = {21, 10, 12, 20, 25, 13, 15, 22};

  // �պ� ���� ����
  merge_sort(list, 0, n-1);

  // ���� ��� ���
  for(i=0; i<n; i++){
    printf("%d\n", list[i]);
  }
  
  return 0; 
}
