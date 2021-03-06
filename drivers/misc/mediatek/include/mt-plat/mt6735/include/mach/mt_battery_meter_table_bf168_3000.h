#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

//#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#endif

#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT {
	signed int resistance;
	signed int voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,67790},
        {-15,53460},
        {-10,42450},
        { -5,33930},
        {  0,27280},
        {  5,22070},
        { 10,17960},
        { 15,14700},
        { 20,12090},
        { 25,10000},
        { 30,8310},
        { 35,6940},
        { 40,5830},
        { 45,4910},
        { 50,4160},
        { 55,3540},
        { 60,3020}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUCT battery_profile_t0[] =
{
{0   ,4399 },  
{2   ,4364 },  
{4   ,4337 },  
{5   ,4311 },  
{7   ,4287 },  
{9   ,4261 },  
{11  ,4236 },  
{12  ,4214 },  
{14  ,4190 },  
{16  ,4168 },  
{18  ,4146 },  
{20  ,4123 },  
{21  ,4102 },  
{23  ,4082 },  
{25  ,4063 },  
{27  ,4043 },  
{28  ,4023 },  
{30  ,4004 },  
{32  ,3988 },  
{34  ,3971 },  
{35  ,3956 },  
{37  ,3938 },  
{39  ,3924 },  
{41  ,3907 },  
{43  ,3895 },  
{44  ,3883 },  
{46  ,3870 },  
{48  ,3858 },  
{50  ,3845 },  
{51  ,3836 },  
{53  ,3826 },  
{55  ,3814 },  
{57  ,3805 },  
{59  ,3795 },  
{60  ,3790 },  
{62  ,3782 },  
{64  ,3775 },  
{66  ,3769 },  
{67  ,3762 },  
{69  ,3756 },  
{71  ,3749 },  
{73  ,3741 },  
{75  ,3734 },  
{76  ,3725 },  
{78  ,3718 },  
{80  ,3710 },  
{82  ,3699 },  
{83  ,3690 },  
{85  ,3681 },  
{87  ,3671 },  
{89  ,3659 },  
{90  ,3645 },  
{92  ,3627 },  
{94  ,3604 },  
{95  ,3589 },  
{96  ,3583 },  
{96  ,3579 },  
{97  ,3571 },  
{100 ,3568 },  
}; 
             

// T1 0C
BATTERY_PROFILE_STRUCT battery_profile_t1[] =
{
 {0   ,4397 },   
 {2   ,4371 },   
 {4   ,4349 },   
 {5   ,4328 },   
 {7   ,4308 },   
 {9   ,4287 },   
 {11  ,4266 },   
 {12  ,4246 },   
 {14  ,4225 },   
 {16  ,4203 },   
 {18  ,4182 },   
 {19  ,4162 },   
 {21  ,4141 },   
 {23  ,4120 },   
 {25  ,4098 },   
 {26  ,4077 },   
 {28  ,4058 },   
 {30  ,4035 },   
 {32  ,4017 },   
 {33  ,3997 },   
 {35  ,3981 },   
 {37  ,3963 },   
 {39  ,3948 },   
 {40  ,3934 },   
 {42  ,3919 },   
 {44  ,3906 },   
 {46  ,3894 },   
 {47  ,3883 },   
 {49  ,3872 },   
 {51  ,3860 },   
 {53  ,3852 },   
 {54  ,3847 },   
 {56  ,3833 },   
 {58  ,3824 },   
 {60  ,3814 },   
 {61  ,3807 },   
 {63  ,3800 },   
 {65  ,3793 },   
 {67  ,3787 },   
 {68  ,3782 },   
 {70  ,3781 },   
 {72  ,3774 },   
 {74  ,3767 },   
 {75  ,3760 },   
 {77  ,3757 },   
 {79  ,3748 },   
 {81  ,3744 },   
 {82  ,3730 },   
 {84  ,3718 },   
 {86  ,3708 },   
 {88  ,3692 },   
 {89  ,3677 },   
 {91  ,3662 },   
 {93  ,3648 },   
 {95  ,3625 },   
 {96  ,3591 },   
 {98  ,3533 },   
 {98  ,3508 },   
 {100 ,3483 },   
      
}; 
               

