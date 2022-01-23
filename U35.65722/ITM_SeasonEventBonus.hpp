#ifndef UE4SS_SDK_ITM_SeasonEventBonus_HPP
#define UE4SS_SDK_ITM_SeasonEventBonus_HPP

class UITM_SeasonEventBonus_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnHover;
    class UBorder* Border_Token;
    class UButton* Button_Outer;
    class UWidgetSwitcher* CLAIM;
    class UImage* Image_592;
    class UImage* Image_686;
    class UImage* Image_BG;
    class UImage* Image_BG_Outline;
    class UImage* Image_Core;
    class UImage* Image_NormalCheckmark;
    class UImage* Image_NormalClaim;
    class UImage* Image_Token;
    class UOverlay* Overlay_Outer;
    class USizeBox* SizeBox_Outer;
    bool Small;
    class USeasonTokenReward* TokenReward;
    ESeasonVisibilityState State;

    class UWidget* Get_Tooltip(class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UTOOLTIP_Season_EventBonus_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void UpdateLook();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_SeasonEventBonus(int32 EntryPoint, ESeasonVisibilityState Temp_byte_Variable, float CallFunc_SelectFloat_ReturnValue, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, FLinearColor Temp_struct_Variable_2, ESeasonVisibilityState Temp_byte_Variable_1, FLinearColor Temp_struct_Variable_3, FLinearColor Temp_struct_Variable_4, FLinearColor Temp_struct_Variable_5, ESeasonVisibilityState Temp_byte_Variable_2, FLinearColor Temp_struct_Variable_6, FLinearColor Temp_struct_Variable_7, FLinearColor Temp_struct_Variable_8, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UWND_Season_RewardClaimed_C* CallFunc_OpenSingleUseWindow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FLinearColor K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess_1, FLinearColor K2Node_Select_Default_1, FLinearColor K2Node_Select_Default_2, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_ClaimScripChallenge_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
};

#endif
