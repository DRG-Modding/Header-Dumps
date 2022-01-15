#ifndef UE4SS_SDK_LCD_MissionReadout_Biome_HPP
#define UE4SS_SDK_LCD_MissionReadout_Biome_HPP

class ULCD_MissionReadout_Biome_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* BiomeName;
    UImage* Image_Biome;
    UTextBlock* PlanetaryRegion;
    UUI_MissionReadOut_Base_C* UI_MissionReadOut_Base;
    UBiome* Biome;

    void BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(UGeneratedMission* InMission);
    void ExecuteUbergraph_LCD_MissionReadout_Biome(int32 EntryPoint, const FText CallFunc_GetBiomeName_ReturnValue, bool CallFunc_IsValid_ReturnValue, UGeneratedMission* K2Node_ComponentBoundEvent_InMission, UTexture2D* CallFunc_GetBiomeWorldMap_ReturnValue);
}

#endif
