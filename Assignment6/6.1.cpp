#include <stdio.h>
#include <stdlib.h>

int main()
{
    int thanhtoan=0;
    getchar();
    system("cls");
    do{
        int menuChinh=0;
        while (menuChinh<1 || menuChinh>4)
        {
            printf("\nCHAO MUNG QUY KHACH DEN VOI NHA HANG!!!\n\nXin moi quy khach chon theo MENU.\n");
            printf("\n1.\tMon An\n\n2.\tDo Uong\n\n3.\tThanh Toan\n\n4.\tThoat.\n\n");
            printf("\nMoi ban chon: ");
            scanf("%d",&menuChinh);
            getchar();
            system("cls");
        }
    	switch (menuChinh)
    	{
	    	case 1:
            system("cls");
                int monAn;
                while (monAn<1 || monAn>5)
                {
                    printf("\nThuc don mon an: \n");
                    printf("\n1.\tCom Ga\t40k\n\n2.\tBun\t30k\n\n3.\tPho\t30k");
                    printf("\n\n4.\tMy\t30k\n\n5.\tQuay lai\n\n");
                    printf("\nMoi ban chon: ");
                    scanf("%d",&monAn);
                    system("cls");
                    if (monAn==1)
                    {
                        printf("\nCam on quy khach da chon mon Com Ga 40k\n");
                        thanhtoan = thanhtoan + 40;
                        getchar();
                        monAn=0;
                        break;
                    }
                    if (monAn==2)
                    {
                        printf("\nCam on quy khach da chon mon Bun 30k\n");
                        thanhtoan = thanhtoan + 30;
                        getchar();
                        monAn=0;
                        break;
                    }
                    if (monAn==3)
                    {
                        printf("\nCam on quy khach da chon mon Pho 30k\n");
                        thanhtoan = thanhtoan + 30;
                        getchar();
                        monAn=0;
                        break;
                    }
                    if (monAn==4)
                    {
                        printf("\nCam on quy khach da chon mon My 30k\n");
                        thanhtoan = thanhtoan + 30;
                        getchar();
                        monAn=0;
                        break;
                    }
                    if (monAn==5)
                    {
                        monAn=0;
                        break;
                    }
                }
			    break;
		    case 2:
            system("cls");
                int doUong;
                while (doUong<1 || doUong>5)
                {
                    printf("\nThuc don do uong: \n");
                    printf("\n1.\tCoCaCoLa\t10k\n\n2.\tPepsi\t\t10k\n\n3.\tRedBull\t\t15k");
                    printf("\n\n4.\tTra Da\t\tfree\n\n5.\tQuay lai\n\n");
                    printf("\nMoi ban chon: ");
                    scanf("%d",&doUong);
                    system("cls");
                    if (doUong==1)
                    {
                        printf("\nCam on quy khach da chon CoCaCoLa 10k\n");
                        thanhtoan = thanhtoan + 10;
                        getchar();
                        doUong=0;
                        break;
                    }
                    if (doUong==2)
                    {
                        printf("\nCam on quy khach da chon Pepsi 10k\n");
                        thanhtoan = thanhtoan + 10;
                        getchar();
                        doUong=0;
                        break;
                    }
                    if (doUong==3)
                    {
                        printf("\nCam on quy khach da chon RedBull 15k\n");
                        thanhtoan = thanhtoan + 15;
                        getchar();
                        doUong=0;
                        break;
                    }
                    if (doUong==4)
                    {
                        printf("\nCam on quy khach da chon Tra da FREE!!!\n");
                        getchar();
                        doUong=0;
                        break;
                    }
                    if (doUong==5)
                    {
                        doUong=0;
                        break;
                    }
                }
			    break;
	    	case 3:
            system("cls");
		    	printf("\nThanh toan: \n");
                if (thanhtoan==0)
                {
                    printf("\nXin moi quy khach chon mon truoc.");
                }else{
                    printf("\nCam on quy khach da den voi nha hang!\n");
                    printf("\nTong so tien voi nhung mon quy khach da chon la %dk.\n",thanhtoan);
                }
		    	break;
            case 4:
            system("cls");
                printf("\nXin moi quy khach ra ban ngoi cho,\nNhan vien se den phuc vu quy khach som nhat.");
                printf("\nCam on quy khach da den nha hang!\nChuc quy khach ngon mieng!\n");
                thanhtoan-=thanhtoan;
                break;
    		default:
	    	break;
	    }
        getchar();
        system("cls");
        menuChinh=0;
    }while(true);
}