// T2 25C
BATTERY_PROFILE_STRUCT battery_profile_t2[] =
{                                         
{0    ,4392 },
{2    ,4366 },
{3    ,4346 },
{5    ,4327 },
{7    ,4308 },
{9    ,4288 },
{10   ,4268 },
{12   ,4247 },
{14   ,4226 },
{16   ,4206 },
{17   ,4187 },
{19   ,4167 },
{21   ,4147 },
{22   ,4128 },
{24   ,4108 },
{26   ,4090 },
{28   ,4072 },
{29   ,4055 },
{31   ,4038 },
{33   ,4020 },
{34   ,4004 },
{36   ,3988 },
{38   ,3969 },
{40   ,3951 },
{41   ,3932 },
{43   ,3916 },
{45   ,3899 },
{47   ,3885 },
{48   ,3873 },
{50   ,3862 },
{52   ,3850 },
{53   ,3843 },
{55   ,3832 },
{57   ,3824 },
{59   ,3816 },
{60   ,3810 },
{62   ,3802 },
{64   ,3796 },
{65   ,3790 },
{67   ,3785 },
{69   ,3779 },
{71   ,3772 },
{72   ,3766 },
{74   ,3759 },
{76   ,3752 },
{78   ,3744 },
{79   ,3736 },
{81   ,3730 },
{83   ,3723 },
{84   ,3712 },
{86   ,3699 },
{88   ,3687 },
{90   ,3672 },
{91   ,3666 },
{93   ,3658 },
{95   ,3646 },
{97   ,3617 },
{98   ,3538 },
{100  ,3400 },
};
                 
                 

// T3 50C
BATTERY_PROFILE_STRUCT battery_profile_t3[] =
{                  
{0   ,4387 },  
{2   ,4365 },  
{3   ,4346 },                         
{5   ,4329 },  
{7   ,4308 },  
{9   ,4287 },  
{10  ,4267 },  
{12  ,4246 },  
{14  ,4227 },  
{16  ,4208 },  
{17  ,4184 },  
{19  ,4168 },  
{21  ,4151 },  
{23  ,4128 },  
{24  ,4111 },  
{26  ,4092 },  
{28  ,4075 },  
{30  ,4059 },  
{31  ,4041 },  
{33  ,4027 },  
{35  ,4010 },  
{37  ,3994 },  
{38  ,3979 },  
{40  ,3961 },  
{42  ,3942 },  
{43  ,3924 },  
{45  ,3907 },  
{47  ,3894 },  
{49  ,3881 },  
{50  ,3872 },  
{52  ,3862 },  
{54  ,3857 },  
{56  ,3843 },  
{57  ,3838 },  
{59  ,3828 },  
{61  ,3824 },  
{63  ,3814 },  
{64  ,3808 },  
{66  ,3801 },  
{68  ,3796 },  
{70  ,3791 },  
{71  ,3780 },  
{73  ,3769 },  
{75  ,3759 },  
{76  ,3752 },  
{78  ,3741 },  
{80  ,3739 },  
{82  ,3726 },  
{83  ,3719 },  
{85  ,3708 },  
{87  ,3692 },  
{89  ,3681 },  
{90  ,3678 },  
{92  ,3668 },  
{94  ,3659 },  
{96  ,3636 },  
{97  ,3570 },  
{99  ,3469 },  
{100 ,3400 },  
};  

             


// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUCT battery_profile_temperature[] =
{
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUCT r_profile_t0[] =
{             
{757  ,4399 }, 
{757  ,4364 }, 
{760  ,4337 }, 
{757  ,4311 }, 
{753  ,4287 }, 
{738  ,4261 }, 
{726  ,4236 }, 
{722  ,4214 }, 
{710  ,4190 }, 
{701  ,4168 }, 
{691  ,4146 }, 
{682  ,4123 }, 
{679  ,4102 }, 
{676  ,4082 }, 
{670  ,4063 }, 
{667  ,4043 }, 
{661  ,4023 }, 
{657  ,4004 }, 
{663  ,3988 }, 
{657  ,3971 }, 
{667  ,3956 }, 
{667  ,3938 }, 
{667  ,3924 }, 
{667  ,3907 }, 
{673  ,3895 }, 
{676  ,3883 }, 
{682  ,3870 }, 
{685  ,3858 }, 
{691  ,3845 }, 
{698  ,3836 }, 
{704  ,3826 }, 
{704  ,3814 }, 
{707  ,3805 }, 
{710  ,3795 }, 
{722  ,3790 }, 
{728  ,3782 }, 
{741  ,3775 }, 
{750  ,3769 }, 
{760  ,3762 }, 
{769  ,3756 }, 
{778  ,3749 }, 
{797  ,3741 }, 
{815  ,3734 }, 
{834  ,3725 }, 
{865  ,3718 }, 
{909  ,3710 }, 
{949  ,3699 }, 
{1011 ,3690 }, 
{1085 ,3681 }, 
{1191 ,3671 }, 
{1333 ,3659 }, 
{1528 ,3645 }, 
{1801 ,3627 }, 
{2211 ,3604 }, 
{2474 ,3589 }, 
{2458 ,3583 }, 
{2452 ,3579 }, 
{2431 ,3571 }, 
{2425 ,3568 }, 

};

// T1 0C
R_PROFILE_STRUCT r_profile_t1[] =
{               
 {378   ,4397 },  
 {378   ,4371 },  
 {381   ,4349 },  
 {384   ,4328 },  
 {391   ,4308 },  
 {390   ,4287 },  
 {394   ,4266 },  
 {391   ,4246 },  
 {390   ,4225 },  
 {385   ,4203 },  
 {385   ,4182 },  
 {382   ,4162 },  
 {382   ,4141 },  
 {385   ,4120 },  
 {369   ,4098 },  
 {369   ,4077 },  
 {366   ,4058 },  
 {353   ,4035 },  
 {354   ,4017 },  
 {347   ,3997 },  
 {344   ,3981 },  
 {341   ,3963 },  
 {351   ,3948 },  
 {344   ,3934 },  
 {341   ,3919 },  
 {347   ,3906 },  
 {347   ,3894 },  
 {350   ,3883 },  
 {354   ,3872 },  
 {357   ,3860 },  
 {359   ,3852 },  
 {382   ,3847 },  
 {369   ,3833 },  
 {375   ,3824 },  
 {369   ,3814 },  
 {375   ,3807 },  
 {372   ,3800 },  
 {382   ,3793 },  
 {388   ,3787 },  
 {394   ,3782 },  
 {406   ,3781 },  
 {403   ,3774 },  
 {403   ,3767 },  
 {406   ,3760 },  
 {428   ,3757 },  
 {422   ,3748 },  
 {446   ,3744 },  
 {447   ,3730 },  
 {453   ,3718 },  
 {471   ,3708 },  
 {487   ,3692 },  
 {527   ,3677 },  
 {583   ,3662 },  
 {698   ,3648 },  
 {877   ,3625 },  
 {1352  ,3591 },  
 {2334  ,3533 },  
 {2279  ,3508 },  
 {2210  ,3483 },  
}; 

// T2 25C
R_PROFILE_STRUCT r_profile_t2[] =
{
{127  ,4392 },
{127  ,4366 },
{130  ,4346 },
{130  ,4327 },
{133  ,4308 },
{133  ,4288 },
{137  ,4268 },
{136  ,4247 },
{133  ,4226 },
{140  ,4206 },
{140  ,4187 },
{146  ,4167 },
{146  ,4147 },
{149  ,4128 },
{149  ,4108 },
{149  ,4090 },
{155  ,4072 },
{158  ,4055 },
{161  ,4038 },
{164  ,4020 },
{168  ,4004 },
{167  ,3988 },
{164  ,3969 },
{155  ,3951 },
{149  ,3932 },
{146  ,3916 },
{137  ,3899 },
{136  ,3885 },
{136  ,3873 },
{137  ,3862 },
{133  ,3850 },
{140  ,3843 },
{137  ,3832 },
{137  ,3824 },
{139  ,3816 },
{140  ,3810 },
{140  ,3802 },
{143  ,3796 },
{146  ,3790 },
{149  ,3785 },
{149  ,3779 },
{146  ,3772 },
{149  ,3766 },
{149  ,3759 },
{152  ,3752 },
{149  ,3744 },
{146  ,3736 },
{146  ,3730 },
{146  ,3723 },
{143  ,3712 },
{143  ,3699 },
{143  ,3687 },
{143  ,3672 },
{146  ,3666 },
{155  ,3658 },
{164  ,3646 },
{183  ,3617 },
{186  ,3538 },
{186  ,3400 },
};

// T3 50C
R_PROFILE_STRUCT r_profile_t3[] =
{             
{90  ,4387 }, 
{90  ,4365 }, 
{99  ,4346 }, 
{103 ,4329 }, 
{93  ,4308 }, 
{96  ,4287 }, 
{99  ,4267 }, 
{93  ,4246 }, 
{96  ,4227 }, 
{99  ,4208 }, 
{90  ,4184 }, 
{106 ,4168 }, 
{112 ,4151 }, 
{99  ,4128 }, 
{105 ,4111 }, 
{106 ,4092 }, 
{106 ,4075 }, 
{112 ,4059 }, 
{109 ,4041 }, 
{115 ,4027 }, 
{121 ,4010 }, 
{121 ,3994 }, 
{124 ,3979 }, 
{118 ,3961 }, 
{121 ,3942 }, 
{106 ,3924 }, 
{99  ,3907 }, 
{99  ,3894 }, 
{93  ,3881 }, 
{96  ,3872 }, 
{96  ,3862 }, 
{106 ,3857 }, 
{99  ,3843 }, 
{109 ,3838 }, 
{102 ,3828 }, 
{112 ,3824 }, 
{96  ,3814 }, 
{105 ,3808 }, 
{106 ,3801 }, 
{105 ,3796 }, 
{112 ,3791 }, 
{108 ,3780 }, 
{106 ,3769 }, 
{102 ,3759 }, 
{99  ,3752 }, 
{99  ,3741 }, 
{112 ,3739 }, 
{99  ,3726 }, 
{102 ,3719 }, 
{99  ,3708 }, 
{93  ,3692 }, 
{93  ,3681 }, 
{115 ,3678 }, 
{109 ,3668 }, 
{115 ,3659 }, 
{118 ,3636 }, 
{112 ,3570 }, 
{130 ,3469 }, 
{130 ,3400 }, 

};

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUCT r_profile_temperature[] =
{
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

