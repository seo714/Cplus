#include <iostream>
using namespace std;

//適掘什 雌紗
// 適掘什人 適掘什研 尻衣馬澗 楳是
// 梓端 娃拭 域寵旋昔 淫域研 妊薄馬壱 粛精 井酔 紫遂馬澗 竺域 号狛
// 
// ex) Person(雌是 適掘什澗 亜舌 因搭旋昔 採歳幻 亜像)
//			 -Employee
//					  -Supervisor(馬是 適掘什稽 哀呪系 希 弦精 拙穣 遭楳 ぁい
//     Fruit
//			 -Apple
// 

//適掘什 雌紗 幻球澗 号狛
//class  適掘什誤 : 羨悦薦廃切 適掘什誤
//{
//
//};

//羨悦 薦廃切税 曽嫌
// private : 須採 羨悦 榎走(鎧採 汽戚斗)
// public : 穿端 因政(須採拭辞 紫遂拝 奄管)
// protectd : 雌紗 淫域猿走税 尻衣(淫域失 汽戚斗)


class Item 
{
private:
	int code;
public:
	string name;
	string discription;
};

class Potion : public Item
{
public:
	int count;
	Potion(string name, string description, int count)
	{
		//this澗 適掘什 鎧採税 汽戚斗研 溌昔馬澗 遂亀(切奄切重)
		// 雌紗聖 搭背 適掘什研 竺域馬檎, 奄糎税 適掘什(採乞 適掘什)亜 亜走壱 赤澗 葵聖 亜像
		// 舘, 雌紗税 井酔 privat拭 企廃 羨悦精 災亜
		this->name = name;
		this->discription = discription;
		this->count = count;
	}
	void Use()
	{
		count--;
		cout <<name<< "匂芝聖 紫遂梅柔艦陥." << endl;

		if (count < 0)
		{
			delete this;
		}
	}
};

//雌紗税 舌繊
// 1. 坪球税 仙紫遂戚 亜管(奄糎税 滴掘什税 舛左研 益企稽 亜閃人辞 紫遂馬奄 凶庚拭 
//    搾汁廃 奄管聖 亜遭 歯稽錘 適掘什研 幻級 凶 災琶推廃 掻差 照 拝 呪 しし
//
// 2. 働舛 辞搾什(API) 姥薄拭 赤嬢辞 搭析吉 莫殿税 堂稽潤 薦因拝 呪 赤製
//    戚澗 鯵降切級原陥 唖切税 什展析稽 鯵降背 鯵降 肇識聖 爽澗 庚薦研 背衣 拝 呪 しし
//    戚澗 Java蟹 C#税 Interface 鯵割引 政紫
//
// 昔斗凪戚什(Interface) : 因搭旋生稽 紫遂鞠澗 奄管級拭 企廃 堂 薦因(奄管 姥薄 X)
//						  戚硯聖 穿含 閤精 楕拭辞 切端旋生稽 鯵降馬亀系 搭析吉 丞縦生稽, 政走 左呪拭 反引旋析 呪 しし
//
//3. 坪球 姥薄 獣税 姥薄 神嫌研 匝析 呪 しし
// (背雁 奄管聖 雌紗閤走 省生檎 拭君亜 降持馬亀系 竺域馬澗 号縦 --> 授呪 亜雌敗呪)

// 舘繊
// 1. 衣杯亀亜 格巷 雌渋(馬蟹研 呪舛馬檎 淫恵 坪球 乞砧 慎狽)
// 2. 災琶推廃 奄管拭 企廃 雌紗戚 降持拝 呪 しし
// 3. 雌紗精 砧鯵税 適掘什研 尻衣馬澗 奄管生稽, 陥丞馬惟 尻衣鞠醤馬澗 汽戚斗 妊薄拭澗 廃域旋績
//4. 陥戚焼佼球 雌紗 庚薦
//		A, B, C, D 適掘什
//		戚凶 A澗 B人 C研 雌紗閤製
//		D研 搭背 B人 C研 幻糾
// 戚訓 井酔 B人 C澗 唖唖 D税 奄管聖 弘形閤精 雌殿戚壱, 
// 益 奄管聖 A拭惟 穿含廃 井酔 A澗 B人 C税 奄管 掻 嬢恐 葵拭 羨悦背醤馬澗亜?虞澗 庚薦 降持(乞硲失)


// 【C++税 適掘什 娃税 淫域【
// 1/ is A 淫域
// : ~澗 ~戚陥稽 背汐鞠澗 井酔
// 析鋼旋生稽 適掘什 雌紗聖 搭背 姥薄
// ex) Pianist is a Musician 
//     Singer is a Musitian
//     
// class Musician
// class Pianist : public Musician
// class Singer : public Musician


// 2. has A 淫域
// : 澗 ~研 亜走壱 赤陥壱 背汐鞠澗 井酔
// ex) 殿掘澗 奄展研 亜走壱 赤陥. 
// 
// 殿掘亜 奄展研 亜走壱 赤走 省焼亀 庚薦亜 降持馬走 省製(戚 淫域澗)
// 聡 殿掘 calss人 奄展 class亜 持失鞠澗 獣奄蟹 社瑚鞠澗 獣奄亜 旭聖 琶推 蒸製
// 
// 雌紗戚 焼観 適掘什 鎧採拭 適掘什研 亜走壱 赤澗 莫殿稽 竺域
// class  taerae
//{
//	public:
//		guitar a;
//}

//3. 陳匂走芝(Composition) : 姥失
// : 轄軒旋昔 淫域研 莫失馬澗 井酔
// ex) 辻濃斗澗 CPU研 亜走壱 赤陥.
//
// 社政馬壱 赤澗 鯵端税 持失引 社瑚戚 辞稽 曽紗旋昔 井酔

//4. 尻淫淫域(Association)
// 呪汝旋昔 淫域拭 企廃 妊薄
// ex) 税紫人 鉦紫
// 発切税 井酔 税紫研 幻蟹檎 鉦紫牽 幻蟹惟 吉陥. (Y/N)
// 発切税 井酔 鉦紫研 幻蟹檎 税紫研 幻蟹惟 吉陥. (Y/N)
//
// 戚 井酔虞檎 税紫人 鉦紫亜 因搭旋生稽 拝 呪 赤澗 楳是研 企雌生稽 奄管聖 姥薄
//ex) class Druggist {}
//	  class Doctor
//    {
//       // 帖戟研 馬壱 衣引研 奄鋼生稽 鉦紫拭惟 鉦 坦号聖 推短馬澗 坪球
//		 void Treatiment(Druggist* druggist) {}
//    }
//	  class Doctor {}
//	  class Druggist
//	  {
//	    //税紫拭惟 閤精 舛左研 奄鋼生稽 鉦聖 繕仙馬澗 坪球
//	    void Hasty(Doctor* doctor){}
//	  };


//5. 税糎 淫域(dependency)
// 穿含吉 依聖 搭背 硲窒
// ex)因舌拭辞 切疑託研 持失
// 
// 
// ex) class Die { public void motion() {}}
// class Plyer
// {
// public:
//		void OnDead(Die die) { die.motion() }
//}

int main()
{
	Potion p("督櫛", "督空事 匂芝戚陥",1);
	p.Use();

	return 0;
}