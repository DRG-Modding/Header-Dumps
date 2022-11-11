#ifndef UE4SS_SDK_LCD_MissionReadout_Garbage01_HPP
#define UE4SS_SDK_LCD_MissionReadout_Garbage01_HPP

class ULCD_MissionReadout_Garbage01_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_41;
    class UBiome* Biome;

    void Construct();
    void ExecuteUbergraph_LCD_MissionReadout_Garbage01(int32 EntryPoint);
};

#endif
