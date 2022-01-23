#ifndef UE4SS_SDK_Widget_DropPod_BiomeRadar_HPP
#define UE4SS_SDK_Widget_DropPod_BiomeRadar_HPP

class UWidget_DropPod_BiomeRadar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* RadarRotation;
    class UWidgetAnimation* DeepDiveLogo;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon_0;
    class UTextBlock* DATA_PlanetaryRegionName;
    class UVerticalBox* DeepDive;
    class UImage* Gradient;
    class UVerticalBox* NoDeepDive;
    class UImage* RadarOutline;
    class UImage* RadarSweep;
    class UTextBlock* TextBlock_0;
    class UUI_ImageTinted_C* UI_ImageTinted;
    class UUI_MaskedImage_C* UI_MaskedImage;
    class UVerticalBox* VerticalBox_MissionData;
    class UWidgetSwitcher* WidgetSwitcher_1;
    float Depth;
    float Angle;
    class UBiome* Biome;

    void SetGeneratedMission(class UGeneratedMission* In Mission, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Array_Index_Variable, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_IsDeepDive_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FResourceSpawner CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, TArray<class UBasic_ResourceIcon_C*>& K2Node_MakeArray_Array, class UBasic_ResourceIcon_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, int32 CallFunc_Add_IntInt_ReturnValue, const FText CallFunc_GetBiomeName_ReturnValue);
    void Construct();
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_Widget_DropPod_BiomeRadar(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FExecuteUbergraph_Widget_DropPod_BiomeRadarK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission);
};

#endif
