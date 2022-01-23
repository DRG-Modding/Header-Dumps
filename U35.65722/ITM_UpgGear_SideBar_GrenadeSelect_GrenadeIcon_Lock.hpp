#ifndef UE4SS_SDK_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_HPP
#define UE4SS_SDK_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_HPP

class UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_1;
    class UImage* Image_1;
    class UImage* Image_3;
    class UImage* Image_4;
    class UTextBlock* ValueLabel;

    void PreConstruct(bool IsDesignTime);
    void SetData(int32 CharacterLevel);
    void ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_Lock(int32 EntryPoint, int32 K2Node_CustomEvent_CharacterLevel, FText CallFunc_Conv_IntToText_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
};

#endif
