#ifndef ARTICLE_H
#define ARTICLE_H

#include <iostream>
#include <string>


using namespace std;

extern int number = 0;

class Article
{
private:
	long article;
	string articleName;
	double salesPrice;
public:
	Article()
	{
		article;
		articleName = "Unlnown";
		salesPrice = 0;
		number++;
	}
	Article(long article, const string articleName, double salesPrice)
	{
		this->article = article;
		this->articleName = articleName;
		if (salesPrice <= 0)
		{
			salesPrice = 0;
		}
		this->salesPrice = salesPrice;
		number++;
	}
	void setArticle(long article)
	{
		this->article = article;
	}
	void getArticle()
	{
		cout << "Article : " << article << endl;
	}
	void setArticleName(const string name)
	{
		articleName = name;
	}
	void getArticleName()
	{
		cout << "Article name : " << articleName << endl;
	}
	void setSalesPrice(double price)
	{
		salesPrice = price;
	}
	void getSalesPrice()
	{
		cout << "Sales price : " << salesPrice << endl;
	}
	void print(Article& articles);
};
#endif 