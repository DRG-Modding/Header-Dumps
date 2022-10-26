#ifndef UE4SS_SDK_LCD_MissionReadout_Biome_HPP
#define UE4SS_SDK_LCD_MissionReadout_Biome_HPP

class ULCD_MissionReadout_Biome_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Pan;
    class UTextBlock* BiomeName;
    class UImage* Image_Biome;
    class UTextBlock* PlanetaryRegion;
    class UUI_MissionReadOut_Base_C* UI_MissionReadOut_Base;
    class UBiome* Biome;

    void BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(class UGeneratedMission* InMission);
    void Construct();
    void ExecuteUbergraph_LCD_MissionReadout_Biome(int32 EntryPoint);
};

#endif
