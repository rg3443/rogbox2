#include "OTF_render.h"

void OTF_render::setup(QAB * qb)
{
	this->qb = qb;
	cast.setup(qb->get_etrnd(),qb->get_etwnd());
	cast.SetColorKey(typecolor(255,255,255));
	rus_font.init();
	sheet_path = rus_font.get_sheet_path();
}

void OTF_render::DrawSheetText(string text,cords pos, int size)
{
	 int SIZEW = size;
	 int SIZEH = size;
    setlocale(LC_ALL, "Russian");
	int smeshx = 0;
	int smeshy = 0;
	string buf;
	for(int symid=0;symid<text.size();symid++)
	{
		SDL_Rect * symbol_field = rus_font.get_rect_by_symbol(text[symid]);
		cast.DrawImage(sheet_path,pos,cords(pos.x+SIZEW,pos.y+SIZEH),symbol_field);

		pos.x += size;

	}
}

void OTF_render::DrawOtfText(string text, cords pos, int size, int color)
{
    setlocale(LC_ALL, "Russian");
	printf("STATUS : DRAWING OTF TEXT   \n");
	string buf;
	for(int symid=0;symid<text.size();symid++)
	{
		buf = text[symid];
        printf("\tSTATUS : full text is %s : HIS SIZE IS %d: current sym(id#%d) to draw %s \n",text,text.size(),symid,buf);
		this->DrawRusText_w(buf,pos,size,color);
        printf("\tSTATUS : draw sym finished\n",text,buf);
		pos.x += size;
	}
}

void OTF_render::DrawRusText_w(string text, cords pos,int size,int color)
{
	/*
		class using 2 directories : misc/ALF & misc/ALFWHITE
		all letters have same name in different colors (.../s#.bmp)
	*/

	string sym;
	 int SIZEW = size;
	 int SIZEH = size;
    setlocale(LC_ALL, "Russian");
	string path,last_direction;
	path = "misc\\ALFWHITE\\";

	stringstream type_changer_xd;
	type_changer_xd << text;
	char symbol;
	type_changer_xd >> symbol;

    int smeshx = 0;
	int smeshy = 0;
		switch(symbol)
		{
		case 'à':
		cout << "its a" << endl;
			last_direction = "s1.bmp";
			path = path + last_direction;
		break;
		case 'á':
			path = path + "s2.bmp";
		break;
		case 'â':
			path = path + "s3.bmp";
		break;
		case 'ã':
			path = path + "s4.bmp";
		break;
		case 'ä':
			path = path + "s5.bmp";
        break;
		case 'å':
			path = path + "s6.bmp";
        break;
		case 'æ':
			path = path + "s7.bmp";
        break;
		case 'ç':
			path = path + "s8.bmp";
        break;
		case 'è':
			path = path + "s9.bmp";
        break;
		case 'é':
			path = path + "s10.bmp";
        break;
		case 'ê':
			path = path + "s11.bmp";
        break;
		case 'ë':
			path = path + "s12.bmp";
        break;
		case 'ì':
			path = path + "s13.bmp";
        break;
		case 'í':
			path = path + "s14.bmp";
        break;
		case 'î':
			path = path + "s15.bmp";
        break;
		case 'ï':
			path = path + "s16.bmp";
        break;
		case 'ð':
			path = path + "s17.bmp";
        break;
		case 'ñ':
			path = path + "s18.bmp";
        break;
		case 'ò':
			path = path + "s19.bmp";
        break;
		case 'ó':
			path = path + "s20.bmp";
        break;
		case 'ô':
			path = path + "s21.bmp";
        break;
		case 'õ':
			path = path + "s22.bmp";
        break;
		case 'ö':
			path = path + "s23.bmp";
        break;
		case '÷':
			path = path + "s24.bmp";
        break;
		case 'ø':
			path = path + "s25.bmp";
        break;
		case 'ù':
			path = path + "s26.bmp";
        break;
		case 'ú':
			path = path + "s27.bmp";
		break;
		case 'û':
			path = path + "s28.bmp";
		break;
		case 'ü':
			path = path + "s29.bmp";
        break;
		case 'ý':
			path = path + "s30.bmp";
        break;
		case 'þ':
			path = path + "s31.bmp";
        break;
		case 'ÿ':
			path = path + "s32.bmp";
        break;
		}
		cout << path << endl;
		cast.DrawImage(path,cords(pos.x+smeshx,pos.y+smeshy),cords(pos.x+SIZEW,pos.y+SIZEH));
		smeshx += size;
}
