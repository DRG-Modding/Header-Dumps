#ifndef UE4SS_SDK_Itm_LevelSelectIcon_HPP
#define UE4SS_SDK_Itm_LevelSelectIcon_HPP

class UItm_LevelSelectIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ScaleUp;
    class UButton* Button_Outer;
    class UImage* Image_Icon;
    FVector2D Size;
    bool IsSelected;
    FItm_LevelSelectIcon_CClicked Clicked;
    void Clicked(int32 Level);
    int32 startLevel;
    int32 numberOfLevels;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void Update(bool InIsSelected);
    void ExecuteUbergraph_Itm_LevelSelectIcon(int32 EntryPoint, bool Temp_bool_Variable, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool K2Node_Event_IsDesignTime, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, bool CallFunc_HasClaimedLevelRewards_ReturnValue, bool K2Node_CustomEvent_InIsSelected, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool Temp_bool_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_2, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_1, FLinearColor CallFunc_MenuColors_OutputColor);
    void Clicked__DelegateSignature(int32 Level);
};

#endif
