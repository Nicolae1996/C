/*
	Probleme 5
	On considere un tableau bidimensionelle, n <= 20, m <= 30
	Determinner le nombre des elements impares de chaque ligne, 
	Les sommes des elements des colonnes paires et le produit des elements 
	situe sur la diagonale principale et secondaire.
*/
#include<iostream>
using namespace std;
main()
{
	int v[20][30], n, m;
	int inombre = 0;
	
	cout<<"Donnes le nombre du lignes: ";
	cin>>n;
	cout<<"Donnes le nombre du colonnes: ";
	cin>>m;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
		{
			cout<<"v["<<i<<"]["<<j<<"]=";
			cin>>v[i][j];
		}
		
	for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++) {
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
		}
		
	for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++) {
				if(v[i][j]%2==1) inombre++; 	
			}
			cout<<"Le numerous d'elements impares sur la ligne "<<i<<" est "<<inombre<<endl;
			inombre = 0;
		}
		
	int somme = 0;
	for(int j = 0; j < m; j++)
		{
			if (j % 2 == 0)
			{
				for(int i = 0; i < n; i++) {
					somme+=v[i][j];
				}
				cout<<"La somme du collone "<<j<<" est "<<somme<<endl;
				somme = 0;		
			}	
		}
	int produitP = 1;
	int produitS = 1;
	for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++) {
				if (i == j) produitP*=v[i][j];
				if (j == n - i - 1) produitS*=v[i][j];
			}
		}
	cout<<"Le produit de la diagonale principale est : "<<produitP<<endl;
	cout<<"Le produit de la diagonale secondaire est : "<<produitS;
}
