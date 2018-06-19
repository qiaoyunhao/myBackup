#include<iostream>
using namespace std;
//
#define MAXVEX 100/* ��󶥵�����Ӧ���û����� */
#define INFINITY  65535 /* ��ʾȨֵ������*/

typedef int EdgeType;/* ���ϵ�Ȩֵ����Ӧ���û����� */
typedef char VertexType;/* ��������Ӧ���û�����  */

typedef struct
{
	VertexType vexs[MAXVEX];/* ����� */
	EdgeType arc[MAXVEX][MAXVEX];/* �ڽӾ��󣬿ɿ����߱� */
	int numNodes, numEdges;/* ͼ�е�ǰ�Ķ������ͱ���  */
} MGraph;
/* ����������ͼ���ڽӾ����ʾ */
void CreateMGraph(MGraph *Gp)
{
	int i, j, k, w;
	cout << "�����붥�����ͱ������ո�ָ�����" << endl;
	cin >> Gp->numNodes >> Gp->numEdges;
	cout << "�����붥����Ϣ���ո�ָ�����" << endl;
	for (i = 0; i < Gp->numNodes; i++)
		cin >> Gp->vexs[i];
	for (i = 0; i < Gp->numNodes; i++)
	{
		for (j = 0; j < Gp->numNodes; j++)
		{
			if (i == j)
				Gp->arc[i][j] = 0;/* ����û�е��Լ��ı�*/
			else
				Gp->arc[i][j] = INFINITY;/* �ڽӾ����ʼ�� */
		}
	}

	for (k = 0; k < Gp->numEdges; k++)
	{
		cout << "������ߣ�vi, vj)���ϱ�i���±�j��Ȩֵw���ո�ָ���:" << endl;
		cin >> i >> j >> w;
		Gp->arc[i][j] = w;
		Gp->arc[j][i] = Gp->arc[i][j];/* ��Ϊ������ͼ������Գ� */
	}
}

int main(void)
{
	MGraph MG;
	CreateMGraph(&MG);

	return 0;
}