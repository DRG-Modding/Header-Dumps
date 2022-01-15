#ifndef UE4SS_SDK_Widget_DropPod_BiomeRadar_HPP
#define UE4SS_SDK_Widget_DropPod_BiomeRadar_HPP

class UWidget_DropPod_BiomeRadar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* RadarRotation;
    UWidgetAnimation* DeepDiveLogo;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_ResourceIcon_C* Basic_ResourceIcon;
    UBasic_ResourceIcon_C* Basic_ResourceIcon_0;
    UTextBlock* DATA_PlanetaryRegionName;
    UVerticalBox* DeepDive;
    UImage* Gradient;
    UVerticalBox* NoDeepDive;
    UImage* RadarOutline;
    UImage* RadarSweep;
    UTextBlock* TextBlock_0;
    UUI_ImageTinted_C* UI_ImageTinted;
    UUI_MaskedImage_C* UI_MaskedImage;
    UVerticalBox* VerticalBox_MissionData;
    UWidgetSwitcher* WidgetSwitcher_1;
    float Depth;
    float Angle;
    UBiome* Biome;

    void SetGeneratedMission(UGeneratedMission* In Mission, bool CallFunc_IsValid_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Array_Index_Variable, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_IsDeepDive_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FResourceSpawner CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, TArray<UBasic_ResourceIcon_C*>& K2Node_MakeArray_Array, UBasic_ResourceIcon_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, int32 CallFunc_Add_IntInt_ReturnValue, const FText CallFunc_GetBiomeName_ReturnValue);
    void Construct();
    void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_Widget_DropPod_BiomeRadar(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, GeneratedMissionSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission);
}

#endif
